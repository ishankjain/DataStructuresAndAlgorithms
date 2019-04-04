#include <iostream>
using namespace std;
int main() {
    int N;
    cin >> N;
    int numtobeprinted = 1;
    for (int crow = 1; crow <= N; crow++) {
        int numofnumtobeprinted = crow;
        int curnumofnumprinted = 0;
        for (; curnumofnumprinted < numofnumtobeprinted; curnumofnumprinted++) {
            cout << numtobeprinted << " ";
            numtobeprinted++;
        }
        cout << '\n';
    }
}
