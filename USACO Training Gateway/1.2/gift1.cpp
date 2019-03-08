/*
ID: ad36051
LANG: C++
TASK: gift1
*/

#include <iostream>
#include <fstream>
#include <algorithm>
#include <string>
#include <cstring>
#include <math.h>
#include <map>
#include <utility>

typedef long long ll;
using namespace std;

int main()
{
    freopen("gift1.in", "r", stdin);
    freopen("gift1.out", "w", stdout);
    int NP; cin >> NP;
    map<int, string> ord;
    map<string, int> data;
    for(int i = 0; i < NP; i++) {
        string s; cin >> s;
        ord[i] = s;
    }
    for(int i = 0; i < NP; i++) {
        string s; cin >> s;
        int a, b; cin >> a >> b;
        for(int j = 0; j < b; j++) {
            string k; cin >> k;
            data[k] += a / b;
        }
        data[s] -= a;
        if(b != 0) data[s] += a % b;
    }
    for(int i = 0; i < NP; i++) {
        cout << ord[i] << " " << data[ord[i]] << "\n";
    }
}
