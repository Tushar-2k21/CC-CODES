#include<bits/stdc++.h>
using namespace std;

int main(){
	long long n, y;
	cin>>n>>y;
long long arr[n]={};
vector<long long>v;
for(int i =2;i<= n;i++)
{
	if(arr[i]==1)
		continue;
    
    v.push_back(i);

	for(int j = i*i;j<=n;j=j+i)
	{
		arr[j]=1;
	}
}
// for(int i=0;i< v.size();i++)
// {
// 	cout<<v[i]<<endl;
// }
   

   long long count=0;
   int temp = v.size();
  for(int i =0;i<temp;i++)
  {
  	 int k = v[i]+v[i+1]+1;
  	 for(int j=i+2;j<temp;j++)
  	 {  

  	 	if(v[j]>k)
  	 		break; 

  	 	if(k==v[j])
  	 	{
  	 		count++;
  	 	}
  	 }
  }
  if(count>=y)
  {
     cout<<"YES"<<endl;
  }
  else if(y>n|| n<5 && y!=0)
  {
  	cout<<"NO"<<endl;
  }
  else{
  	cout<<"NO"<<endl;
  }



}