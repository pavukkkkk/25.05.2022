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
    vector<int> vec;
  
    int n, m,a;
    cin>>n>>m;
        for (int i = 0; i < n; i++) {
            cin>>a;
        vec.push_back(a);
    }
    for (auto x : vec)
            cout<<x<<" ";
        cout << endl;
    vector<int>::iterator iter=vec.begin();

    for (int t = 0; t < m; t++) {
        int i, j;
        cin >> i >> j;
        if (i>0 && j<=n){
        cout << accumulate(iter+i-1, iter+j,0) << endl;
        }
        else{
            cout<<"error"<<endl;
        }
    }

}
