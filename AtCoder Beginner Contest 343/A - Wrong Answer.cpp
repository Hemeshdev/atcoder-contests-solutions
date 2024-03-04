//simple simulation

#include <bits/stdc++.h>
using namespace std;

int main(){
  int a,b;
  cin>>a>>b;
  int temp = 0;
  for(int i =0;i<9;i++){
    if(i!=a+b){
      temp = i;
      break;
    }
  }
  cout<<temp<<endl;
  return 0;
}
