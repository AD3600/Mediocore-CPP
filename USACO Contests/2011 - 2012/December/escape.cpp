// Problem 3: Escaping the Farm [Brian Dean and Kalki Seksaria, 2011]
#include <iostream>
#include <fstream>
#include <vector>
#include <string>

using namespace std;

int N, cows[25], ans = 0;

bool works(bool n[]) {
    vector<string> tests;
    int mx = 0;
    for(int i = 0; i < N; i++) {
        if(n[i]) {
            string s = to_string(cows[i]);
            tests.push_back(s);
            mx = max(mx, (signed) s.length());
        }
    }
    for(int i = 0; i < mx; i++) {
        int sum = 0;
        for(string weight : tests) {
            int index = (signed) weight.length() - i - 1;
            if((int) index < 0)
                continue;
            sum += (weight[index] - '0');
            if(sum > 9)
                return false;
        }
    }
    return true;    
}

void subsets(int p, bool in[], int size) {
    if(p == N) {
        if(ans > size) return;
        if(works(in))
            ans = max(size, ans);
        return;
    }
    in[p] = false;
    subsets(p + 1, in, size);
    in[p] = true;
    size++;
    subsets(p + 1, in, size);
}

int main() {
    // freopen("escape.in", "r", stdin);
    // freopen("escape.out", "w", stdout);
    cin >> N;
    for(int i = 0; i < N; i++)
        cin >> cows[i];
    bool arr[N];
    subsets(0, arr, 0);
    cout << ans;
}
