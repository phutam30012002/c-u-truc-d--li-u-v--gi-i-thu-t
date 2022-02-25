#include<bits/stdc++.h>
using namespace std;
int main(){
    int t; cin >> t;
    while(t--){

    int n;cin >> n;
    int a[n];
    multiset<int> m;
for(int i=0;i<n;i++) {
    cin >> a[i];
    m.insert(a[i]);
}
for(auto x:m) cout << x << " ";
cout << endl;
    }

}