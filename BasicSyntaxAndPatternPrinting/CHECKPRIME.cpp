
#include <iostream>
using namespace std;
int main() {
    int N;
    cin >> N;
    int divisor = 2;
    while (N > divisor) {
        if (N % divisor == 0) {
            cout << "Not Prime";
            exit(0);//Return Code has to be mentioned.
        }
        divisor++;
    }
    cout << "Prime";
}