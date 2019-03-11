#include <iostream>
using namespace std;
int main() {
    while (true) {
        char operation;
        cin >> operation;
        if (operation == '+') {
            long int A;
            long int B;
            cin >> A >> B;
            cout << A + B << endl;
            continue;
        }
        if (operation == '-') {
            long int A;
            long int B;
            cin >> A >> B;
            cout << A - B << endl;
            continue;
        }
        if (operation == '*') {
            long int A;
            long int B;
            cin >> A >> B;
            cout << A * B << endl;
            continue;
        }
        if (operation == '/') {
            long int A;
            long int B;
            cin >> A >> B;
            cout << A / B << endl;
            continue;
        }
        if (operation == '%') {
            long int A;
            long int B;
            cin >> A >> B;
            cout << A % B << endl;
            continue;
        }
        if (operation == 'X' || operation == 'x') exit(0);
        cout << "Invalid operation. Try again.";
    }
}