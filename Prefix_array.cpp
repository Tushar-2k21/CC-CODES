#include<bits/stdc++.h>
using namespace std;
int n = 5;
int main(){


int arr[n]={1,1,1,1,1}	;

int prefix[n];
prefix[0]=arr[0];
for(int i=1;i<n;i++)
{
	prefix[i]=prefix[i-1]+arr[i];
}

for(int i =0;i< n ;i++)
{
	cout<<prefix[i]<<endl;
}


}