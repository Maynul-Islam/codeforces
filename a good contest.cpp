#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    string s;
    int n1,n2;
    int x = 0;
    while(n--)
    {

        cin>>s;
        cin>>n1>>n2;
        //n1 = abs(n1);
        //n2 = abs(n2);

        if(n1>=2400 && n2>n1)
        {
            x++;
        }
    }
    if(x!=0)
        cout << "YES"<<endl;
    else
        cout << "NO"<<endl;

    return 0;
}
