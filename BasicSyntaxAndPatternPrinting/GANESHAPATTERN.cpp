
#include <iostream>
using namespace std;
int main() {
    int N;
    cin >> N;
    //print the first line.
    cout << "*";
    int middle = (N + 1) / 2;
    int nspaces = N - (middle + 1);
    for (int i = 0; i < nspaces; i++) {
        cout << " ";
    }
    int nstars = middle;
    for (int i = 0; i < nstars; i++) {
        cout << "*";
    }
    cout << endl;
    // print middle lines.
    int remaininglines = (N - 3);
    for (int cline = 0; cline < remaininglines / 2; cline++) {
        cout << "*";
        for (int i = 0; i < nspaces; i++) {
            cout << " ";
        }
        cout << "*" << endl;
    }
    //print exact middle line.
    for (int i = 0; i < N; i++) {
        cout << "*";
    }
    cout << endl;
    for (int cline = 0; cline < remaininglines / 2; cline++) {
        int rspaces = N - middle;
        for (int i = 0; i < rspaces; i++) {
            cout << " ";
        }
        cout << "*";
        for (int i = 0; i < nspaces; i++) {
            cout << " ";
        }
        cout << "*" << endl;
    }
    // print last line.
    for (int i = 0; i < nstars; i++) {
        cout << "*";
    }
    for (int i = 0; i < nspaces; i++) {
        cout << " ";
    }
    cout << "*";
    cout << endl;
}