//BISMILLAHIR RAHMANIR RAHEEM
//ALLAH IS WATCHING ME
// Shoeb Akibul Islam
// Dept of ICE, NSTU
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int,int> pii;
const int N=1009;

int fx[4]= {1,-1,0,0};
int fy[4]= {0,0,1,-1};

int n, m, dist[N][N];
pii age[N][N];
pii A;
queue<pii>q;
string ans;

void path(int indx,int indy){
    pii p = age[indx][indy];
    if(p ==  pii(0,0)) return;
    if(indx ==p.first+1)ans += 'D';
    if(indx ==p.first-1)ans += 'U';
    if(indy ==p.second+1)ans += 'R';
    if(indy ==p.second-1)ans += 'L';
    path(p.first,p.second);
}


bool bfs(bool karjnno){

    while(!q.empty()){
        pii p = q.front();q.pop();
        if(karjnno and (p.first==1 or p.first==n or p.second==1 or p.second==m)){
            cout << "YES" << '\n';
            cout << dist[p.first][p.second] << '\n';
            ans.clear();
            path(p.first,p.second);
            reverse(ans.begin(), ans.end());
            cout << ans << '\n';
            return true;
        }
        for(int i = 0; i<4; i++){
            int x= p.first+fx[i], y= p.second+fy[i];
            if(x<1 or n<x or y<1 or m<y)continue;
            if(dist[x][y]>dist[p.first][p.second]+1){
                dist[x][y]=dist[p.first][p.second]+1;
                q.push({x,y});
                age[x][y]= p;
             }
        }
    }
    return false;
}

void solve()
{
    cin >> n>> m;
    for(int i = 1; i<=n ;i++){
        string s;cin >> s;
        for(int j = 1;j<=m; j++){
            dist[i][j]=INT_MAX;
            if(s[j-1]=='#')dist[i][j]=0;
            if(s[j-1]=='M'){
                dist[i][j]=0;
                q.push({i,j});
            }
            if(s[j-1]=='A')
                A.first=i,A.second=j;
        }
    }
    bfs(false);

//    for(int i = 1; i<=n;i++)
//        for(int j = 1; j<=m; j++)
//        cout << dist[i][j] << " \n"[j==m];


    age[A.first][A.second]=pii(0,0);
    dist[A.first][A.second]=0;
    q.push(A);

    if(!bfs(true))
        cout << "NO\n";

}



signed main()
{
    ll test_case=1;
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
//    cin >> test_case;
    while(test_case--)
        solve();
    return 0;
}



///  Alhamdulillah...
