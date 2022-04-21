#include<bits/stdc++.h>
using namespace std;

int main(){
	
	
  int arr[]={5,3,1,5,4,2};
  int n =6;
  int loc = 0;

 // two pointer approach to place min element at jth in its right ith  position 
  for(int i = 0 ;i< n ;i++)
  {
  	  int m = INT_MAX;
  	  for(int j = i ;j<n;j++)
  	  {
  	  	if(arr[j]<m)
  	  	{
  	  		m = arr[j];
  	  		loc = j;
  	  	}
  	  }
  	  swap(arr[i], arr[loc]);
  }



   for(int i = 0;i< n ;i++)
  {
  	cout<<arr[i]<<" ";
  }


}