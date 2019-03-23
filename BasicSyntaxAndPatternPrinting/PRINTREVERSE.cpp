#include <iostream>
using namespace std;
int main() {
    int N;
    cin >> N;
    int reversenumber = 0, curdigit, leftnum = N;
    while (leftnum != 0) {
        curdigit = leftnum % 10;
        reversenumber = (reversenumber * 10) + curdigit;
        leftnum = leftnum / 10;
    }
    cout << reversenumber;
}