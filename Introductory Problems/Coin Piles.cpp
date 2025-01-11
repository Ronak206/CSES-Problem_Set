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

    ll a,b;
    cin>>a>>b;
    
    // first say x times 1 and y times 2 so 1*x + 2*y == a
    // first say x times 2 and y times 1 so 2*x + 1*y == b
    int x = (2*b - 1*a);
    int y = (2*a - b);
    
    if((x>=0 && (x%3 == 0)) && (y>=0 && (y%3 == 0))) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
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