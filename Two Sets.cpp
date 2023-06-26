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
    ll n ; cin >> n;
    ll sum = n *(n+1)/2;
    if(sum & 1){
        cout << "NO" << '\n';
        return;
    }
    cout << "YES" << '\n';
    set<int> s;
    sum /= 2;
    for(int i = n; sum>0 ;i--){
        if(sum >= i){
            sum-=i;
            s.insert(i);
        }
    }
    cout << s.size() << '\n';
    for(auto i: s)
        cout << i << " ";
    cout << '\n';
    cout << n - s.size() << '\n';
    for(int i = 1; i<=n; i++)
        if(s.find(i)==s.end())
            cout << i << " ";
    cout << '\n';
}



signed main()
{
     int test_case=1;
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
//    cin >> test_case;
    while(test_case--)
        solve();
    return 0;
}



///  Alhamdulillah...
