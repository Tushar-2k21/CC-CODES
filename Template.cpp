

#include<bits/stdc++.h>
using namespace std;
const int mod = 1e9+7;

// DEFINES
#define int long long 
#define all(v) v.begin(),v.end()
#define precise(x) cout << fixed << setprecision(10) << x << endl
//#define endl "\n"

 
 bool comp(pair<int,int> a, pair<int,int>b)
 {
      // True means it should be present before 
 	// if (a is greater than b ) then a should be present before b == return true;
	  if(a.first>b.first)return a.first>b.first; 

     else if(a.first==b.first) return a.second<b.second;
     
     else return false;
 }

// -----------------------------------------------------------------------------------------




// int x1, y1, gcd;
// void EED(int a , int b){
// 	if(b==0)
// 	{
// 		x1=1;
// 		y1=0;
// 		gcd=a;
// 		return;
// 	}
// 	EED(b, a%b);
// 	int temp_x= y1;
// 	int temp_y = x1-(a/b)*y1;

// 	x1 = temp_x;
// 	y1 = temp_y;


// }

// int a , b;
	// cin>>a>>b;
	// EED(a,b);

  // cout<<"the x is :"<<x1<<endl;
  // cout<<"the y is :"<<y1<<endl;
  // cout<<"the gcd is :"<<gcd<<endl;
  // a*x%b=1;
  // a*x+b*y=gcd(a,b);
  // cout<<"the inverse modulo :"<<(x1+b)%b<<endl;


// --------------------------------------------------------------------------------------------



 //  long long binexp(int a , int b, int mod)
 //  {
	// if(b==0)
	// {
	// 	return 1;
	// }
	// long long temp = binexp(a, b/2, mod)%mod;
	// if(b%2==0)
	// return (temp*temp)%mod;	

 //    return ((temp*temp)%mod*a)%mod;

 //  }


// -----------------------------------------------------------------------------------------------

// long long factorial[10000+1];

// long long fact(int n){

 
//    factorial[0]=1;
    	
//    for(int i =1;i< 1000;i++)
//    {
//    	  factorial[i]=(i*factorial[i-1])%mod;
//    } 	
//    return factorial[n];

// }


// --------------------------------------------------------------------------------



// void sieve(int n ){

// int arr[n]={};
// vector<int>v;
// v.clear();
// for(int i = 2;i*i<n;i++)
// {
// 	if(arr[i]==1)
// 	{
// 		continue;
// 	}
	
// 	v.push_back(i);
//     // cout<<i<<endl;
// 	for(int j = i*i; j<n;j=j+i)
// 	{	
// 		arr[j]=1;


// 	}
// }


// for(int i=2;i<=n;i++)
// 	{

// 		if(arr[i]==0)
// 		cout<<i<<endl;
//     }	


// }

// ------------------------------------------------------------------------------------

void fastio()
{
	 ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
}
// ---------------------------------------------------------------------------------------

void solve()
{
	 
  


}

signed main()
{
   fastio();
	

	int tt;
	cin>>tt;

	

	while(tt--)
	{
        
        
	   solve();



	}



}
