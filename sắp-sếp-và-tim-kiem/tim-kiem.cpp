#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;cin >> t;
    while(t--){
        int n,k ;cin >> n >> k;
        int a[n];
        set<int> m;
        for(int i=0;i<n;i++) {
            cin >> a[i];
            m.insert(a[i]);
        }
        for(int i=0;i<n;i++) {
            if(m.count(k)!=0) {
                cout << 1;
                break;
            }
            else {
                cout <<-1;
                break;
            }
        }
        cout << endl;
    }
}