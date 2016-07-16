#include <stdio.h>
#include <stdlib.h>
//kant library
#include<bits/stdc++.h>

using namespace std;


int main(int argc, char *argv[])
{
    //Kant Code - square
    long long t;
    cin >> t;
    while (t--)
    {
        long long a, b, c;
        cin >> a >> b >> c;
        long long sq1 = a * b;
        long long sq2 = c * c;
        long long res1 = sq1 / sq2;
        long long res2 = sq1 / sq2 + 1;
        if (abs(res1 * sq2 - sq1) < abs(res2 * sq2 - sq1) && res1 != 0)
            cout << res1 * sq2 << endl;
        else
            cout << res2 * sq2 << endl;
    }
    //end Kant Code
    
    
    system("PAUSE");
    return 0;
}