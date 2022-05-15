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
using namespace std;

int main() {

    string word;
    set<char> a,dif, dif1;;
    set<char> vowel = { 'a', 'e', 'i', 'o', 'u', 'y' };
    set<char> consonant = { 'z', 'x', 'w', 'v', 't', 's', 'r', 'q', 'p', 'n', 'm', 'l', 'k', 'j', 'h', 'g', 'f', 'd', 'c', 'b' };
    set<char> letters = { 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};
 
    cin >> word;

    //a
    for (int i = 0; i < word.size(); i++)
        a.insert(word[i]);
    for (auto x : a)
        cout << x << ' ';
    cout << endl;

    //б
    set_intersection(a.begin(), a.end(), vowel.begin(), vowel.end(), std::inserter(dif, dif.end()));
    for (auto x : dif)
        cout << x << ' ';
    cout << endl;
    dif.clear();

    //в
    set_intersection(a.begin(), a.end(), consonant.begin(), consonant.end(), std::inserter(dif, dif.end()));
    for (auto x : dif)
        cout << x << ' ';
    cout << endl;
    dif.clear();

    //г
    set_difference(letters.begin(), letters.end(), a.begin(), a.end(), std::inserter(dif, dif.end()));
    for (auto x : dif)
        cout << x << ' ';
    cout << endl;

    //д
    set_difference(dif.begin(), dif.end(), vowel.begin(), vowel.end(),std::inserter(dif1, dif1.end()));
    for (auto x : dif1)
        cout << x << ' ';
    cout << endl;

}
