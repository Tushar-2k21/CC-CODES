/* chef was recently studying the Bitwise OR operation, and stumbled upon the following problem:

Let F(i)=1 | 2 | 3 | … | i, where | denotes bitwise OR.

You are given an integer N. Find the number of distinct i such that 2≤i≤N and  F(i)=F(i−1)*/

#include<bits/stdc++.h>
using namespace std;

int pow(int i)
{
    return(1<<i);

}
int max_num(int bits)
{
    return pow(bits+1)-1;
}


int main(){
    
int t ;
cin>>t;
while(t--)
{
   int n ;
   cin>>n;
    int bit_count=0;
   while(n>>bit_count)
    bit_count++;
  int ans=0;
  // cout<<bit_count<<endl;
   for(int i=1;i<bit_count;i++)
   {
     ans+=min(n, max_num(i))-pow(i);

   }
   cout<<ans<<endl;
   
}




       

}
  

    

    





// }