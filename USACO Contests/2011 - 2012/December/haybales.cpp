// Problem Hay Bales [Brian Dean, 2011]
#include <iostream>
#include <fstream>

using namespace std;

int N, hay[10005], sum = 0, average, ans;

int main() {
    // freopen("haybales.in", "r", stdin);
    // freopen("haybales.out", "w", stdout);
    cin >> N;
    for(int i = 0; i < N; i++) {
        cin >> hay[i];
        sum += hay[i];
    }
    average = sum / N;
    for(int i = 0; i < N; i++)
        ans += abs(hay[i] - average);
    cout << ans / 2;
}
