//BISMILLAHIR RAHMANIR RAHEEM
//ALLAH IS WATCHING ME
// Shoeb Akibul Islam
// Dept of ICE, NSTU
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N=100015;

int n, m;
vector <int> tom[N];
int dist[N],par[N];


void solve()
{
    cin >> n >> m;
    for(int i = 0; i<m; i++){
        int x, y;cin >> x >> y;
        tom[x].push_back(y);
        tom[y].push_back(x);
    }
    queue< int > q;
    q.push(1);
    dist[1] = 1;
    while(q.size()){
        int k = q.front();q.pop();
        if(k == n)break;
        for(auto i: tom[k])if(dist[i] == 0){
            dist[i] = dist[k] + 1;
            par[i] = k;
            q.push(i);
        }
    }
    if(dist[n] == 0){
        cout << "IMPOSSIBLE\n" ;
        return ;
    }
    int cr_h = dist[n] ;
    cout << cr_h << endl;
    vector <int> ans;
    while(n){
        ans.push_back(n);
        n = par[n];
    }
    reverse(ans.begin(), ans.end());
    ans.resize(cr_h);
    for(auto i: ans)
        cout << i << " ";cout << endl;
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
