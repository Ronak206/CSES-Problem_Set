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


int find(int n)
{
    if(n%4 == 0) return n;
    else if(n%4 == 1) return 1;
    else if(n%4 == 2) return n+1;
    else return 0;
}

void aanya()
{

    int n;
    cin>>n;
    
    // find xor from 1 to n
    int nXor = find(n);

    int ans = 0;
    forf(p,0,n-1)
    {
        int x;
        cin>>x;
        nXor ^= x;
    }
    
    cout<<nXor<<endl;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int t = 1;

    while (t--)
    {
        aanya();
    }

    return 0;
}
//:)