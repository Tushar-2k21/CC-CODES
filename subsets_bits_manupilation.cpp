#include<bits/stdc++.h>
using namespace std;

int main(){
	
 int n;
 cin>>n;
 vector<char> v;
 for(int i = 0;i< n;i++)
 {  char x;
 	cin>>x;
 	v.push_back(x);
 }
  
   for(int i= 0;i< (1<<n);i++)
   {
   	for(int j = 0;j< n;j++)
   	{
   		if(i&(1<<j))
   		{
   		
   			cout<<v[j]<<" ";
   		}
   		
   	}
   	cout<<endl;
   }




}