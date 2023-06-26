//BISMILLAHIR RAHMANIR RAHEEM
//ALLAH IS WATCHING ME
// Shoeb Akibul Islam
// Dept of ICE, NSTU
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N=200005;
ll mod= 1e9+7;

int legendra(int n, int p){
    int cnt  = 0;
    while(n){
        n /= p;
        cnt += n;
    }
    return cnt;
}

void solve()
{
    int n; cin >> n;
    cout << legendra(n, 5) << '\n';
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
