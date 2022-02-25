#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;cin >> t;
    while(t--){
        int n ,k; cin >> n >> k;
        int a[n];
        unordered_map<int ,int> m;
        unordered_map<int ,int> ::iterator it;
        for(int i=0;i<n;i++){
            cin >> a[i];
            m.insert(make_pair(a[i],i+1));
        }
      it=m.find(k);
      cout << it->second << endl;
    }
}
