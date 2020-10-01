#include<bits/stdc++.h>
#define ll long long
#define pb push_back
using namespace std;
const int N = 2001;
int main(){
	ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

	ll i,j,k,n,r[N],t,h,e[N],dp[N][2];
	cin>>t;
	for(h=0;h<t;h++){
		cin>>n;
		ll total_played, tmp;
		total_played = 0;
		for(i=0;i<n;i++){
			cin>>e[i]>>r[i];
			total_played += e[i];
		}
		dp[0][0] = 

		//cout<<"Case #"<<h+1<<":\n";
	}

	return 0;
}