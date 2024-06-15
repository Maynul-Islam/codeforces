//Codeforces problem Progressive Square solution..
#include<bits/stdc++.h>
#define ll long long int
using namespace std;
void solve(void)
{
    ll n,c,d;
    cin>>n>>c>>d;
    ll a[n][n];

    ll k = n*n;
    ll b[k];

    map<ll , ll> mp;
    for(ll i=0;i<k;i++)
    {
        cin>>b[i];
        mp[b[i]]++;
    }
    sort(b,b+k);

    a[0][0] = b[0];
    mp[a[0][0]]--;

    for(ll j =1;j<n;j++)
    {
        a[0][j] = a[0][j-1]+d;
        mp[a[0][j]]--;
    }
    for(ll j=0;j<n;j++)
    {
        for(ll i=1;i<n;i++)
        {
            ll valu = a[i-1][j]+c;
            a[i][j] = valu;
            mp[a[i][j]]--;
        }
    }
    map<ll,ll>:: iterator it;
    for(auto it:mp){

        if(it.second != 0)
        {
            cout << "NO\n";
            return;
        }
    }
    cout << "YES\n";
    return;

}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        solve();
    }
    return 0;
}


