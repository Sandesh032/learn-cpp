#include<bits/stdc++.h>
using namespace std;

#define FastIO cin.tie(NULL); cout.tie(NULL); ios_base::sync_with_stdio(false);
#define int long long int
#define ull unsigned long long int
#define pb push_back
#define ff first
#define ss second

void solve() {
	// freopen("blocks.in", "r", stdin);
	// freopen("blocks.out", "w", stdout);
	int n;
	cin>>n;
	vector<string> a(n),b(n);
	for(int i=0;i<n;i++) cin>>a[i]>>b[i];
	vector<int> ans(26);
	for(int i=0;i<n;i++) {
		map<char, int> mp1,mp2;
		for(int j=0;j<a[i].size();j++) mp1[a[i][j]]++;
		for(int j=0;j<b[i].size();j++) mp2[b[i][j]]++;
		for(int j=0;j<26;j++) ans[j]+=max(mp1[char(j+97)],mp2[char(j+97)]);
	}
	for(int i=0;i<26;i++) cout<<ans[i]<<endl;
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