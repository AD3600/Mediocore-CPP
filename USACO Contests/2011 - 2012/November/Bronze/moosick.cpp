// Problem 3. Moo Sick
#include <iostream>
#include <fstream>
#include <algorithm>
#include <vector>
#include <cstring>

using namespace std;

int N, K, notes[20005], C[15], seventh = 0;
vector<int> indexes;



int main() {
    // freopen("moosick.in", "r", stdin);
    // freopen("moosick.out", "w", stdout);
    cin >> N;
    for(int i = 0; i < N; i++)
        cin >> notes[i];
    cin >> K;
    for(int i = 0; i < K; i++)
        cin >> C[i];
    for(int i = 0; i < N - K + 1; i++) {
        bool bad = true;
        int temp[20005];
        memcpy(temp, notes, sizeof(notes));
        sort(temp + i, temp + i + K);
        for(int j = i; j < i + K - 1; j++) {
            if(temp[j + 1] - temp[j] != C[j - i + 1] - C[j - i]) {
                bad = false;
                break;
            }
        }
        if(bad) {
            seventh++;
            indexes.push_back(i + 1);
        }
    }
    cout << seventh << "\n";
    for(int i = 0; i < seventh; i++)
        cout << indexes[i] << "\n";
}
