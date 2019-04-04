#include <iostream>
#include<cstring>
using namespace std;
int main() {
    char inputstring[200];
    char tempstring[200];
    int tempptr = 0;
    char outputstring[2000];
    int outptr = 0;
    outputstring[0] = '\0';
    cin >> inputstring;
    int N = strlen(inputstring);
    int wasprevwub = 0;
    for (int curchar = 0; curchar < N; curchar++) {
        char cchar = inputstring[curchar];
        if (cchar == 'W') {
            char nextchar = inputstring[curchar + 1];
            if (nextchar == 'U') {
                char nexttonextchar = inputstring[curchar + 2];
                if (nexttonextchar == 'B') {
                    curchar = curchar + 2;
                    if (outputstring[0] != '\0') {
                        wasprevwub = 1;
                    }
                    continue;
                }
                else {
                    if (wasprevwub == 1) {
                        outputstring[outptr] = ' ';
                        outptr++;
                        wasprevwub = 0;
                    }
                    outputstring[outptr] = cchar;
                    outptr++;
                    outputstring[outptr] = nextchar;
                    outptr++;
                    wasprevwub = 0;
                    curchar = curchar + 1;
                    continue;
                }
            }
            else {
                if (wasprevwub == 1) {
                    outputstring[outptr] = ' ';
                    outptr++;
                    wasprevwub = 0;
                }
                outputstring[outptr] = cchar;
                outptr = outptr + 1;
                wasprevwub = 0;
                continue;
            }
        }
        if (cchar != 'W') {
            if (wasprevwub == 1) {
                outputstring[outptr] = ' ';
                outptr++;
                wasprevwub = 0;
            }
            outputstring[outptr] = cchar;
            outptr++;
            wasprevwub = 0;
            continue;
        }
    }
    outputstring[outptr] = '\0';
    for (int i = 0; outputstring[i] != '\0'; i++) {
        cout << outputstring[i];
    }
}