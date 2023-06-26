//BISMILLAHIR RAHMANIR RAHEEM
//ALLAH IS WATCHING ME
// Shoeb Akibul Islam
// Dept of ICE, NSTU
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N=200005;
ll mod= 1e9+7;
vector<int> tom[N];
set<int>s;
void _add(int x, int y){
    if(s.find(x)==s.end() and s.find(y)==s.end() )
        s.insert(x), s.insert(y);
}

void dfs(int ind, int par){
    for(auto i: tom[ind]){
        if(i == par)continue;
        dfs(i,ind);
    }
    if(par != 0)_add(ind, par);
}

void solve()
{
    int n; cin >> n;
    for(int i=0 ;i<n-1; i++){
        int x, y;
        cin >> x >> y;
        tom[x].push_back(y);
        tom[y].push_back(x);
    }
    dfs(1, 0);
    cout << s.size()/2 << '\n';
}



signed main()
{
     int test_case=1;
//    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
//    cin >> test_case;
    while(test_case--)
        solve();
    return 0;
}



///  Alhamdulillah...
