//BISMILLAHIR RAHMANIR RAHEEM
//ALLAH IS WATCHING ME
// Shoeb Akibul Islam
// Dept of ICE, NSTU
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N=200005;
ll MOD=1e9+7;

inline void normal(ll &a) { a %= MOD; (a < 0) && (a += MOD); }
inline ll modMul(ll a, ll b) { a %= MOD, b %= MOD; normal(a), normal(b); return (a*b)%MOD; }
inline ll modAdd(ll a, ll b) { a %= MOD, b %= MOD; normal(a), normal(b); return (a+b)%MOD; }
inline ll modSub(ll a, ll b) { a %= MOD, b %= MOD; normal(a), normal(b); a -= b; normal(a); return a; }
inline ll modPow(ll b, ll p) { ll r = 1; while(p) { if(p&1) r = modMul(r, b); b = modMul(b, b); p >>= 1; } return r; }
inline ll modInverse(ll a) { return modPow(a, MOD-2); }  /// When MOD is prime.
inline ll modDiv(ll a, ll b) { return modMul(a, modInverse(b)); }
ll sum_(ll l, ll r,ll inv){
    if( r <= l)return 0ll;
    ll sum =modSub( modMul( modMul(r,r + 1),inv) , modMul( modMul(l,l + 1),inv) );
    return sum;
}

void solve()
{
    ll n , inv = modInverse(2ll);
    cin >> n;
    ll ans = 0;
    for(ll i =1; i * i<= n; i++){
        ll r = n / i , l = max(i,n/ (i+1));
        ll sum1 = modMul(i, sum_(l , r, inv));
        sum1 = modAdd(sum1, modMul(i, r));
        ans = modAdd(ans, sum1);
    }
    cout << ans << endl;
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
