#include<bits/stdc++.h>
using namespace std;

const int mod = 1e9+7;


int main(){
	
int fac[10000+1];
fac[0]=1;
    	
   for(int i =1;i< 1000;i++)
   {
   	  fac[i]=(i*fac[i-1])%mod;
   } 	
   int n ;
   cin>>n;
  cout<<fac[n]<<endl;

}