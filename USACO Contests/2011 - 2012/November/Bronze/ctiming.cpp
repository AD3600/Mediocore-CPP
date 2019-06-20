// Problem 1. Contest Timing
#include <iostream>

using namespace std;

int D, H, M;

int main() {
    cin >> D >> H >> M;
    int ans = 24 * 60 * (D - 11) + 60 * (H - 11) + (M - 11);
    if(ans < 0)
        cout << "-1";
    else
        cout << ans;
}
