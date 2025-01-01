/* 
    Code by Ronak Rathod;
*/
#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define size(s)((int)(s).size())
#define vi vector < int >
#define vll vector < ll >
#define vppi vector < pair < int, int >>
#define vppl vector < pair < ll, ll >>
#define forf(p, j, k) for (int p = j; p < k; p++)
#define forb(p, j, k) for (int p = j; p > k; p--)
#define all(x)(x).begin(), (x).end()
#define allr(x)(x).rbegin(), (x).rend()
#define sortf(x) sort(all(x))
#define sortr(x) sort(allr(x))
const int mod = 1e9 + 7;


int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    ll n;
    cin>>n;
    
    while(n > 1)
    {
        cout<<n<<" ";
        if(n&1) n = n*3 + 1;
        else n /= 2;
    }
    cout<<1;

    return 0;
}
//:)