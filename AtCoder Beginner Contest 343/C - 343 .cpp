#include <bits/stdc++.h>
using namespace std;
using ll=long long;

bool ispal(ll n){
  string temp = to_string(n);
  string temp2 = temp;
  reverse(temp2.begin(),temp2.end());
  return temp==temp2;
}

int main(){
  ll n;
  cin>>n;
  ll ans=0;
  for(ll i=1;i*i*i<n;i++){
    if(ispal(i*i*i)) ans =i*i*i;
  }
  cout<<ans<<endl;
  
  
  return 0;
}
