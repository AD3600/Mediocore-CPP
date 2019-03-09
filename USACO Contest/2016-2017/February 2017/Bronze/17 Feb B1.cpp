/*
ID: ad36051
LANG: C++
TASK:
*/

#include <iostream>
#include <fstream>
#include <algorithm>
#include <string>
#include <cstring>
#include <math.h>
#include <map>
#include <vector>

typedef long long ll;
using namespace std;

int main()
{
    freopen("crossroad.in", "r", stdin);
    freopen("crossroad.out", "w", stdout);
    int N; cin >> N;
    map<int, vector<int> > data;
    for(int i = 0; i < N; i++) {
        int a, b; cin >> a >> b;
        data[a].push_back(b);
    }
    int ans = 0;
    for(auto kk : data) {
        vector<int> h = kk.second;
        for(unsigned int i = 1; i < h.size(); i++) {
            if (h[i] != h[i - 1]) ans++;
        }
    }
    cout << ans << "\n";
}
