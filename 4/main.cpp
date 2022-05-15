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

    int num;
    set<int> set_num, dif, dif1;;
    set<int> even = { 0,2,4,6,8 };
    set<int> odd = { 1,3,5,7,9 };
    set<int> numbers = { 0,1,2,3,4,5,6,7,8,9 };
   
    cin >> num;
    
    //a
    while (num > 0) {
        set_num.insert(num % 10);
        num /= 10;
    }
    for (auto x : set_num)
        cout << x << ' ';
    cout << endl;

    //б
  
    set_intersection(set_num.begin(), set_num.end(), even.begin(), even.end(), std::inserter(dif, dif.end()));
    for (auto x : dif)
        cout << x << ' ';
    cout << endl;
    dif.clear();

    //в
    set_intersection(set_num.begin(), set_num.end(), odd.begin(), odd.end(), std::inserter(dif, dif.end()));
    for (auto x : dif)
        cout << x << ' ';
    cout << endl;
    dif.clear();

    //г
    set_difference(numbers.begin(), numbers.end(), set_num.begin(), set_num.end(), std::inserter(dif, dif.end()));
    for (auto x : dif)
        cout << x << ' ';
    cout << endl;
    
    //д
    set_difference(dif.begin(), dif.end(), even.begin(), even.end(), std::inserter(dif1, dif1.end()));
    for (auto x : dif1)
        cout << x << ' ';
    cout << endl;

}
