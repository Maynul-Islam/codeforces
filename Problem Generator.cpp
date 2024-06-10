#include<bits/stdc++.h>
#define ll long long
using namespace std;
void solve(void)
{
    int m,n;
    cin>>n>>m;
    int a=0,b=0,c=0,d=0,e=0,f=0,g=0;
    string s;
    cin>>s;


    for(int i=0; i<s.size(); i++)
    {
        if(s[i]=='A')
            a++;
        else if(s[i]=='B')
            b++;
            else if(s[i]=='C')
                c++;
                else if(s[i]=='D')
                    d++;
                    else if(s[i]=='E')
                        e++;
                        else if(s[i]=='F')
                            f++;
                            else if(s[i]=='G')
                                g++;
                            }

        ll ans = 0;

            if(a<m)
            ans+=(m-a);
            if(b<m)
            ans+=(m-b);
            if(c<m)
            ans+=(m-c);
             if(d<m)
            ans+=(m-d);
             if(e<m)
            ans+=(m-e);
             if(f<m)
            ans+=(m-f);
             if(g<m)
            ans+=(m-g);

             cout << ans << "\n";

             return;
}
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        solve();
    }

}
