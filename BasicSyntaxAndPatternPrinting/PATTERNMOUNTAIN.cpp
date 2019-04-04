#include <iostream>
using namespace std;
int main() {
    int N;
    cin >> N;
    int currow = 1;
    while (currow <= N - 1) { //Printing N-1 rows seperately.
        int maxvalue = currow;
        for (int cvalue = 1; cvalue <= maxvalue; cvalue++) {
            cout << cvalue << '\t';
        }
        int nspaces = (2 * N) - 1 - (2 * currow);
        for (int cspace = 0; cspace < nspaces; cspace++) {
            cout << '\t';
        }
        for (int cvalue = maxvalue; cvalue >= 1; cvalue--) {
            cout << cvalue << '\t';
        }
        cout << endl;
        currow++;
    }
    // Print Nth row.
    int maxvalue = N;
    for (int cvalue = 1; cvalue <= maxvalue; cvalue++) {
        cout << cvalue << '\t';
    }
    for (int cvalue = maxvalue - 1; cvalue >= 1; cvalue--) {
        cout << cvalue << '\t';
    }
}