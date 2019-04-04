#include <iostream>
using namespace std;
bool isarraysorted(long int array[], int be, int N) {
    if (be == N) return true;
    bool issmallsorted = isarraysorted(array, be + 1, N);
    if (issmallsorted) {
        if (array[be] <= array[be + 1]) return true;
        else return false;
        }
    return false;
}
int main() {
    int N;
    cin >> N;
    long int array[N];
    for (int i = 0; i < N; i++) {
        cin >> array[i];
    }
    if (isarraysorted(array, 0, N)) cout << "true";
    else cout << "false";
}