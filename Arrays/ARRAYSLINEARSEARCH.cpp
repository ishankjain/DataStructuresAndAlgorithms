
#include <bits/stdc++.h>
using namespace std;
int main() {
    int N;
    cin >> N;
    long int array[N];
    for (long int i = 0; i < N; i++) {
        cin >> array[i];
    }
    long int numbertobesearched;
    cin >> numbertobesearched;
    for (int i = 0; i < N; i++) {
        if (array[i] == numbertobesearched) {
            cout << i;
            exit(0);
        }
    }
    cout << "-1";
}