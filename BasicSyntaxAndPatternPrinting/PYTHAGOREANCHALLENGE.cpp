#include <iostream>
#include <cmath>
using namespace std;
int main() {
    int M;
    cin >> M;
    for (int curcase = 1; curcase <= M; curcase++) {
        int N;
        cin >> N;
        for (int i = 0; i <= N; i++) {
            int reqnumsq = N - pow(i, 2);
            for ( int j = i; j <= N; j++) {
                if (j * j == reqnumsq) {
                    cout << '(' << i << ',' << j << ')' << " ";
                }
            }
        }
        cout << endl;
    }
}