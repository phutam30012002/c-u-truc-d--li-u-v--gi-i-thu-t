#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;cin >> t;
    while(t--){
        int n;cin >> n;
        int a[n];
        set<int> m;
        for(int i=0;i<n;i++) {
            cin >> a[i];
            m.insert(a[i]);
        }
        
        int dem=0;
        if(*m.rbegin() - *m.begin()+1== m.size() ) dem=0;
        else {
            dem=*m.rbegin() - *m.begin()+1-m.size();
        }
        cout << dem << endl;
       
    }
}