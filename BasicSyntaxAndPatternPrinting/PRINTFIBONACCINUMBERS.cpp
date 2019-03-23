#include <iostream>
using namespace std;
int main() {
    int N;
    cin >> N;
    int previousnum = 2;
    int prevtoprevnum = 1; //These two variables are used only when printing upto number 2 has been done.
    int curnum = 0;
    while (curnum <= N) {
        if (curnum == 0) {
            cout << "0" << endl;
            curnum = 1;
            continue; //It moves the control to the top of the loop.
        }
        if (curnum == 1) {
            cout << "1" << endl;
            cout << "1" << endl;
            curnum = 2;
            continue;
        }
        cout << curnum << endl;
        curnum = previousnum + prevtoprevnum;
        prevtoprevnum = previousnum;
        previousnum = curnum;
    }
    return 0;
}