/*
ID: ad36051
LANG: C++
TASK: ride
*/

#include <iostream>
#include <fstream>
#include <algorithm>
#include <string>
#include <cstring>
#include <math.h>

typedef long long ll;
using namespace std;

int main()
{
    freopen("ride.in", "r", stdin);
    freopen("ride.out", "w", stdout);
    string s1, s2; cin >> s1 >> s2;
    ll prod1 = 1, prod2 = 1;
    for(unsigned int i = 0; i < s1.length(); i++) prod1 = (prod1 * (((int) (s1[i] - 'A' + 1)) % 47) % 47);
    for(unsigned int i = 0; i < s2.length(); i++) prod2 = (prod2 * (((int) (s2[i] - 'A' + 1)) % 47) % 47);
    if(prod1 == prod2) cout << "GO" << "\n";
    else cout << "STAY" << "\n";
}
