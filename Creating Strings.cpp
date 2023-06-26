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
    string s; cin >> s;
    sort(s.begin(),s.end());
    set<string> p;
    do{
        p.insert(s);
    }while(next_permutation(s.begin(),s.end()));
    cout << p.size() << '\n';
    for(auto i: p)
        cout << i << '\n';
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
