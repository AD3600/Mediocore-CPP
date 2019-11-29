/*
ID: ad36051
TASK: sort3
LANG: C++                 
*/

#include <iostream>
#include <fstream>

using namespace std;

int freq[3] = {0, 0, 0};
int hfreq[3][3] = {{0, 0, 0}, {0, 0, 0}, {0, 0, 0}};

int main() {
    freopen("sort3.in", "r", stdin);
    freopen("sort3.out", "w", stdout);
    int N; cin >> N;
    int arr[N];
    for(int i = 0; i < N; i++) {
        cin >> arr[i];
        freq[arr[i] - 1]++;
    }
    for(int i = 0; i < N; i++) {
        if(i + 1 > freq[0] + freq[1])
            hfreq[2][arr[i] - 1]++;
        else if(i + 1 > freq[0])
            hfreq[1][arr[i] - 1]++;
        else
            hfreq[0][arr[i] - 1]++;
    }
    cout << min(hfreq[0][1], hfreq[1][0]) + min(hfreq[0][2], hfreq[2][0]) + min(hfreq[1][2], hfreq[2][1]) + 2 * abs(hfreq[0][1] - hfreq[1][0])  << "\n";
}
