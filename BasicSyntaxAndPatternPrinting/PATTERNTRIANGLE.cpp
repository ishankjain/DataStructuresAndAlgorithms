#include <iostream>
using namespace std;
int main() {
    int N;
    cin >> N;
    int currow = 1;
    while (currow <= N) {
        int nspaces = N - currow;
        for (int cspace = 0; cspace < nspaces; cspace++) {
            cout << '\t';
        }
        int svalue = currow;
        int maxvalue = (2 * currow) - 1;
        for (int cnum = svalue; cnum <= maxvalue; cnum++) {
            cout << cnum << '\t'; //\t mantains constant space within charachters.
        }
        for (int cnum = maxvalue - 1; cnum >= svalue; cnum--) {
            cout << cnum << '\t';
        }
        cout << endl;
        currow++;
    }
}