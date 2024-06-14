#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,c=0;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        int y = n-1;
        while(y>0)
        {
            if(a[y]==1) break;
            else y--;
        }
        int x = 0;
        while(x<n)
        {
            if(a[x]==1) break;
            else x++;
        }

        for(int z=x;z<=y;z++)
        {
            if(a[z]==0) c++;
        }

        cout << c <<endl;

    }
}
