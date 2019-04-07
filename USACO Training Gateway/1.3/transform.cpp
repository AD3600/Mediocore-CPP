/*
ID: ad36051
LANG: C++
TASK: transform
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

bool is90(vector< vector<char> > x, vector< vector<char> > y, int z) {
    for(int i = 0; i < z; i++) {
        for(int j = 0; j < z; j++) {
            if(x[i][j] != y[j][z - 1 - i]) return false;
        }
    }
    return true;
}

bool is180(vector< vector<char> > x, vector< vector<char> > y, int z) {
    for(int i = 0; i < z; i++) {
        for(int j = 0; j < z; j++) {
            if(x[i][j] != y[z - 1 - i][z - 1 - j]) return false;
        }
    }
    return true;
}

bool is270(vector< vector<char> > x, vector< vector<char> > y, int z) {
    for(int i = 0; i < z; i++) {
        for(int j = 0; j < z; j++) {
            if(x[i][j] != y[z - 1 - j][i]) return false;
        }
    }
    return true;
}

int main()
{
    freopen("transform.in", "r", stdin);
    freopen("transform.out", "w", stdout);
    int N; cin >> N;
    vector< vector<char> > v1, v2, hor;
    v1.resize(N); v2.resize(N); hor.resize(N);
    for(int i = 0; i < N; i++) {
        v1[i].resize(N); v2[i].resize(N); hor[i].resize(N);
    }
    for(int i = 0; i < N; i++) {
        for(int j = 0; j < N; j++) {
            cin >> v1[i][j];
        }
    }
    for(int i = 0; i < N; i++) {
        for(int j = 0; j < N; j++) {
            cin >> v2[i][j];
        }
    }
    for(int i = 0; i < N; i++) {
        for(int j = 0; j < N; j++) {
            hor[i][j] = v1[i][N - 1 - j];
        }
    }
    int ans;
    if(is90(v1, v2, N)) ans = 1;
    else if(is180(v1, v2, N)) ans = 2;
    else if(is270(v1, v2, N)) ans = 3;
    else if(hor == v2) ans = 4;
    else if(is90(hor, v2, N) || is180(hor, v2, N) || is270(hor, v2, N)) ans = 5;
    else if (v1 == v2) ans = 6;
    else ans = 7;
    cout << ans << "\n";
}
