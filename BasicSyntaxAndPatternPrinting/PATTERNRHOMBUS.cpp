#include <iostream>
using namespace std;
int main() {
    int N;
    cin >> N;
    int halfrow;
    for (int currow = 1; currow <= N; currow++) {
        int nspaces = N - currow;
        for (int curspace = 0; curspace < nspaces; curspace++) {
            cout << '\t';
        }
        int startnum = currow;
        for (int curnum = 0; curnum < currow; startnum++, curnum++) {
            cout << startnum << '\t';
        }
        startnum = startnum -2;
        for (int curnum = 0; curnum < currow - 1; startnum--, curnum++) {
            cout << startnum << '\t';
        }
        cout << '\n';
    }
    for (int currow = N - 1; currow >= 0; currow--) {
        int nspaces = N - currow;
        for (int curspace = 0; curspace < nspaces; curspace++) {
            cout << '\t';
        }
        int startnum = currow;
        for (int curnum = 0; curnum < currow; startnum++, curnum++) {
            cout << startnum << '\t';
        }
        startnum = startnum -2;
        for (int curnum = 0; curnum < currow - 1; startnum--, curnum++) {
            cout << startnum << '\t';
        }
        cout << '\n';
    }
}