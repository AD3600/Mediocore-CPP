// Problem 1. Contest Timing
#include <iostream>
#include <fstream>

using namespace std;

int D, H, M;

int main() {
    // freopen("ctiming.in", "r", stdin);
    // freopen("ctiming.out", "w", stdout);
    cin >> D >> H >> M;
    int ans = 24 * 60 * (D - 11) + 60 * (H - 11) + (M - 11);
    if(ans < 0)
        cout << "-1";
    else
        cout << ans;
}
