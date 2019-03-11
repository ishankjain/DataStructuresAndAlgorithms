#include <iostream>
using namespace std;
int main() {
    int N;
    cin >> N;
    int array[N];
    for (int i = 0; i < N; i++) {
        cin >> array[i];
    }
    int target;
    cin >> target;
    for (int i = 0; i < N; i++) {
        int reqnum = target - array[i];
        for (int j = i + 1; j < N; j++) {
            if (array[j] == reqnum) {
                cout << min(array[i], array[j]) << " and " << max(array[j], array[i]) << endl;
            }
        }
    }
}