#include<bits/stdc++.h>
#define ll long long
#define pb push_back
using namespace std;
const int N = 1001;
int main(){
	// ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

	ll i,j,k,n,r,t,h,a,b,c,f1,f2;
	cin>>t;
	for(h=0;h<t;h++){
		cin>>n>>a>>b>>c;
		f1 = f2 = 0;
		if(a-c>0)
			f1 = 1;
		if(b-c>0)
			f2 = 1;
		if(a+b-c>n){
			cout<<"Case #"<<h+1<<": IMPOSSIBLE"<<"\n";
			continue;
		}
		if(f1==0 && f2==0 && c!=n){
			if(c==1){
				cout<<"Case #"<<h+1<<": IMPOSSIBLE"<<"\n";
				continue;		
			}
			else{
				vector<ll> ans;
				for(i=0;i<c-1;i++)
					ans.pb(n);
				for(i=0;i<n-c;i++)
					ans.pb(1);
				ans.pb(n);
				cout<<"Case #"<<h+1<<": ";
				for(i=0;i<ans.size();i++)
					cout<<ans[i]<<" ";
				cout<<"\n";
				continue;

			}

		}
		vector<ll> ans;
		if(f1){
			r = n-(a-c);
			for(i=0;i<a-c;i++)
				ans.pb(r+i);
			for(i=0;i<n-(a+b-c);i++)
				ans.pb(1);
			for(i=0;i<c;i++)
				ans.pb(n);
			r = n-1;
			for(i=0;i<b-c;i++)
				ans.pb(r-i);
		}
		else{
			r = n-(a-c);
			for(i=0;i<a-c;i++)
				ans.pb(r+i);
			for(i=0;i<c;i++)
				ans.pb(n);
			for(i=0;i<n-(a+b-c);i++)
				ans.pb(1);
			r = n-1;
			for(i=0;i<b-c;i++)
				ans.pb(r-i);

		}


		cout<<"Case #"<<h+1<<": ";
		for(i=0;i<ans.size();i++)
			cout<<ans[i]<<" ";
		cout<<"\n";
	}

	return 0;
}