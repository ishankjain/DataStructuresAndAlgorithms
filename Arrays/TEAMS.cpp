
#include <iostream>
using namespace std;
int main() {
  long int N;
  cin >> N;
  long int M;
  cin >> M;
  // For Max. Pairs
  long  int maxpairs = (((N - M) + 1) * (N - M)) / 2;
  // For Min. Pairs
  long  int minineach = N / M;
  long int extra = N - (M * minineach);
  long int minpairs = ((extra * (((minineach + 1) * (minineach)) / 2)) + (M - extra) * (((minineach - 1) * (minineach)) / 2));
  cout << minpairs << " " << maxpairs;
