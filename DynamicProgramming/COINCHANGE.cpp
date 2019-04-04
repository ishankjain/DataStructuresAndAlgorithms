#include <iostream>
using namespace std;
int memopad[250][50];
int numberofcases(int N, int array[], int be, int end) {
    if (N < 0) return 0;
    if (N == 0) return 1;
    if (memopad[N][be] != -1) {
        return memopad[N][be];
    } 
    int ans = 0;
    for (int curidx = be; curidx < end; curidx++) {
        ans = ans + numberofcases(N - array[curidx], array, curidx, end);
    }
    memopad[N][be] = ans;
    return ans;
}
int main() {
    for (int i = 0; i < 250; i++) {
        for (int j = 0; j < 50; j++) {
            memopad[i][j] = -1;
        }
    }
    int N;
    cin >> N;
    int M;
    cin >> M;
    int array[M];
    for (int i = 0; i < M; i++) {
        cin >> array[i];
    }
    cout <<  numberofcases(N, array, 0, M);
}