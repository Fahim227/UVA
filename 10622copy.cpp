// http://uva.onlinejudge.org/external/106/10622.html

// @BEGIN_OF_SOURCE_CODE

#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cstring>
#include <string>
#include <cctype>
#include <stack>
#include <queue>
#include <list>
#include <vector>
#include <map>
#include <sstream>
#include <bitset>
#include <utility>
#include <set>
#include <math.h>
#define pi acos(-1.0)
#define N 1000000
using namespace std;

long long powerUp (int i, int p)
{
    long long sum = i;
    for ( int k = 2; k <= p; k++ ) {
        sum *= i;
    }

    return sum;
}
int main ()
{
    double n;

    while ( scanf ("%lf", &n) && n ) {

        bool printed = false;
        int length;

        if ( n < 0 ) {
            length = sqrt (n * -1);
            for ( int i = -2; i >= -length; i-- ) {
                long long ans = i;
                int p = 2;
                while ( ans > n ) {
                    ans = powerUp (i, p);
                    p++;
                }
                 cout<<ans<<" "<<p<<"\n";
                if ( ans == n ) {
                    printf ("%d\n", p - 1);
                    printed = true;
                    break;
                }
            }

            if ( !printed )
                printf ("1\n");
        }
        else {
            length = sqrt (n);
            for ( int i = 2; i <= length; i++ ) {
                long long ans = i;
                int p = 2;
                while ( ans < n ) {
                    ans = powerUp (i, p);
                    p++;
                }

                if ( ans == n ) {
                    printf ("%d\n", p - 1);
                    printed = true;
                    break;
                }
            }

            if ( !printed ) printf ("1\n");
        }

        //printf ("%d\n", power);

    }

    return 0;
}

// @END_OF_SOURCE_CODE
