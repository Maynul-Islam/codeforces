#include<bits/stdc++.h>
using namespace std;
void solve(void)
{
    int x,y;
    cin>>x>>y;
    cout << min(x,y) << " "<< max(x,y)<< "\n";
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
