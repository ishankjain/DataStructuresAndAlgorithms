#include <iostream>
#include<cmath>
using namespace std;
int main() {
    float A, B, C ;
    cin >> A >> B >> C;
    if (A == 0 && B == 0 && C == 0) exit(0);
    float discriminantsq = ( pow(B, 2.0) - (4 * A * C));
    if (discriminantsq < 0) {
        cout << "Imaginary";
    }
    if (discriminantsq == 0) {
        cout << "Real and Equal" << endl << -B / (2 * A * 1.0) << " " << - B / (2 * A * 1.0)  ;
    }
    if (discriminantsq > 0) {
        cout << "Real and Distinct" << endl << (-B / (2 * A * 1.0)) - ((float)pow(discriminantsq, 0.5) / (2 * A * 1.0)) << " " << (-B / (2 * A * 1.0)) + ((float)pow(discriminantsq, 0.5) / (2 * A * 1.0));
    }
}