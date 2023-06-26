//BISMILLAHIR RAHMANIR RAHEEM
//ALLAH IS WATCHING ME
// Shoeb Akibul Islam
// Dept of ICE, NSTU
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N=200005;
ll mod= 1e9+7;

void solve()
{
    int n; cin >> n;
    for(int i =0; i< (1<<n); i++){
        for(int j = n - 1,last = 0; j>=0; j--){
            int ans = last;
            if((1<<j)&i) ans ^= 1, last = 1;
            else ans ^= 0 , last = 0;
            cout << ans;

        }cout << '\n';

    }
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
