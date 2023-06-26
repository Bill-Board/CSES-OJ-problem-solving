//BISMILLAHIR RAHMANIR RAHEEM
//ALLAH IS WATCHING ME
// Shoeb Akibul Islam
// Dept of ICE, NSTU
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N=200005;
vector<pair<ll,ll>>a[N];
ll dist[N],visi[N];
void solve()
{
    int n, m;
    cin>> n>> m;

    for(int i = 0; i<m; i++){
        int x, y, v;
        cin >> x >> y >> v;
        a[x].push_back({y,v});
    }
    for(int i = 1; i<=n; i++)
        dist[i]=LLONG_MAX;
    priority_queue <pair<ll,ll>,vector<pair<ll,ll>>,greater<pair<ll,ll>>> pq;
    pq.push(make_pair(0ll,1ll));
    dist[1]=0;
    while(!pq.empty())
    {
        ll x=pq.top().second;
        pq.pop();
        if(visi[x])continue;
        visi[x]=1;
        for(auto u:a[x])
        {
            ll v=u.first;
            ll weigth=u.second;
            if(dist[v]>dist[x]+weigth)
            {
                dist[v]=dist[x]+weigth;
                pq.push(make_pair(dist[v],v));
            }
        }
    }
    for(int i = 1; i<=n; i++)
        cout << dist[i] << " \n"[i==n];
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
