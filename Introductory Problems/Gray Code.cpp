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
 
    for(int i = 0; i < (1 << n); i++) 
    {
        // Generating the decimal 
        // values of gray code then using 
        // bitset to convert them to binary form
        int val = (i ^ (i >> 1));
         
        // Using bitset   coooool thing 
        bitset<32> r(val);
         
        string s = r.to_string();
        cout<<s.substr(32 - n)<<endl;
    }
    
    // just happly gone
    return;
    
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