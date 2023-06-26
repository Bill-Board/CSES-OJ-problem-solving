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
    string s, p, ans; cin >> s;
    int n = s.size();
    map<char,int> mpp;
    for(auto i: s)
        mpp[i]++;
    for(auto i: mpp){
        if(i.second & 1)
            p+=i.first;
        ans += string (i.second/2, i.first);
    }
    if(p.size()>1){
        cout << "NO SOLUTION\n";
        return;
    }
    s = ans;
    reverse(s.begin(), s.end());
    cout << ans+p+s << '\n';

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
