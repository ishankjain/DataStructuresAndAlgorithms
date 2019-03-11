
#include <iostream>
#include <cstring>
using namespace std;
char outputarray[20];
int firstnumber = 1;
void printcodes(int integerarray[], int be, int outputbe) {
    if (integerarray[be] == '\0') {
        outputarray[outputbe] = '\0';
        if (firstnumber == 1) {
            cout << outputarray;
            firstnumber = 0;
            return;
        }
        else {
            cout << ", " << outputarray;
            return;
        }
    }
    outputarray[outputbe] = (char)(integerarray[be] + 96);
    printcodes(integerarray, be + 1, outputbe + 1);
    if (integerarray[be + 1] != '\0') {
        int twodigitnum = (integerarray[be] * 10) + integerarray[be + 1];
        if (twodigitnum <= 26) {
            outputarray[outputbe] = (char)(twodigitnum + 96);
            printcodes(integerarray, be + 2, outputbe + 1);
        }
    }
}
int main() {
    for (int i = 0; i < 20; i++) {
        outputarray[i] = 'A';
    }
    char array[20];
    cin >> array;
    int length = strlen(array);
    // cout << length << endl;
    int integerarray[length];
    for (int i = 0; i < length; i++) {
        int curdigit = array[i] - 48;
        integerarray[i] = curdigit;
    }
    integerarray[length] = '\0';
    // for (int i = 0; i < length; i++) {
    //     cout << integerarray[i] << " ";
    // }
    cout << "[";
    printcodes(integerarray, 0, 0);
    cout << "]";
}