/*
ID: ad36051
LANG: C++
TASK:
*/

#pragma GCC optimize ("O3")
#pragma GCC target ("sse4")

#include <bits/stdc++.h>

using namespace std;

#define ll long long
// #define int ll

#define mp make_pair
#define pb push_back
#define x first
#define y second
#define ub upper_bound
#define lb lower_bound

const int MOD = 1000000007;
const ll INF = 1e18;
const double EPS = 1e-9;
const long double PI = 4*atan((long double) 1);
// const int MAXN = ;

#define watch(x) cout << (#x) << " is " << (x) << endl

namespace io {
    void setIn(string s) { freopen(s.c_str(),"r",stdin); }
    void setOut(string s) { freopen(s.c_str(),"w",stdout); }
    void setIO(string s = "") {
        ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0); cout.precision(20); // fast I/O
        if (s.size()) { setIn(s + ".in"), setOut(s + ".out"); } // for USACO
    }
}

using namespace io;

int32_t main()
{
    setIO();
    
}
