/*
ID: ad36051
LANG: C++
TASK: palsquare
*/

#include <iostream>
#include <fstream>
#include <algorithm>
#include <string>
#include <cstring>
#include <math.h>

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
    freopen("palsquare.in", "r", stdin);
    freopen("palsquare.out", "w", stdout);
    int B; cin >> B;
    for(int N = 1; N <= 300; N++) {
        if(isPalindrome(toBase(B, N * N))) cout << toBase(B, N) + " " + toBase(B, N * N) + "\n";
    }
}
