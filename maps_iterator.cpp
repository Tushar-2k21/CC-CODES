#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define pb push_back
#define pob pop_back
#define MP make_pair
#define MT make_tuple
#define rep(i,a,b) for(int i=a;i<b;i++)
#define rept(it,v) for(auto it=v.begin();it!=v.end();it++)
#define pre(i,a,b) for(int i=a;i>=b;i--)
#define all(v) v.begin(),v.end()
#define F first
#define S second
#define sz(x) (int)x.size()
#define endl "\n"
#define ct continue
#define ub upper_bound
#define fill(a,b) memset(a,b,sizeof(a))
#define lb lower_bound
#define bs binary_search
#define pll pair<ll,ll> 
#define pii pair<int,int>
#define vll vector<ll>
#define vii vector<int>
#define deb(x)  cout<<#x<<" : "<<x<<endl
 
//Ordered Set-
//#include <ext/pb_ds/assoc_container.hpp> 
//#include <ext/pb_ds/tree_policy.hpp> 
//using namespace __gnu_pbds; 
//#define ordered_set tree<int, null_type,less<int>, rb_tree_tag,tree_order_statistics_node_update> 
 
const ll  mod=1e9+7;
 
ll bin(ll a, ll b)
{
	if(b==0)
	return 1;
	if(b&1)
		return (a*bin((a*a)%mod,b/2))%mod;
	return (1*bin((a*a)%mod,b/2))%mod;
}
 
void I_m_Beast()
{	
	ll n,m,a,b;
	cin>>n>>m;
	map<ll,ll>mp;
	ll ans=1;
	for(int i=0;i<n;i++)
	{
		cin>>a;
        if(a!=0)
		    mp[a]++;
	}
    if(mp.size()==0)
    {
        cout<<0<<endl;
        return ;
    }
	while(m>0 && mp.size()>0)
	{	
		auto it=mp.end();
		it--;	
		a=it->first;
		b=it->second;
		cout<<a<<"v"<<b<<endl;
		mp.erase(it);
        if(a==1)
            ct;
		m-=b;
		if(a%2==0){
    		mp[a/2]+=2*b;
		}
		else{
			mp[a/2]+=b;
			mp[a/2+1]+=b;  
		}
		if(m<0){
			// cout<<a<<endl;
			return ;
		}
	}
    if(mp.size()>0)
	    ans=max(ans,mp.rbegin()->first);
	// cout<<(mp.rbegin()->first)<<"iiiii"<<endl;
	// cout<<ans<<endl;
}
 
int main()
{	
	fastio;
	int t=1;
	cin>>t;
	while(t--)
	{
		I_m_Beast();
	}	
	return 0;	
}