#include <iostream>
using namespace std;
void reversearray(int array[], int be, int end) {
    if (end < be) return;
    reversearray (array, be + 1, end - 1);
    swap(array[be], array[end]);
}
int main(){
    int N;
    cin >> N;
    int array[N];
    for (int i = 0; i < N; i++) {
        cin >> array[i];
    }
    reversearray(array, 0, N - 1);
    for (int i = 0; i < N; i++) {
        cout << array[i] << " ";
    }
}