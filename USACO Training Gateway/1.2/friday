/*
ID: ad36051
LANG: C++
TASK: friday
*/

#include <iostream>
#include <fstream>
#include <algorithm>
#include <string>
#include <cstring>
#include <math.h>
#include <map>

typedef long long ll;
using namespace std;

int year = 1900, month = 1, day = 1, frq[7], wd = 2;

int numDays() {
    if(month == 2) {
        if(year % 4 == 0) {
            if(year % 100 == 0) {
                if(year % 400 == 0) return 29;
                return 28;
            }
            return 29;
        }
        return 28;
    }
    if(month == 4 || month == 6 || month == 9 || month == 11) return 30;
    return 31;
}

void moves() {
    day++;
    if(day > numDays()) {
        day = 1;
        month++;
    }
    if(month > 12) {
        month = 1;
        year++;
    }
    wd = (wd + 1) % 7;
}

int main()
{
    freopen("friday.in", "r", stdin);
    freopen("friday.out", "w", stdout);
    int N; cin >> N;
    while(year < 1900 + N) {
        if(day == 13) frq[wd]++;
        moves();
    }
    for(int i = 0; i < 7; i++) {
        if(i == 6) cout << frq[6] << "\n";
        else cout << frq[i] << " ";
    }
}
