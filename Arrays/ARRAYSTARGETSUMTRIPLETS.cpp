//Deepak Aggarwal, Coding Blocks
//deepak@codingblocks.com

#include <iostream>
using namespace std;
void sortarray (int array[]; int N) {
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
}
int main() {
    int N;
    cin >> N;
    int array[N];
    for (int i = 0; i < N; i++) {
        cin >> array[i];
    }
    sortarray (array, N);
    int target;
    cin >> target;
    for (int i = 0; i < N; i++) {
        for (int j = i + 1; j < N; j++) {
            int reqnum = target - array[i] - array[j];
            for (int k = j + 1; k < N; k++) {
                if (array[k] == reqnum) {
                    cout << min(min(array[i], array[j]), array[k]) << ",  " << (array[i] + array[j] + array[k]) - (min(min(array[i], array[j]), array[k]) + max(max(array[j], array[i]), array[k])) << " and " << max(max(array[j], array[i]), array[k]) << endl;
                }
            }
        }
    }
}

// //Store these 3 in the current row at appropriate position.
// array2d[currow][0] = min(min(array[i], array[j]), array[k]);
// array2d[currow][1] = (array[i] + array[j] + array[k]) - (min(min(array[i], array[j]), array[k]) + max(max(array[j], array[i]), array[k]));
// array2d[currow][2] = max(max(array[j], array[i]), array[k]);
// for (int curidxrow = 1; curidxrow <= currow; curidxrow++) {
//     for (int checkidxrow = 0; checkidxrow < curidxrow; checkidxrow++) {
//         if (array2d[curidxrow][0] < array2d[checkidxrow][0]) {
//             int temp1 = array2d[checkidxrow][0];
//             int temp2 = array2d[checkidxrow][1];
//             int temp3 = array2d[checkidxrow][3];
//             for (int curidx = 0; curidx < 3; curidx ++) {
//                 array2d[checkidxrow][i] = array2d[curidxrow][i];
//             }
//             for (int moveidxrow = checkidxrow + 1; moveidxrow < curidxrow; moveidxrow++) {
//                 for (int curidx = 0; curidx < 3; curidx ++) {
//                     array2d[moveidxrow][i] = array2d[moveidxrow + 1][i];
//                 }
//             }
//             array2d[checkidxrow][0] = temp1;
//             array2d[checkidxrow][1] = temp2;
//             array2d[checkidxrow][2] = temp3;
//         }
//     }
//     currow++;
// }
