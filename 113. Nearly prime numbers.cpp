/***

            Bismillahir Rahmanir Rahim
            Read in the name of Allah, who created you!!!
            Author : Shah Newaj Rabbi Shishir,
            Department of CSE, City University, Bangladesh.

***/

#include <bits/stdc++.h>
using namespace std;

#define ebar_khela_hoppe    int main (void)
#define bair_ho             return 0
#define sf                  scanf
#define pf                  printf
#define ssf                 sscanf
#define spf                 sprintf
#define fsf                 fscanf
#define fpf                 fprintf
#define fast                ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)
#define scase               sf ("%d",&tc)
#define sn                  sf ("%d",&n)
#define whilecase           while (tc--)
#define eof                 while (cin >> n)
#define forloop             for (pos=1; pos<=tc; pos++)
#define arrayloop           for (i=0; i<n; i++)
#define cinstr              cin >> str
#define getstr              getline (cin,str)
#define pcase               pf ("Case %d: ",pos)
#define vi                  vector <int>
#define vs                  vector <string>
#define pii                 pair <int,int>
#define mii                 map <int,int>
#define pb                  push_back
#define in                  insert
#define llu                 unsigned long long
#define lld                 long long
#define U                   unsigned int
#define endl                "\n"

const int MOD = 1000000007;
const int MAX = 31630;

int SetBit (int n, int x) { return n | (1 << x); }
int ClearBit (int n, int x) { return n & ~(1 << x); }
int ToggleBit (int n, int x) { return n ^ (1 << x); }
bool CheckBit (int n, int x) { return (bool)(n & (1 << x)); }

bool isPrime (int n)
{
    if (n == 2)
        return true;

    if (n < 2 || !(n & 1))
        return false;

    for (int i=2; i*i<=n; i++)
        if (n % i == 0)
            return false;

    return true;
}

ebar_khela_hoppe
{
    /*
    	freopen ("input.txt","r",stdin);
    	freopen ("output.txt","w",stdout);
    */

    int tc,pos,n,i,k;

    sf ("%d",&tc);

    while (tc--)
    {
        sf ("%d",&n);

        if (n % 2 == 0 && isPrime(n/2))
            pf ("Yes\n");
        else
        {
            k = 0;

            for (i=3; i*i<=n; i+=2)
            {
                if (n % i == 0 && isPrime(i) && isPrime(n/i))
                {
                    k = 1;
                    pf ("Yes\n");
                    break;
                }
            }

            if (!k)
                pf ("No\n");
        }
    }

    bair_ho;
}
