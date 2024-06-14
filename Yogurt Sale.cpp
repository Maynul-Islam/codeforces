#include<bits/stdc++.h>
#define ll long long int
using namespace std;
void solve(void)
{
    int n,a,b;
    cin>>n>>a>>b;
    ll result;
    if(2*a > b)
    {
        if(n%2==0)
        {
            result = (n/2)*b;
        }
        else
        {
            result = (n/2)*b + a;
        }
    }
    else
    {
        result = a*n;
    }
    cout << result << "\n";

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
