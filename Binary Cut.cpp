#include<bits/stdc++.h>
using namespace std;
void solve()
{
    string s;
    cin>>s;
    int len = s.size();
    int cnt =1,flag = 0;
    for(int i=1;i<len;i++)
    {
        if(s[i]==s[i-1])
        {
           continue;
        }
        else
        {
           cnt++;
        }

        if(s[i]=='1' && s[i-1]=='0')
        {
          flag = 1;
        }
    }
    cout << cnt-flag << "\n";
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
