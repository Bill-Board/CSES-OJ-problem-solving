//BISMILLAHIR RAHMANIR RAHEEM
//ALLAH IS WATCHING ME
// Shoeb Akibul Islam
// Dept of ICE, NSTU
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N=200005;
ll m= 1e9 + 7;
ll bigmod(ll a, ll b, ll mod){
    if(b == 0 and a==0)
        return 1ll;
    if(a==0)
        return 0ll;
    if(b == 0)
        return 1ll;
    if( b == 1 )
        return a;
    ll kot = bigmod(a, b/2,mod) % mod;
    if(b & 1)
        return (a * (kot * kot % mod) )% mod;
    else
        return kot * kot % mod;
}

void solve()
{
    ll a, b, c;
    cin >> a >> b >> c;
    cout <<bigmod( a, bigmod(b, c , m - 1) , m)<< endl;
}



signed main()
{
    ll test_case=1;
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    cin >> test_case;
    while(test_case--)
        solve();
    return 0;
}



///  Alhamdulillah...
