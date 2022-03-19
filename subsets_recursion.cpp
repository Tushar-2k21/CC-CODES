#include<bits/stdc++.h>
using namespace std;
vector<vector<char>>SUBSETS;
void generate(vector<char>&subset, char num[], int k , int n)
{
	if(k==n)
	{
		SUBSETS.push_back(subset);
	    return;
	}
	else
	{

		// exluding elements//
		generate(subset, num, k+1,n);

		// including elements
		subset.push_back(num[k]);
		generate(subset, num, k+1,n);
		subset.pop_back();
	}


}



int main(){
  
  // num of elements
  int n;
  cin>>n;	

  // elements
  char num[n];

  vector<char>subset;

for(int i = 0;i< n;i++)
{
	cin>>num[i];
}

  generate(subset, num , 0 , n);
   
  for(auto group: SUBSETS)
 {
 	for(auto elements : group)
 	{
 		cout<<elements<<" ";	
 	}
 	cout<<endl;
 } 




}