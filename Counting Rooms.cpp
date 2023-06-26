//BISMILLAHIR RAHMANIR RAHEEM
//ALLAH IS WATCHING ME
// Shoeb Akibul Islam
// Dept of ICE, NSTU
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N=2005;
int fx[4]= {1,-1,0,0};
int fy[4]= {0,0,1,-1};

int n, m, visi[N][N];
string s[N];

int dfs(int indx, int indy)
{
    if(visi[indx][indy])return 0;
    visi[indx][indy] = 1;
    int kot = 1;
    for(int i = 0; i<4 ; i++){
        int x = indx + fx[i], y = indy + fy[i];
        if(0<=x and x<n and 0<=y and y<m and s[x][y] == '.')
            kot += dfs(x, y);
    }
    return kot;
}


void solve()
{
    cin >> n >> m;
    for(int i = 0; i<n; i++)
        cin >> s[i];
    int cr_h = 0;
    for(int i = 0; i<n; i++)
        for(int j = 0; j < m; j++)
            if(s[i][j]=='.' and dfs(i,j)>0)
                cr_h++;

    cout << cr_h <<endl;
}



signed main()
{
    ll test_case=1;
//    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
//    cin >> test_case;
    while(test_case--)
        solve();
    return 0;
}



///  Alhamdulillah...
