#include <iostream>
# include <iomanip> //Header File Which Contains Setprecision //Function
using namespace std;
int main() {
    double N;
    cin >> N;
    int precision;
    cin >> precision;
    double precisiondifference = 1;
    for (int i = 1; i <= precision; i++) {
        precisiondifference = precisiondifference * 0.1;
    }
    double start = 0;
    double end;
    if (N < 1) {
        end = 1;
    }
    else end = N;
    while ((end - start) > precisiondifference) {
        double middle = start + ((end - start) / 2);
        if (middle * middle > N) {
            end = middle;
            continue;
        }
        else if (middle * middle < N) {
            start = middle;
            continue;
        }
        else if (middle * middle == N) {
            std :: cout << fixed << std :: setprecision(precision) << middle;// Set Precision Function Sets The Number Of Digits After Decimal 
                                                                        // Arguement = Number Of Digits After Decimal + 1 
        }
    }
    std :: cout << fixed << std :: setprecision(precision) << start; // Fixed says that there will be a fixed No. of digits after the decimal.
}