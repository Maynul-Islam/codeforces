#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<char>v;
        int x;
        for(int i=0; i<n; i++)
        {
            char c;
            cin>>c;
            v.push_back(c);
        }
        sort(v.begin(),v.end());
        x = unique(v.begin(),v.end())-v.begin();

        cout << (x*2)+(n-x)<<endl;

    }
    return 0;
}
