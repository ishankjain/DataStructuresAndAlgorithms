
#include <iostream>
using namespace std;
char output[100];
int i = 0;
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
void printPermutations(char inp[], int be, int idx) {
    //idx is the index of output where the permutation of inp[be, ] begins
    if (inp[be] == '\0') {
        output[idx] = '\0';
        // sort(output, output + idx);
        cout << output << endl;
        return;
    }


    for (int curCharAt = be; inp[curCharAt] != '\0'; ++curCharAt) {
        char temp = inp[curCharAt];
        for (int i = curCharAt - 1; i >= be; i--) {
            inp[i + 1] = inp[i];
        }
        inp[be] = temp;
        output[idx] = inp[be];
        printPermutations(inp, be + 1, idx + 1);
        for (int i = be + 1; i <=  curCharAt; i++) {
            inp[i - 1] = inp[i];
        }
        inp[curCharAt] = temp;
    }
}


int main() {
    char str[100];
    cin >> str;
    int length = strlen(str);
    int array[length];
    for (i = 0; i < length; i++) {
        array[i] = str[i] - 'a';
    }
    sortarray(array, length);
    for (i = 0; i < length; i++) {
        str[i] = array[i] + 'a';
    }
    printPermutations(str, 0, 0);
}