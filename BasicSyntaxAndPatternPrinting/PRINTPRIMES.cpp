
#include <iostream>
using namespace std;
int main() {
    int N;
    cin >> N;
    int curnum = 2;
    while (curnum <= N) {
        int divisor = 2;
        int isprime = 1;
        while (curnum > divisor) {
            if (curnum % divisor == 0) {
                isprime = 0;
                break;
            }
            divisor++;
        }
        if (isprime == 1) {
            cout << curnum << endl;
            curnum++;
        }
        else curnum++;
    }
}