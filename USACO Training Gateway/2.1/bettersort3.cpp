/*
ID: ad36051
TASK: frac1
LANG: C++                 
*/

#include <iostream>
#include <fstream>
#include <algorithm>
#include <vector>
#include <utility>

using namespace std;

vector< pair<int, int> > v;

bool comp(pair<int, int> a, pair<int, int> b) {
    return(a.first * b.second < a.second * b.first);
}

int main() {
    freopen("frac1.in", "r", stdin);
    freopen("frac1.out", "w", stdout);
    int N; cin >> N;
    for(int i = 0; i < N + 1; i++)
        for(int j = i; j < N + 1; j++)
            if(__gcd(i, j) == 1)
                v.push_back({i, j});
    sort(v.begin(), v.end(), comp);
    for(auto x : v)
        cout << x.first << "/" << x.second << "\n";
}
