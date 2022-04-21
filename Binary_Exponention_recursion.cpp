#include<bits/stdc++.h>
using namespace std;
const int mod = 1e9+7;

int binexp(int a , int b, int mod)
{
	if(b==0)
	{
		return 1;
	}
	long long temp = binexp(a, b/2, mod)%mod;
	if(b%2==0)
	return (temp*temp)%mod;	

    return ((temp*temp)%mod*a)%mod;

}
int main(){
	
  int x = binexp(2, 3 , mod);
  cout<<x<<endl;




}
