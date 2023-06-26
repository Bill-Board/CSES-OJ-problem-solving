//BISMILLAHIR RAHMANIR RAHEEM
//ALLAH IS WATCHING ME
// Shoeb Akibul Islam
// Dept of ICE, NSTU
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N=1015;
#define pii pair<int, int>

int fx[4]= {1,-1,0,0};
int fy[4]= {0,0,1,-1};
int n, m;
string s[N];
vector < vector <pii> > v;
int dist[N][N];

char alabu(pii a, pii b){
    if(a.first < b.first )
        return 'U';
    if(a.first > b.first )
        return 'D';
    if(a.second < b.second )
        return 'L';
    if(a.second > b.second )
        return 'R';
}

void solve()
{
    cin >> n >> m;
    pii a, b;
    for(int i = 0; i<n; i++){
        cin >> s[i];
        for(int j = 0; j<m; j++){
            if(s[i][j] == 'A')
                a.first=i,a.second=j;
            if(s[i][j] == 'B')
                b.first=i,b.second=j;
        }
    }
    v.resize(n+3, vector<pii> (m+3, {0,0}));
    queue< pii > q;
    q.push(a);
    dist[a.first][a.second] = 1;
    v[a.first][a.second]=a;
    while(q.size()){
        pii k = q.front();q.pop();
        if(k == b)break;
        for(int i = 0; i<4; i++){
            int x = k.first+fx[i], y = k.second +fy[i];
            if(0<=x and x<n and 0<=y and y<m and s[x][y]!='#' and dist[x][y]==0){
                v[x][y] = k;
                dist[x][y] = dist[k.first][k.second] + 1;
                q.push({x,y});
            }
        }
    }
    if(dist[b.first][b.second] == 0){
        cout << "NO\n" ;
        return ;
    }
    int cr_h = dist[b.first][b.second] - 1;
    cout << "YES\n" << cr_h << endl;
    string ans;
    while(b != v[b.first][b.second]){
        ans += alabu(b, v[b.first][b.second]);
        b = v[b.first][b.second];
    }
    reverse(ans.begin(), ans.end());
    ans.resize(cr_h);
    cout << ans << endl;
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
