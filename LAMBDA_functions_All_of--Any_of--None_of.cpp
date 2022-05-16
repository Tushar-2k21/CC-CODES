#include<bits/stdc++.h>
using namespace std;

int main(){
	//LAMDA FUNCTION 

auto sum = [](int a , int b){return (a+b);};
// cout<<sum(2,5)<<endl;

vector<int>v1={5,6,7,-1,3,6,-4,-1,5,8};
auto sum1 = [](vector<int>v1){int temp =1; return (temp+v1[0]);};
cout<<sum1(v1)<<endl;


// These return a boolean value 1 and 0;
   //ANY OF 
vector<int>v={5,6,7,-1,3,6,-4,-1,5,8};
int ans = any_of(v.begin(), v.end(), [](int a){return a<0;});
cout<<ans<<endl;


// ALL OF 
int ans1 = all_of(v.begin(), v.end(), [](int a){return a>0;});
cout<<ans1<<endl;

// NONE OF 

int ans2 = none_of(v.begin(), v.end(), [](int a){return a>100;});
cout<<ans2<<endl;

}