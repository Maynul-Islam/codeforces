#include<bits/stdc++.h>
using namespace std;
#define ll long long int
void solve()
{
    int n;
    cin>>n;
    ll a[n],maxi=0,cnt =0,sum=0;
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<n;i++)
    {
       sum+=a[i];
       maxi =max(a[i],maxi);
       if(sum-maxi == maxi)
            cnt++;
    }
    cout << cnt << "\n";

    return;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;
    while(t--)
    {
        solve();
    }
    return 0;
}

