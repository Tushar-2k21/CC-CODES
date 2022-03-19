#include<bits/stdc++.h>
using namespace std;
vector<vector<int>>ans;
void permute(int idx , vector<int>&v)
{
   if(idx==v.size())
   {
      ans.push_back(v);
      return;
   }


   for(int i= idx;i<v.size();i++)
   {
      swap(v[i], v[idx]);
      permute(idx+1, v);
      swap(v[i], v[idx]);
   }
   return;
}
int main(){
    
  int t;cin>>t;
  while(t--)
  {    int n;cin>>n;
      vector<int>v(n);
      for(auto &i : v)
      {
        cin>>i;
      }
      permute(0, v);
// 1 2 4 
// 1 4 2 
// 4 1 2 
// 4 2 1 
// 1 2 4 /
// 1 4 2 

      for(auto k : ans){
        for(auto j : k)
        {
            cout<<j<<" ";
        }
        cout<<endl;}
  }
     



}