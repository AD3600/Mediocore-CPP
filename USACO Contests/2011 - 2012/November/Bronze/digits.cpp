// Problem 2. Awkward Digits
#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>

using namespace std;

typedef long long ll;
string bnr, trn;
ll bn, tn;
vector<ll> b, t;

int main() {
    cin >> bnr >> trn;
    bn = stoi(bnr, nullptr, 2);
    tn = stoi(trn, nullptr, 3);
    for(int i = bnr.size() - 1; i >= 0; i--) {
        if(bnr[i] == '1')
            b.push_back(bn + pow(2, i));
        else
            b.push_back(bn - pow(2, i));
    }
    for(int i = trn.size() - 1; i >= 0; i--) {
        ll temp = tn;
        temp -= (trn[i] - '0') * pow(3, i);
        for(int j = 0; j < 3; j++) {
            if(j == (trn[i] - '0')) continue;
            t.push_back(temp + j * pow(3, i));
        }
    }
    sort(t.begin(), t.end());
    for(ll x : b) {
        if(binary_search(t.begin(), t.end(), x)) {
            cout << x;
            return 0;
        }
    }
}
