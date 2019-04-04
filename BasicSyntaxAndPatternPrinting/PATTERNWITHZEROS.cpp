#include <iostream>
using namespace std;
int main() {
    int N;
    cin >> N;
    for (int currow = 1; currow <= N; currow++) {
        int numberstobeprinted = currow;
        int numberofzerotobeprinted = currow - 2;
        cout << currow << '\t';
        numberstobeprinted = numberstobeprinted - 1;
        if (numberstobeprinted > 0 && numberofzerotobeprinted > 0) {
            for (int curnumofzero = 1; curnumofzero <= numberofzerotobeprinted; curnumofzero++) {
                cout << "0" << '\t';
            }
        }
        if (numberstobeprinted > 0) {
            cout << currow ;
        }
        cout << '\n';
    }
}