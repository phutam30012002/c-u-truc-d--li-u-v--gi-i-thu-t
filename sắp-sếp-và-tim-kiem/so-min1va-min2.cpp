#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n ;
        cin >> n ;
        int a[n];
        set<int> m;
       int dem=0;
        for(int i=0;i<n;i++) {
            cin >> a[i];
            m.insert(a[i]);
        }
        
        if(m.size()<2) cout<<-1 ;
        else {
           for(auto i:m){
               cout << i<< " ";
               dem++;
               if(dem==2) break;
           }
        }
        cout << endl;
    }
}