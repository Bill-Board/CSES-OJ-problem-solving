//BISMILLAHIR RAHMANIR RAHEEM
//ALLAH IS WATCHING ME
// Shoeb Akibul Islam
// Dept of ICE, NSTU
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N=200005;
ll n , k;
vector <ll> a;
ll inlcu_exclu(){
    ll even = 0 , odd = 0, lop= (1<<k);
    for(ll i = 1; i <lop; i++){
        ll gun = 1, ok = 1;
        for(ll j= 0; j<k; j++)
            if((1<<j) & i){
                if(gun > n/a[j]){
                    gun = n+1;
                    break;
                }
                    gun *= a[j];
            }
        ll kot = n / gun;
        if(__builtin_popcount(i) & 1)
            odd += kot;
        else
            even+= kot;
    }
    return odd - even;
}

void solve()
{
    cin >> n >> k;
    a.resize(k);
    for(auto &i: a)
        cin >> i;
    cout << inlcu_exclu() << endl;
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
