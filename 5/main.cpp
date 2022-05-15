#include <iostream>
#include <string>
#include <tuple>
#include <vector>
#include <algorithm>
#include <functional>
#include <iostream>
#include <numeric>
#include <set>
#include <fstream>
#include <iostream>
#include <string>
#include <random>
#include <ctime>
#include <sstream>
#include <unordered_set>
using namespace std;

void add_letters(set<char>& a, string b) {
    for (int i = 0; i < b.size(); i++)
        a.insert(b[i]);
}

string tocaps(string s) {
    for (int i = 0; i < s.size(); i++)
        s[i] = (char)toupper(s[i]);
    return s;
}

int main() {
    string str;
    getline(cin, str);
    set<string> words;
    set<char> let, let1,dif;
    int i = 0;
    int cur;
    string s;
    do
     {
        cur = str.find(' ', i);
        s = str.substr(i, cur - i);
        words.insert(s);
        i = cur + 1;
     }while (cur != string::npos);
 
    for (auto it = words.begin(); it != words.end(); it++) {
        if (*it == tocaps(*it))
            add_letters(let, *it);
        else
            add_letters(let1, tocaps(*it));
    }
    set_difference(let.begin(), let.end(), let1.begin(), let1.end(), std::inserter(dif, dif.end()));
    for (auto x: dif){
        cout<<x<<" ";
    }

}

