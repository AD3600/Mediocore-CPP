/*
ID: ad36051
LANG: C++
TASK: milk2
*/

#include <iostream>
#include <fstream>
#include <algorithm>
#include <string>
#include <cstring>
#include <math.h>
#include <map>
#include <vector>
#include <utility>

typedef long long ll;
using namespace std;

int main()
{
    freopen("milk2.in", "r", stdin);
    freopen("milk2.out", "w", stdout);
    int N; cin >> N;
    vector< pair<int, int> > v(N), v1;
    for(int i = 0; i < N; i++) cin >> v[i].first >> v[i].second;
    sort(v.begin(), v.end());
    for(int i = 0; i < N; i++) {
        pair<int, int> x = v[i];
        while(i < N - 1 && v[i + 1].first <= x.second) i++, x.second = max(x.second, v[i].second);
        v1.push_back(x);
    }
    int a1 = 0, a2 = 0;
    for(int i = 0; i < v1.size(); i++) a1 = max(a1, v1[i].second - v1[i].first);
    for(int i = 0; i < v1.size(); i++) a2 = max(a2, v1[i + 1].first - v1[i].second);
    cout << a1 << " " << a2 << "\n";
}
