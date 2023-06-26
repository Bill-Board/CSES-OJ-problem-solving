//BISMILLAHIR RAHMANIR RAHEEM
//ALLAH IS WATCHING ME
// Shoeb Akibul Islam
// Dept of ICE, NSTU
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N=200005;
ll mod= 1e9+7;

vector<int> level(N), tom[N];

void dfs(int ind, int par){
    for(auto i: tom[ind]){
        if(i == par)continue;
        dfs(i,ind);
    }
    level[par] = max(level[par], level[ind] + 1 );
}


void solve()
{
    int n; cin >> n;
    for(int i = 0; i<n-1; i++){
        int x, y;
        cin >> x >> y;
        tom[x].push_back(y);
        tom[y].push_back(x);
    }
    int rt = 1;
    for(int i = 1; i<=n; i++)
        if(tom[i].size()>1)
        rt = i;
    dfs(rt, 0);
    vector<int> ans;
    for(auto i: tom[rt])
        ans.push_back(level[i]);
    sort(ans.begin(),ans.end(),greater<>());
    if(ans.size()>1)
        cout << ans[0] + ans[1] +2 << '\n';
    else
        cout << 1 << '\n';
}



signed main()
{
     int test_case=1;
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
//    cin >> test_case;
    while(test_case--)
        solve();
    return 0;
}



///  Alhamdulillah...
