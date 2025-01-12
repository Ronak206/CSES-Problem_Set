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
    string s;
    cin>>s;
    int n = s.length();
    string ans(n, ' ');


    vi freq(26,0);
    forf(p,0,n) 
    {
        freq[s[p] - 'A'] += 1;
    }

    int cnt = 0;
    forf(p,0,26) 
    {
        if (freq[p] % 2 != 0) 
        {
            cnt += 1;
        }
    }


    if (cnt > 1)
    {
        cout<<"NO SOLUTION"<<endl;
        return;
    }

    int left = 0, right = n - 1;
    forf(p,0,n) 
    {
        if(freq[s[p] - 'A'] % 2 == 1) 
        {
            ans[n/2] = s[p];
            freq[s[p] - 'A'] -= 1;
        }
        while(freq[s[p] - 'A'] > 0) 
        {
            ans[left++] = ans[right--] = s[p];
            freq[s[p] - 'A'] -= 2;
        }
    }
    
    cout<<ans<<endl;
    
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