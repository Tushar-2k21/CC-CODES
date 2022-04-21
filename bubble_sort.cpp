// BUBBLE SORTING


#include<bits/stdc++.h>
using namespace std;

int main(){
	
  int arr[]={5,3,1,5,4,2};
  int n =6;

  	// j<n-i-1 tells that last element is already sorted because in first iteration 
  //  max value reaches it true value
  for(int i = 0;i<n ;i++)
  {
     for(int j = 0 ;j<n-i-1;j++)
  	{
       if(arr[j]>arr[j+1])
       	swap(arr[j], arr[j+1]);
  	}

  }

  for(int i = 0;i<n ;i++)
  	cout<<arr[i]<<" ";


}