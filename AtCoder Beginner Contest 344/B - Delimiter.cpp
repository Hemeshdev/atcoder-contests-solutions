#include <bits/stdc++.h>
using namespace std;

int main() 
{
    vector<int>temp;
    while(true){
      int t=-1;
      cin>>t;
      if(t==-1) break;
      else{
        temp.push_back(t);
      }
    }
    reverse(temp.begin(),temp.end());
    for(auto i:temp){
      cout<<i<<endl;
    }
    
}
