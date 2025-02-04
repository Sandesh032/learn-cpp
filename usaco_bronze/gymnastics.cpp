#include<bits/stdc++.h>
using namespace std;

#define FastIO cin.tie(NULL); cout.tie(NULL); ios_base::sync_with_stdio(false);
#define all(x) (x).begin(), (x).end()
#define ll long long

void solve() {
	freopen("gymnastics.in", "r", stdin);
	freopen("gymnastics.out", "w", stdout);
	int n,m;
	cin>>n>>m;
	vector<vector<int>> a(10,vector<int>(20));
	for(int i=0;i<n;i++) {
		for(int j=0;j<m;j++) {
			cin>>a[i][j];
			a[i][j]--;
		}
	}
	vector<vector<int>> ans(20, vector<int>(20));
	for(int i=0;i<n;i++) {
		for(int j=0;j<m;j++) {
			for(int k=j+1;k<m;k++) {
				ans[a[i][j]][a[i][k]]++;
			}
		}
	}
	int res=0;
	for(int i=0;i<m;i++) {
		for(int j=0;j<m;j++) {
			if(ans[i][j]==n) res++;
		}
	}
	cout<<res<<endl;
}

signed main() {
   FastIO
   int TC=1;
   // cin>>TC;
   for(int i=0;i<TC;i++) {
   	// cout<<"Case #"<<TC<<": ";
      solve();
   }
   return 0;
}