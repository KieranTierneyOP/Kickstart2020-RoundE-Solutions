#include<bits/stdc++.h>
#define ll long long
#define pb push_back
using namespace std;
const int N = 200001;
int main(){
	ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

	ll i,j,k,n,r,t,h,a[N],d[N],p,maxx;
	cin>>t;
	for(h=0;h<t;h++){
		cin>>n;
		for(i=0;i<n;i++)
			cin>>a[i];
		p = LLONG_MAX;
		maxx = 0;
		r = 0;
		for(i=1;i<n;i++){
			if(a[i]-a[i-1]==p)
				r++;
			else
				r = 1;
			p = a[i]-a[i-1];
			maxx = max(maxx, r+1);
		}

		cout<<"Case #"<<h+1<<":  "<<maxx<<"\n";
	}

	return 0;
}