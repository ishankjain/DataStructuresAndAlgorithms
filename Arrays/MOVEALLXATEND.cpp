#include <iostream>
#include <cstring>
using namespace std;
char outstr[1000];
void moveallxtoend(char str[], int be, int outbe) {
    char cchar = str[be];
    if (cchar == '\0') {
        outstr[outbe] = '\0';
        return;
    }
    else if (cchar == 'x') {
        moveallxtoend(str, be + 1,outbe);
        int length = 0;
        for (; outstr[length] != '\0'; ++length) {}
        outstr[length] = 'x';
        outstr[length + 1] = '\0';
    }
    else if (cchar != 'x' && cchar != '\0'){
        moveallxtoend(str, be + 1,outbe + 1);
        outstr[outbe] = cchar;
    }
}
int main(){
    for (int i = 0; i < 1000; i++) {
    outstr[i] = 'A';
}
    char str[1000];
    cin >> str;
    moveallxtoend(str, 0, 0);
    cout << outstr;
}