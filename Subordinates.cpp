//BISMILLAHIR RAHMANIR RAHEEM
//ALLAH IS WATCHING ME
// Shoeb Akibul Islam
// Dept of ICE, NSTU
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N=200005;
ll mod= 1e9+7;

vector<int> ans(N),tom[N];

int dfs(int ind, int par){
    int kot = 1;
    for(auto i: tom[ind]){
        if(i == par)continue;
        kot += dfs(i,ind);
    }
    ans[ind] = kot - 1;
    return kot;
}


void solve()
{
    int n; cin >> n;
    for(int i = 2; i<=n; i++){
        int x; cin >> x;
        tom[x].push_back(i);
        tom[i].push_back(x);
    }
    dfs(1,0);
    for(int i = 1; i<=n; i++)
        cout << ans[i] << " \n"[i==n];
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
