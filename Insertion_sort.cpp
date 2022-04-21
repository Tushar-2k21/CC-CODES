#include<bits/stdc++.h>
using namespace std;

int main(){
	

  

    for(int i =1;i< n ;i++)
    {
    	int temp = arr[i];
    	int j = i-1;
    	while(j>=0 && arr[j]>temp)
    	{
    		arr[j+1]=arr[j];
    		j--;
    	}
    	j++;
    	arr[j]=temp;
    }


    for(int i =0;i< n ;i++)
    	cout<<arr[i]<<" ";




}