#include <bits/stdc++.h>
using namespace std;

int main() 
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n,t;
    cin>>n>>t;
    vector<long long>temp(n,0);
    unordered_map<long long,int>mp;
    mp[0]=n;
    for(int i=0;i<t;i++){
      long long b;
      int a;
      cin>>a>>b;
      a--;
      mp[temp[a]]--;
      if(mp[temp[a]]==0) mp.erase(temp[a]);
      temp[a]+=b;
      mp[temp[a]]++;
      cout<<mp.size()<<endl;
    }
    
    
    
    return 0;
}
