#include <iostream>
#include <algorithm>
#include <unordered_map>
#include <string>
#include <cstring>
using namespace std;


int max(int a, int b, int c)
{
    return max(max(a, b), c);
}


int LCSLength(string X, string Y, string Z)
{
    int m = X.length(), n = Y.length(), o = Z.length();

       int lookup[m + 1][n + 1][o + 1];

    memset(lookup, 0, sizeof lookup);


    for (int i = 1; i <= m; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            for (int k = 1; k <= o; k++)
            {

                if (X[i - 1] == Y[j - 1] && Y[j - 1] == Z[k - 1])
                    lookup[i][j][k] = lookup[i - 1][j - 1][k - 1] + 1;


                else
                    lookup[i][j][k] = max(lookup[i - 1][j][k],
                                          lookup[i][j - 1][k],
                                          lookup[i][j][k - 1]);
            }
        }
    }


    return lookup[m][n][o];
}


int main()
{
    string X,Y,Z;
    cin>>X>>Y>>Z;

    cout <<LCSLength(X, Y, Z);

    return 0;
}
	