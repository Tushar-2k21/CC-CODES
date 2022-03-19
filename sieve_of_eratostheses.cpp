#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	n=50;
int arr[n]={};
vector<int>v;
v.clear();
// for(int i= 2;i<=n;i++)
for(int i = 2;i*i<=n;i++)
{
	if(arr[i]==1)
	{
		continue;
	}
	
	v.push_back(i);
    // cout<<i<<endl;
	for(int j = i*i; j<=n;j=j+i)
	{	
		arr[j]=1;


	}
}
   int temp = v.size();
	for(int i=2;i<=50;i++)
	{

		if(arr[i]==0)
		cout<<i<<endl;
	}

}




