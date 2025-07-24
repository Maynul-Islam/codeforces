#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin>>n;
    int a[n+1];
    int zero=0,ones=0,other=0,two=0;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        if(a[i]==0)
        {
            zero++;
        }
        else
        {
            other++;
        }

        if(a[i]==1)
        {
            ones++;
        }

        if(a[i]>0 && a[i]>1)
        {
            two++;
        }
    }
    sort(a,a+n);
     
    if(other>=(zero-1))
    {
        cout << "0\n";
    }
   
    else
    {
        int x = a[n-1];
        
        if(other==1 && x==1)
        {
            cout << "2\n";
            
        }
        else if(two==0 && ones!=0)
        {
            cout << "2\n";
        }
        else
        {
            cout << "1\n";
        }
    }
    return ;
}
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
       solve();
    }

    return 0;
    
}