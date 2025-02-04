#include<bits/stdc++.h>
using namespace std;

#define FastIO cin.tie(NULL); cout.tie(NULL); ios_base::sync_with_stdio(false);
#define all(x) (x).begin(), (x).end()
#define ll long long

void solve() {
	freopen("circlecross.in", "r", stdin);
	freopen("circlecross.out", "w", stdout);
	string s;
	cin>>s;
	vector<int> st(26,-1),en(26,-1);
	for(int i=0;i<52;i++) {
		if(st[s[i]-'A']==-1) st[s[i]-'A']=i;
		else en[s[i]-'A']=i;
	}
	int ans=0;
	for(int i=0;i<26;i++) {
		for(int j=0;j<26;j++) {
			if(st[j]>st[i] && en[i]>st[j] && en[j]>en[i]) ans++;
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