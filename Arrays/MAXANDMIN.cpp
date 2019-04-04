#include <iostream>
using namespace std;
int main(){
    int N;
    cin >> N;
    int array[N];
    for (int i = 0; i < N; i++) {
        cin >> array[i];
    }
    int max = array[0];
    int min = array[0];
    for (int i = 1; i < N; i++) {
        if (array[i] > max) max = array[i];
        if (array[i] < min) min = array[i];
    }
    cout << max << endl << min;
}