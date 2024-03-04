#include <bits/stdc++.h>
using namespace std;

int main(){
  
  int n;
  cin>>n;
  vector<vector<int>>temp(n,vector<int>(n,0));
  for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
      cin>>temp[i][j];
    }
  }
  
  for(int i=1;i<=n;i++){
    for(int j=1;j<=n;j++){
      if(temp[i-1][j-1]==1) cout<<j<<" ";
    }
    cout<<endl;
  }
  
  
  return 0;
}
