#include<bits/stdc++.h>
#define ll long long int
using namespace std;
void solve()
{
    int n,f,k;
    cin>>n>>f>>k;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int fav = a[f-1];
    //greater(a.begin(),a.end());
    sort(a,a+n,greater<int>());


        if(a[k-1]>fav)
        {
            cout<< "NO\n";
        }

        else if(a[k-1]<fav)
            cout << "YES\n";
        else
            {
                if(a[k-1]==fav && (a[k]!=fav || n==k))
                    cout << "YES\n";
                else
                    cout << "MAYBE\n";
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

