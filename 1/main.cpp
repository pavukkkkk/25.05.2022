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
#include <sstream>
using namespace std;


class point {
public:
    int x, y;

    point(int x, int y) : x(x), y(y) {};

    void print() {
        cout << x << ' ' << y << endl;
    }

    friend bool operator< (const point& a, const point& b) {
        if (a.x != b.x)
            return a.x < b.x;
        return a.y < b.y;
    }

};
int main() {

    point a(9, 1);
    point b(0, -2);

    //чтобы положить свой класс в вектор, не требуется производить кики-лтбо дополнительных действий
    vector<point> vec;
    vec.push_back(a);
    vec.push_back(b);
    for (auto x : vec)
            x.print();
        cout << endl;

//    чтобы положить класс в set\map необходимо задать отношение линейного порядка внутри класса,т.к. эти коллекции являются отсортированными,
    set<point> s;
    s.insert(a);
    s.insert(b);
    for (auto x : s)
            x.print();
        cout << endl;
    
}
