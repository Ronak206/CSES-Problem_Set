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

    int n;
    cin>>n;
    int _n = n;
    ll sum = (1LL*n*(n+1))/2;

    if(!(sum&1))
    {
        cout<<"YES"<<endl;
        sum /= 2;
        set<int> a, b;

        while(sum >= n) 
        {
            a.insert(n);
            sum -= n;
            n--;
        }

        if(sum > 0)  a.insert(sum);

        forf(p,1,_n+1) 
        {
            if(a.find(p) == a.end()) 
            {
                b.insert(p);
            }
        }

        cout<<size(a)<<endl;
        for(int x : a) 
        {
            cout<<x<<" ";
        }
        cout<<endl;
        cout<<size(b)<<endl;
        for(int x : b) 
        {
            cout<<x<<" ";
        }
        cout<<endl;
    } 
    else 
    {
        cout<<"NO"<<endl;
    }    
 
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