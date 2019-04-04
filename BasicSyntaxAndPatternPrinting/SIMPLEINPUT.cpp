#include <iostream>
using namespace std;
int main() {
    int sum = 0;
    while (sum >= 0) {
        int N;
        cin >> N;
        sum = sum + N;
        if (sum >= 0) cout << N << endl;
    }
}