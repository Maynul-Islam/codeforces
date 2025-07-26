#include<bits/stdc++.h>
#include <vector>
#define ll long long
using namespace std;
void solve()
{
   int n,k;
   cin>>n>>k;
   vector<vector<int>>a(n,vector<int>(3));
   for(int i=0;i<n;i++)
   {
    cin>>a[i][0]>>a[i][1]>>a[i][2];
   }
   sort(a.begin(),a.end());
   int x = k;
   for(int i =0;i<n;i++)
   {
    if(x>=a[i][0] && x<=a[i][1])
    {
        x = max(x,a[i][2]);
    }
   }
   cout << x << endl;
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
