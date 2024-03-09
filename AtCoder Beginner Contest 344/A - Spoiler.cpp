#include <bits/stdc++.h>
using namespace std;

int main() 
{
    string temp;
    cin>>temp;
    string ans ="";
    for(auto i:temp){
      if(i=='|') break;
      else{
        ans+=i;
      }
    }
    string temp1 ="";
    for(int i=temp.size()-1;i>=0;i--){
      if(temp[i]=='|') break;
      else{
        temp1+=temp[i];
      }
    }
    reverse(temp1.begin(),temp1.end());
    ans+=temp1;
    cout<<ans<<endl;
}
