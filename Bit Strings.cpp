//BISMILLAHIR RAHMANIR RAHEEM
//ALLAH IS WATCHING ME
// Shoeb Akibul Islam
// Dept of ICE, NSTU
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N=200005;
ll mod= 1e9+7;

ll alabu(ll a, ll b){
    if(b<1)return 1ll;
    if(b&1) return (alabu(a, b-1) * a)%mod;
    ll kot = alabu(a, b/2);
    return (kot * kot) %mod;
}


void solve()
{
    ll n; cin >> n;
    cout << alabu(2ll, n) << '\n';




//    ll n, cr_h = 1,val  = 2 ; cin >> n;
//    while(n){
//        if(n&1) cr_h = (cr_h * val) %mod;
//        val = (val * val) %mod;
//        n >>= 1;
//    }

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
