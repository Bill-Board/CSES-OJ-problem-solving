//BISMILLAHIR RAHMANIR RAHEEM
//ALLAH IS WATCHING ME
// Shoeb Akibul Islam
// Dept of ICE, NSTU
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N=200115;

int n, m, visi[N];
vector<int> tom[N];
vector<int> ans;
bool dfs(int ind, int par)
{
    ans.push_back(ind);
    if(visi[ind])
        return true;
    visi[ind]++;
    bool ok = false;
    for(auto i: tom[ind])
        if(i != par and !ok)
            ok |= dfs(i, ind);
    if(!ok)ans.pop_back();
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
    for(int i = 1; i <= n; i++){
        ans.clear();
        if(visi[i] == 0 and dfs(i, 0)){
            reverse(ans.begin(), ans.end());
            while(ans.front() != ans.back())
                ans.pop_back();
            cout << ans.size() << endl;
            for(auto i: ans)
                cout << i << " ";
            cout << '\n';
            return;
        }
    }
    cout <<"IMPOSSIBLE" << endl;
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
