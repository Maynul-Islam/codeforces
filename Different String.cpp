#include<bits/stdc++.h>
using namespace std;
void solve()
{
    string s;
    cin>>s;
    int len = s.size();
    int uni = 0,x,y;

    for(int i=0; i<len-1; i++)
    {
        if( s[i] != s[i+1])
        {
            uni++;
            swap(s[i],s[i+1]);
            //x = i; y = i+1;
            break;
        }

    }
    if(uni==0)
    {
        cout << "NO\n";
    }
    else
    {
        cout << "YES\n";
        /*
        for(int i=0;i<len;i++)
        {
            cout << s[i];
        }
        */
        cout << s << "\n";
    }
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
