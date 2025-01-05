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



void aanya()
{

    ll x,y;
    cin>>y>>x;
    
    long long maxi = max(x,y);
    long long square = (maxi - 1) * (maxi - 1);
    if(maxi % 2 == 0)
    {
      if(x > y)
      {
        cout<<square + y<<endl;
      }
      else
      {
        cout<<(maxi * maxi) - x + 1<<endl;
      }
    }
    else
    {
      if(x > y)
      {
        cout<<(maxi * maxi) - y + 1<<endl;
      }
      else
      {
        cout<<square + x<<endl;
      }
    }
    
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin >> t;

    while (t--)
    {
        aanya();
    }

    return 0;
}
//:)