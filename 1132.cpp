//BISMILLAHIR RAHMANIR RAHEEM
//ALLAH IS WATCHING ME
// Shoeb Akibul Islam
// Dept of ICE, NSTU
#include<bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#include <ext/pb_ds/detail/standard_policies.hpp>
using namespace std;
using namespace __gnu_pbds;

using ll = long long;
using pii= pair<int,int>;

typedef tree<pii,null_type,greater<pii>,rb_tree_tag,tree_order_statistics_node_update> ordered_multiset;

const int N=200005;
ll mod= 1e9+7;
ordered_multiset s[N];
vector<int> g[N];
int n, d[N], ans[N];

int dfs1(int ind, int par = 0){
    int l = 0;
    for(auto i: g[ind]){
        if(par == i) continue;
        int val = dfs1(i, ind);
        l = max(l, val +1);
        s[ind].insert({val + 1, i});
    }
    return d[ind] = l;
}

void dfs(int ind, int par = 0, int val = 0){
    ans[ind] = max(d[ind], val);
    s[ind].insert({val, par});
    for(auto i: g[ind]){
        if(i == par) continue;
        int kot;
        if((*s[ind].find_by_order(0)).second != i)
            kot = (*s[ind].find_by_order(0)).first;
        else
            kot = (*s[ind].find_by_order(1)).first;
        dfs(i, ind, kot + 1);
    }
}

void solve(int tc)
{
    cin >> n;
    for(int i = 0; i<n-1; i++){
        int u, v; cin >> u >> v;
        g[u].push_back(v);
        g[v].push_back(u);
    }
    dfs1(1);
    dfs(1);
    for(int i = 1; i<=n; i++)
        cout << ans[i] << " \n"[i==n];
}



signed main()
{
    int test_case=1;
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
//    cin >> test_case;
    for(int i = 1; i <= test_case ; i++)
        solve(i);
    return 0;
}



///  Alhamdulillah...
