#include<bits/stdc++.h>
using namespace std;
#define ll long long int
void solve()
{
    int n,m;
    cin>>n>>m;

    vector <vector<char> > v(n,vector<char>(m));

    int cnt = 0,mid_pos;

    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            cin>>v[i][j];
            if(v[i][j]=='#')
                cnt++;
        }
    }
    int ind_i,ind_j;

    if(cnt%2==1) mid_pos = cnt/2;
    else mid_pos = (cnt/2)+1;

    if(cnt==1)
    {
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<m; j++)
            {

                if(v[i][j]=='#')
                {
                   ind_i = i;
                   ind_j = j;
                }

            }
        }
        cout << ind_i+1 << " " << ind_j+1 << "\n";

    }
    else
    {
        int tmp_cnt =0;
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<m; j++)
            {

                if(v[i][j]=='#' && tmp_cnt <= mid_pos)
                {
                    tmp_cnt++;
                   ind_i = i;
                   ind_j = j;
                }

            }
        }
       cout << ind_i+1 << " " << ind_j+1 << "\n";
    }


    return;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;
    while(t--)
    {
        solve();
    }
    return 0;
}


