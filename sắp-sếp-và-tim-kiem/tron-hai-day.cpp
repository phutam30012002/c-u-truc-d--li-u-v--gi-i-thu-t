#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n ,k;
        cin >> n >> k;
        long long  a[n],b[k];
        multiset<int> x;
        
        for(int i=0;i<n;i++) 
        {
            cin >> a[i];
            x.insert(a[i]);
        }
          for(int i=0;i<k;i++){
               cin >> b[i];
               x.insert(b[i]);
          }
          for(auto m:x) cout << m <<" ";
          cout << endl;
    }
}
