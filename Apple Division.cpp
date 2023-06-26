//BISMILLAHIR RAHMANIR RAHEEM
//ALLAH IS WATCHING ME
// Shoeb Akibul Islam
// Dept of ICE, NSTU
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N=200005;
ll mod= 1e9+7;

void solve(int tc)
{
    int n; cin >> n;
    ll sum = 0, cr_h = LLONG_MAX;
    vector<int> a(n);
    for(auto &i: a)
        cin >> i, sum += i;
    int lop = (1<<(n-1));
    for(int i = 0; i <lop; i++){
        ll ek = 0;
        for(int j = 0; j<n; j++)
            if(i & (1<<j))
                ek += a[j];//, cout << j << ' ';
        ll dui = sum - ek;//cout << '\n';
        cr_h = min(cr_h, abs(ek - dui));
    }
    cout << cr_h << '\n';


}



signed main()
{
    int test_case=1;
//    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
//    cin >> test_case;
    for(int i = 1; i <= test_case ; i++)
        solve(i);
    return 0;
}



///  Alhamdulillah...
