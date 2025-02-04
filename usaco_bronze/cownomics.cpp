#include<bits/stdc++.h>
using namespace std;

#define FastIO cin.tie(NULL); cout.tie(NULL); ios_base::sync_with_stdio(false);
#define all(x) (x).begin(), (x).end()
#define ll long long

void solve() {
	freopen("cownomics.in", "r", stdin);
	freopen("cownomics.out", "w", stdout);
	int n,m;
	cin>>n>>m;
	vector<string> spot(n),plain(n);
	for(int i=0;i<n;i++) cin>>spot[i];
	for(int i=0;i<n;i++) cin>>plain[i];
	vector<string> chk1(m),chk2(m);
	for(int i=0;i<m;i++) {
		for(int j=0;j<n;j++) {
			chk1[i]+=spot[j][i];
			chk2[i]+=plain[j][i];
		}
	}
	int ans=0;
	for(int i=0;i<m;i++) {
		bool ok=0;
		for(int j=0;j<n;j++) {
			for(int k=0;k<n;k++)
				if(chk1[i][j]==chk2[i][k])
					ok=1;
		}
		if(!ok) {
			ans++;
		}
	}
	cout<<ans<<endl;
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