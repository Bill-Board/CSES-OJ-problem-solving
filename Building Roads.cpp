//BISMILLAHIR RAHMANIR RAHEEM
//ALLAH IS WATCHING ME
// Shoeb Akibul Islam
// Dept of ICE, NSTU
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N=200005;

int n, m, visi[N];
vector<int> tom[N];
int dfs(int ind)
{
    if(visi[ind])return 0;
    visi[ind] = 1;
    int kot = 1;
    for(auto i: tom[ind])
        kot += dfs(i);
    return kot;
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
    vector<int> a;
    for(int i = 1; i <= n; i++)
        if(dfs(i))
            a.push_back(i);
    cout << a.size() - 1 << "\n";
    for(int i= 0; i<a.size() - 1; i++)
        cout << a[i] << " " << a[i+1] << "\n";
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
