#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    int mx1,mx2,mn1,mn2;
    mx1 = max(a,b);
    mn1 = min(a,b);
    mx2 = max(c,d);
    mn2 = min(c,d);

    if(mx2>mx1)
    {
        if(mn2>mn1 && mn2<mx1)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    else
    {
        if(mn2 < mn1 && mx2>mn1)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    return ;
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
