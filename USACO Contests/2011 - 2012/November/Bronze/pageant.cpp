// Problem 4. Cow Beauty Pageant (Bronze Level)
#include <iostream>
#include <fstream>
#include <vector>
#include <utility>
#include <cstring>

using namespace std;

int N, M, cnt = 0, ans = 105;
bool visited[55][55], done = false;
char grid[55][55];
vector< pair<int, int> > ones, twos;

void floodfill(int i, int j, int cnt) {
    if(i >= N || j >= M || i * j < 0 || grid[i][j] == '.' || visited[i][j]) return;
    visited[i][j] = true;
    if(cnt == 1)
        ones.push_back(make_pair(i, j));
    else
        twos.push_back(make_pair(i, j));
    floodfill(i + 1, j, cnt);
    floodfill(i - 1, j, cnt);
    floodfill(i, j + 1, cnt);
    floodfill(i, j - 1, cnt);
}

int manhattanDistance(pair<int, int> p1, pair<int, int> p2) {
    return(abs(p1.first - p2.first) + abs(p1.second - p2.second));
}

int main() {
    // freopen("pageant.in", "r", stdin);
    // freopen("pageant.out", "w", stdout);
    memset(visited, false, sizeof(visited));
    cin >> N >> M;
    for(int i = 0; i < N; i++)
        for(int  j = 0; j < M; j++)
            cin >> grid[i][j];
    for(int i = 0; i < N && !done; i++) {
        for(int j = 0; j < M && !done; j++) {
            if(grid[i][j] == 'X' && !visited[i][j]) {
                cnt++;
                floodfill(i, j, cnt);
                if(cnt == 2) done = true;
            }
        }
    }
    for(pair<int, int> p1 : ones)
        for(pair<int, int> p2 : twos)
            ans = min(ans, manhattanDistance(p1, p2));
    cout << ans - 1;
}
