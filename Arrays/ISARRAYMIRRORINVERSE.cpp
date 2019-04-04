#include <iostream>
using namespace std;
int main(){
    int N;
    cin >> N;
    int array[N];
    for (int i = 0; i < N; i++) {
        cin >> array[i];
    }
    for (int i = 0; i < N; i++) {
        int idxtocheck == array[i];
        if (array[idxtocheck] = i) continue;
        cout << "false";
        exit(0);
    }
    cout << "true";
}