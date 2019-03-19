

#include <iostream>
using namespace std;
int main() {
    int nooftestcases;
    cin >> nooftestcases;
    for (int ccase = 0; ccase < nooftestcases; ccase++) {
        int c1, c2, c3, c4;
        cin >> c1 >> c2 >> c3 >> c4;
        int noofrikshaw, noofcabs;
        cin >> noofrikshaw >> noofcabs;
        int array[noofrikshaw + noofcabs];
        for (int i = 0; i < noofrikshaw + noofcabs; i++) {
            cin >> array[i];
        }
        int mincost = 0;
        for (int i = 0; i < noofrikshaw + noofcabs; i++) {
            array[i] = c1 * array[i];
        }
        for (int i = 0; i < noofrikshaw + noofcabs; i++) {
            if (array[i] > c2) {
                array[i] = c2;
            }
        }
        int costofrikshaw = 0;
        for (int i = 0; i < noofrikshaw; i++) {
            costofrikshaw = costofrikshaw + array[i];
        }
        int costofcab = 0;
        for (int i = noofrikshaw; i < noofrikshaw + noofcabs; i++) {
            costofcab = costofcab + array[i];
        }
        if (costofrikshaw > c3) {
            costofrikshaw = c3;
            }
        
        if (costofcab > c3) {
            costofcab = c3;
            }
        
        mincost = costofcab + costofrikshaw;
        cout << min(mincost,c4) << endl;
    }
}