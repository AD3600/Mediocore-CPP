/*
ID: ad36051
LANG: C++
TASK: dualpal
*/

#include <iostream>
#include <fstream>
#include <algorithm>
#include <string>
#include <cstring>
#include <math.h>
#include <map>

typedef long long ll;
using namespace std;

string toBase(int base, int x) {
    string out = "";
    while(x > 0) {
        int mod = x % base;
        x /= base;
        if(mod < 10) out += to_string(mod);
        else {
            int asc = mod + 55;
            out += (char) asc;
        }
    }
    for(unsigned int i = 0; i < out.length() / 2; i++) {
        char temp = out[i];
        out[i] = out[out.length() - i - 1];
        out[out.length() - i - 1] = temp;
    }

    return out;
}

bool isPalindrome(string s) {
    for(unsigned i = 0; i < s.length() / 2; i++) {
        if(!(s[i] == s[s.length() - i - 1])) return false;
    }
    return true;
}

int main()
{
    freopen("dualpal.in", "r", stdin);
    freopen("dualpal.out", "w", stdout);
    int N, S, realcounter = 0; cin >> N >> S; S++;
    while(realcounter < N) {
        int counter = 0;
        for(int j = 2; j <= 10; j++) if(isPalindrome(toBase(j, S))) counter++;
        if(counter >= 2) {
            cout << S << "\n";
            realcounter++;
        }
        S++;
    }
}
