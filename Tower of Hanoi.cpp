//BISMILLAHIR RAHMANIR RAHEEM
//ALLAH IS WATCHING ME
// Shoeb Akibul Islam
// Dept of ICE, NSTU
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N=200005;
ll mod= 1e9+7;

void tower_of_hanoi(int n, int a, int b, int c){
    if(n == 0)return;
    tower_of_hanoi(n-1, a, c, b);
    cout << a << " " << b << '\n';
    tower_of_hanoi(n-1, c, b, a);
}

void solve()
{
    int n; cin >> n;
    cout << (1<< n) -1 << '\n';
    tower_of_hanoi(n, 1, 3, 2);
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
