#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> temp1;
    vector<int> temp2;
    vector<int> temp3;

    int a;
    cin >> a;
    for (int i = 0; i < a; i++) {
        int temp;
        cin >> temp;
        temp1.push_back(temp);
    }

    int b;
    cin >> b;
    for (int i = 0; i < b; i++) {
        int temp;
        cin >> temp;
        temp2.push_back(temp);
    }

    int c;
    cin >> c;
    for (int i = 0; i < c; i++) {
        int temp;
        cin >> temp;
        temp3.push_back(temp);
    }
    unordered_set<int>s;
    for (int j = 0; j < a; j++) {
            for (int k = 0; k < b; k++) {
                for (int l = 0; l < c; l++) {
                    s.insert(temp1[j]+temp2[k]+temp3[l]);
                }
            }
        }
    int t;
    cin >> t;
    for (int i = 0; i < t; i++) {
        int temp;
        cin >> temp;
        if(s.find(temp)!=s.end()) cout<<"Yes"<<endl;
        else cout<<"No"<<endl;
        
    }

    return 0;
}
