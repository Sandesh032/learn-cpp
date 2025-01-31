#include<bits/stdc++.h>
using namespace std;

#define FastIO cin.tie(NULL); cout.tie(NULL); ios_base::sync_with_stdio(false);
#define all(x) (x).begin(), (x).end()
#define ll long long

const ll inf = 0xFFFFFFFFFFFFFFFLL;

void solve() {
	freopen("traffic.in", "r", stdin);
	freopen("traffic.out", "w", stdout);
	ll n;
	cin>>n;
	vector<string> s(n);
	vector<ll> low(n),high(n);
	for(ll i=0;i<n;i++) cin>>s[i]>>low[i]>>high[i];
	ll a=0,b=inf;
	for(ll i=n-1;i>=0;i--) {
		if(s[i]=="on") {
			a-=high[i];
			b-=low[i];
			a=max(0ll,a);
			b=max(0ll,b);
		} else if(s[i]=="off") {
			a+=low[i];
			b+=high[i];
		} else if(s[i]=="none") {
			a=max(a,low[i]);
			b=min(b,high[i]);
		}
	}
	cout<<a<<" "<<b<<endl;
	a=0,b=inf;
	for(ll i=0;i<n;i++) {
		if(s[i]=="on") {
			a+=low[i];
			b+=high[i];
		} else if(s[i]=="off") {
			a-=high[i];
			b-=low[i];
			a=max(0ll,a);
			b=max(0ll,b);
		} else if(s[i]=="none") {
			a=max(a,low[i]);
			b=min(b,high[i]);
		}
	}
	cout<<a<<" "<<b;
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