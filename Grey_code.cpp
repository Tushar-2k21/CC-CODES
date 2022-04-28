#include<bits/stdc++.h>
using namespace std;

vector<string> grey_code(int n)
{
    if(n==1)
    {
        return{"0","1"};
    }
    vector<string>ans;
    vector<string>temp = grey_code(n-1);
    for(int i =0;i<temp.size();i++)
    {
        ans.push_back("a"+temp[i]);
    }
    for(int i = temp.size()-1;i>=0;i--)
    {
      ans.push_back("b"+temp[i]);
    }
    return ans;
    

}


int main(){
    int n;
    cin>>n;

vector<string>code;
code=grey_code(n);
for(int i =0;i<(1<<n);i++)
{
    cout<<code[i]<<endl;
}



}