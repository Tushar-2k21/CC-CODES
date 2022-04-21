#include<bits/stdc++.h>
using namespace std;

int binexpit(int a , int b, int mod)
{
      long long ans = 1;
      while(b)
      {
      	if(b&1)
      		ans = (ans * a )%mod;

        a= (a*a)%mod;
        b=b>>1;
        
      }
       return ans;
}



int main(){
	
 cout<<binexpit(2,4 , 1e9+7);




}