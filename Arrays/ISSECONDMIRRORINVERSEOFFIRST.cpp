#include <iostream>
using namespace std;
int main(){
    int N;
    cin >> N;
    int array1[N];
    for (int i = 0; i < N; i++) {
        cin >> array1[i];
    }
    int array2[N];
    for (int i = 0; i < N; i++) {
        cin >> array2[i];
    }
    for (int i = 0; i < N; i++) {
        int idxtocheck = array1[i];
        if (array2[idxtocheck] == i) {
            continue;
         }
        cout << "false";
        exit(0);
    }
    cout << "true";
}