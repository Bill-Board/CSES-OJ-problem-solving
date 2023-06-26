//BISMILLAHIR RAHMANIR RAHEEM
//ALLAH IS WATCHING ME
// Shoeb Akibul Islam
// Dept of ICE, NSTU
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N=200015;

int n, m, visi[N],ans[N];
vector<int> tom[N];
bool dfs(int ind, int val)
{
    if(visi[ind] == 1 and ans[ind] != val)
        return false;
    if(visi[ind] == 1)
        return true;
    ans[ind] = val;
    visi[ind] = 1;
    bool ok = true;
    for(auto i: tom[ind])
        ok &= dfs(i, val^1);
    return ok;
}


void solve()
{
    cin >> n >> m;
    for(int i = 0; i<m; i++){
        int x, y;
        cin >> x >> y;
        tom[x].push_back(y);
        tom[y].push_back(x);
    }
    for(int i = 1; i <= n; i++)
        if(visi[i] == 0 and !dfs(i, 1)){
            cout <<"IMPOSSIBLE" << endl;
            return;
        }
    for(int i = 1; i<=n; i++)
        cout << ans[i] + 1<< " \n"[i==n];
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
