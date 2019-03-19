
#include <iostream>
using namespace std;
int main() {
    int N;
    cin >> N;
    int array[N];
    for (int i = 0; i < N; i++) {
        cin >> array[i];
    }
    for (int i = 1; i < N; i++) {
        for (int j = 0; j < i; j++) {
            if (array[j] > array[i]) {
                int temp = array[j];
                array[j] = array[i];
                for (int k = i - 1; k > j; k--) {
                    array[k + 1] = array[k];
                }
                array[j + 1] = temp;
                break;
            }
        }
    }
    for (int i = 0; i < N; i++) {
        cout << array[i] << endl;
    }
}