#include<bits/stdc++.h>
#define ll long long 
using namespace std;
void solve()
{
    ll n,s;
    cin>> n >> s;
    ll cnt = 0;
    for(int i=0;i<n;i++)
    {
        ll dx,dy,x,y;
        cin>>dx>>dy>>x>>y;

        if( ((x==y) && (dx*dy==1)) || ((x+y==s)&&(dx*dy== -1)) )
        {
            cnt++;
        }
    }
    cout << cnt << endl;

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