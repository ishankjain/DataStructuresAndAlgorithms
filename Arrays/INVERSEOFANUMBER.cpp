
#include <iostream>
using namespace std;
int main() {
    int N;
    cin >> N;
    int array[10];
    int ctr = 0;
    for (int curnum = N; curnum > 0; curnum = curnum / 10) {
        int curdigit = curnum % 10;
        array[ctr] = curdigit;
        ctr++;
    }
    int reversenum = 0;
    for (int i = ctr ; i > 0 ; i--) {
        for (int curindex = 0; curindex < ctr; curindex++) {
            if (array[curindex] == i ) {
                reversenum = (reversenum * 10) + (curindex + 1);
            }
        }
    }
    cout << reversenum;
}
