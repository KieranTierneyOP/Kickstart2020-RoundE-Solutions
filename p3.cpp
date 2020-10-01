#include<bits/stdc++.h>
#define ll long long
#define pb push_back
using namespace std;
const int N = 1001;
vector<vector<ll>> subsets(vector<ll>& nums) {
     ll i,n,r,tmp,d,l,j;
     n = nums.size();
     r = 1;
     for(i=0;i<n;i++)
         r*=2;
     string bin;
     vector<ll> a;
     vector<vector<ll>> ans;
     for(i=0;i<r;i++){
         bin = "";
         tmp = i;
         while(tmp){
             d = tmp%2;
             tmp = tmp/2;
             if(d==0)
                 bin = "0" + bin;
             else
                 bin = "1" + bin;
         }
         l = bin.size();
         for(j=0;j<n-l;j++)
             bin = "0" + bin;
         a.clear();
         for(j=0;j<n;j++)
             if(bin[j] == '1')
                 a.push_back(nums[j]);
         ans.push_back(a);
             
     }
     return ans;
 }
int main(){
	ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

	ll i,j,k,n,r[20],t,h,e[20];
	cin>>t;
	for(h=0;h<t;h++){
		cin>>n;
		for(i=0;i<n;i++){
			cin>>e[i]>>r[i];
		}
		vector<ll> nums;
		vector<vector<ll>> subs;
		for(i=0;i<n;i++)
			nums.pb(i);
		subs = subsets(nums);
		ll l,maxx,s,total_played,ans,tmp;
		maxx = 0;
		l = subs.size();
		ll f = 0;
		ans = 0;
		for(i=l-1;i>=1;i--){
			s = 0;
			total_played = 0;
			tmp = 0;
			ll f1 = 1;
			for(j=0;j<subs[i].size();j++){
				total_played += e[subs[i][j]];
				tmp += e[subs[i][j]];
			}
			for(j=0;j<subs[i].size();j++){

				if(tmp-e[subs[i][j]]<r[subs[i][j]]){
					f1 = 0;
					break;
				}
				total_played += e[subs[i][j]];

			}
			if(total_played>maxx){
				ans = n-subs[i].size();
				maxx = total_played;
			}
			if(f1==1){
				f = 1;
				ans = n-subs[i].size();
				break;
			}
		}
		if(f){
			cout<<"Case #"<<h+1<<": "<<ans<<" INDEFINITELY\n";	
		}
		else{
			cout<<"Case #"<<h+1<<": "<<ans<<" "<<maxx<<"\n";	
		}

	}
	return 0;
}