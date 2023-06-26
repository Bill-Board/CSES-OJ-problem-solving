//BISMILLAHIR RAHMANIR RAHEEM
//ALLAH IS WATCHING ME
// Shoeb Akibul Islam
// Dept of ICE, NSTU
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N=200005;

int alabu(int n, int k)
{
    if(n == 1)return n;
    if(k <= (n+1)/2){
        if(2*k > n)return 2*k % n;
        else return 2*k;
    }
    int kot = alabu(n / 2, k - (n+1)/2);
    if(n&1)kot = kot*2 + 1;
    else kot = kot*2 - 1;
    return kot;
}
void solve()
{
    int n, k;
    cin >> n >> k;
    cout << alabu(n, k) << endl;

}



signed main()
{
    ll test_case=1;
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    cin >> test_case;
    while(test_case--)
        solve();
    return 0;
}



///  Alhamdulillah...
