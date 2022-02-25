#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;cin >> t;
    while(t--){
        int n,m;
        cin >> n >> m;
        int a[n],b[m];
        set<int> h;
        set<int> g;
        for(int i=0 ;i<n;i++){
            cin >> a[i];
            h.insert(a[i]);
            g.insert(a[i]);
        }
        for(int i=0 ;i<m;i++){
            cin >> b[i];
            h.insert(b[i]);
        }
        set<int> gh;
        for(int i=0;i<m;i++){
            if(g.count(b[i])){
                gh.insert(b[i]);
            }
        }
        for(auto x:h) cout << x <<" ";
        cout << endl;
        for(auto y:gh) cout << y <<" ";
        cout << endl;
    }
}