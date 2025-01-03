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
    
    string str;
    cin>>str;
    
    int maxCount = 1;
    int tmp = 1;
    
    char prv = str[0];
    
    forf(p,1,size(str))
    {
        if(str[p] == prv)
        {
            tmp++;
            maxCount = max(maxCount,tmp);
        }
        else
        {
            tmp = 1;
            prv = str[p];
        }
    }
    
    cout<<maxCount<<endl;
    
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