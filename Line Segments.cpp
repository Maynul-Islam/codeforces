#include<bits/stdc++.h>
#define ll long long
using namespace std;
void solve()
{
    ll n;
    double px,py,qx,qy;
    cin>>n;
    double a[n];
    cin>>px>>py>>qx>>qy;
    
    for(ll i=0;i<n;i++)
    {
        cin>>a[i];
        
    }
    double d = sqrt((px-qx)*(px-qx) + (py-qy)*(py-qy));

    double temp = d;
    double sum = d;

    for(ll i=0;i<n;i++)
    {
        temp = max(temp,a[i]);
        sum = sum+a[i];
    }

    if(sum-temp<temp)
    {
        cout << "No\n";
    }
    else
    {
        cout << "Yes\n";
    }

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