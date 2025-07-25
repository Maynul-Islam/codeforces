#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve()
{
    ll n;
    cin>>n;
    ll a[n+1];
    ll l_pos=0,r_pos=0;
    bool fl = false;
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
        if(i>1)
        {
            if(a[i-1]>a[i] && fl == false)
            {
                l_pos = i-1;
                fl = true;
            }
        }
    }
    if(l_pos==0)
    {
        cout << "yes\n";
        cout << 1 << " " << 1 <<endl;
    }
    else
    {
        for(int i=l_pos;i<=n-1;i++)
        {
            if(a[i]<a[i+1])
            {
                r_pos = i;
                break;
            }
        }
        if(r_pos==0)
        {
            r_pos=n;
        }
        //cout << l_pos << " " << r_pos << "\n";
        reverse(a + l_pos,a+r_pos+1);
        int flag = 0;
        
        for(int i=1;i<=n-1;i++)
        {
            //cout<< a[i] << " ";
            if(a[i]>a[i+1])
            {
                flag = 1;
                break;
            }
                
        }
        
        if(flag == 1)
        {
            cout<< "no\n";
        }
        else
        {
            cout << "yes\n";
            cout << l_pos << " " << r_pos << "\n";
        }
    }

    return;
    
}
int main()
{
    int t=1;
    while (t--)
    {
        solve();

    }
    return 0;
}