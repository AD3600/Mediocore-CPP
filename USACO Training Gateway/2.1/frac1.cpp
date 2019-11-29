/*
ID: ad36051
TASK: frac1
LANG: C++                 
*/

#include <iostream>
#include <fstream>
#include <set>
#include <utility>

using namespace std;

set < pair<double, pair<int, int> > > s;

pair<int, int> simplify(pair<int, int> p) {
    int a = p.first, b = p.second;
    while (a != 0) {
        int c = b % a;
        b = a;
        a = c;
    }
    return {p.first / b, p.second / b};
}

int main() {
    freopen("frac1.in", "r", stdin);
    freopen("frac1.out", "w", stdout);
    int N; cin >> N;
    s.insert({0.0, {0, 1}});
    s.insert({1.0, {1, 1}});
    for(int i = 2; i <= N; i++)
        for(int j = 1; j <= i; j++)
            s.insert({(double) j / (double) i, simplify({j, i})});
    for(auto x : s)
        cout << x.second.first << "/" << x.second.second << "\n";
}
