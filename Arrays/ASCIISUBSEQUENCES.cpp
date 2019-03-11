
#include <iostream>
using namespace std;
char outputstr[100];
int subsequencesprinted = 0;
int integerstr[100];
int integertoarray(int N, int be) {  // Writes the give integer to the given str from the given idx and returns number of indices used.
    int indicesused = 0;
    char array[10];
    for (int curnum = N; curnum > 0; curnum = curnum / 10) {
        int curdigit = curnum % 10;
        array[indicesused] = curdigit + 48;
        indicesused++;
    }
    int strcounter = 0;
    for (int curindex = indicesused - 1; curindex >= 0; curindex--) {
        outputstr[be + strcounter] = array[curindex];
        strcounter++;
    }
    return indicesused;
}
int numofsubsequences(char str[], int be, int outidx) {
    if (str[be] == '\0') {
        outputstr[outidx] = '\0';
        subsequencesprinted++;
        return subsequencesprinted;
    }
    numofsubsequences(str, be + 1, 0);
    outputstr[outidx] = str[be];
    numofsubsequences(str, be + 1, outidx + 1);
    outputstr[outidx] = (int)str[be];
    numofsubsequences(str, be + 1, outidx + 1);
}
void subsequences(char str[], int be, int outidx) {
    if (str[be] == '\0') {
        outputstr[outidx] = '\0';
        cout << outputstr << " ";
        return;
    }
    subsequences(str, be + 1, outidx);
    outputstr[outidx] = str[be];
    subsequences(str, be + 1, outidx + 1);
    int nspaces = integertoarray((int)str[be], outidx);
    subsequences(str, be + 1, outidx + nspaces);
    return;
}
int main() {
    char str[100];
    cin >> str;
    cout << numofsubsequences(str, 0 , 0) << endl;
    subsequences(str, 0, 0); //Important Parametres.
}