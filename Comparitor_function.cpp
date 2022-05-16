// -----------------COMPARITOR FUNCTION-------------------


#include<bits/stdc++.h>
using namespace std;
bool comp(pair<int,int> a, pair<int,int>b)
{
     // True means it should be present before 
	// if (a is greater than b ) then a should be present before b == return true;
	if(a.first>b.first)return a.first>b.first; 
    else if(a.first==b.first) return a.second<b.second;
    else return false;
}

int main(){
	int n;
	cin>>n;
vector<pair<int,int>>v;
for(int i =0;i<n;i++)
{
	int x, y;
	cin>>x>>y;
	v.push_back({x,y});
}
sort(v.begin(), v.end() , comp);

for(auto i : v)
	cout<<i.first<<" "<<i.second<<endl;





}