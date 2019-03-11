#include <iostream>
#include <cmath>
using namespace std;
long long int function ( long long int inputvalue) {
    long long int ans;
    if (inputvalue % 2 == 0) {
        ans = inputvalue / 2;
    }
    else ans = -((inputvalue / 2 ) + 1) ;
    return ans;
}
int main() {
    int numoftestcases;
    cin >> numoftestcases;
    for (int i = 0; i < numoftestcases; i++) {
        long long int inputvalue;
        cin >> inputvalue;
        long long int ans = function(inputvalue);
        cout << ans << endl;
    }
}