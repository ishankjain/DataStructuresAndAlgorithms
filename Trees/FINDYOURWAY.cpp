#include <iostream>
#include <cmath>
using namespace std;
int numofnodes = 0;
void totalnodes(int height, int exit) {
    if (exit == 1) {
        if (height % 2 == 0) {
            numofnodes = numofnodes + height + 1;
            return;
        }
        numofnodes = numofnodes + height;
        return;
    }
    if (exit == 2) {
        if (height % 2 == 0) {
            numofnodes = numofnodes + height;
            return;
        }
        numofnodes = numofnodes + height + 1;
        return;
    }
    int numofleaves = pow(2, height);
    if (exit <= numofleaves / 2) {
        numofnodes++;
        totalnodes(height - 1, exit);
    }
    else {
        numofnodes = numofnodes + (pow(2, height) - 1);
        numofnodes++;
        totalnodes(height - 1, (exit - (numofleaves / 2)));
    }
}
int main() {
    int N;
    cin >> N;
    for (int i = 0; i < N; i++) {
        int height;
        cin >> height;
        int exit;
        cin >> exit;
        totalnodes(height,exit);
        cout << numofnodes << endl;
        numofnodes = 0;
    }
}