/*
ID: ad36051
LANG: C++
TASK: milk
*/

#include <iostream>
#include <fstream>
#include <algorithm>
#include <vector>
#include <utility>

using namespace std;

typedef pair<int, int> pii;
int N, M, P, A, ans = 0;
vector< pii > milk;

int main() {
    freopen("milk.in", "r", stdin);
    freopen("milk.out", "w", stdout);
    cin >> N >> M;
    for(int i = 0; i < M; i++) {
        cin >> P >> A;
        milk.push_back({P, A});
    }
    sort(milk.begin(), milk.end(), [](auto &left, auto &right) { return left.first < right.first; } );
    int i = 0;
    while(i < M) {
        if(milk[i].second > N) {
            ans += N * milk[i].first;
            break;
        }
        ans += milk[i].first * milk[i].second;
        N -= milk[i].second;
        i++;
    }
    cout << ans << "\n";
 }
