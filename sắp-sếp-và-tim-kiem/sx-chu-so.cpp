#include<bits/stdc++.h>
using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        int n;
        cin >> n;
        long long a[n];
        set<int> ab;
        for(int i=0;i<n;i++){
             cin >> a[i];
             while(a[i]>0){
                 ab.insert(a[i]%10);
                 a[i]/=10;
             }
        }
        for(auto x:ab) cout << x <<" ";
        cout << endl;
    }
}
// 2
// 3
// 131 11 48
// 1 3 4 8 
// 4
// 111 222 333 446
// 1 2 3 4 6 