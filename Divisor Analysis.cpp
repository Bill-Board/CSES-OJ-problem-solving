//BISMILLAHIR RAHMANIR RAHEEM
//ALLAH IS WATCHING ME
// Shoeb Akibul Islam
// Dept of ICE, NSTU
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N=200005;



inline void normal(ll &a, ll MOD) { a %= MOD; (a < 0) && (a += MOD); }
inline ll modMul(ll a, ll b, ll MOD) { a %= MOD, b %= MOD; normal(a,MOD), normal(b,MOD); return (a*b)%MOD; }
inline ll modAdd(ll a, ll b, ll MOD) { a %= MOD, b %= MOD; normal(a,MOD), normal(b,MOD); return (a+b)%MOD; }
inline ll modSub(ll a, ll b, ll MOD) { a %= MOD, b %= MOD; normal(a,MOD), normal(b,MOD); a -= b; normal(a,MOD); return a; }
inline ll modPow(ll b, ll p, ll MOD) { ll r = 1; while(p) { if(p&1) r = modMul(r, b,MOD); b = modMul(b, b,MOD); p >>= 1; } return r; }
inline ll modInverse(ll a, ll MOD) { return modPow(a, MOD-2,MOD); }  /// When MOD is prime.
inline ll modDiv(ll a, ll b, ll MOD) { return modMul(a, modInverse(b, MOD),MOD); }

void solve()
{
    ll n , MOD= 1e9 + 7;cin>> n;
    ll nod = 1, sod  = 1, val = 1, hf = 1, pr = 1;
    bool ok = false; // that means it's squre value
    for(int i = 0; i<n ; i++){
        ll x, k; cin >> x >> k;
        nod = modMul(nod, k+1, MOD);
        sod = modMul(sod, modDiv(modSub(modPow(x, k+1,MOD),1ll,MOD),x-1,MOD), MOD);
        val = modMul(val, modPow(x, k,MOD),MOD);
        if(ok == false and k & 1)
            pr = modMul(pr, (k+1)/2, MOD-1),
            ok = true;
        else
            pr = modMul(pr, k+1, MOD-1);

        hf = modMul(hf, modPow(x, k/2,MOD),MOD);
    }
    ll pod;
    if(ok == false)
        pod = modPow(hf, pr, MOD);
    else
        pod = modPow(val,pr,MOD);

    cout << nod << " " << sod << " "<< pod << endl;
    /// 9 91 362797056


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
