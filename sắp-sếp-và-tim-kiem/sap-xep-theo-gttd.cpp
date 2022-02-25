// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int t;
//     cin >> t;
//     while(t--){
//         int n ,x;
//         cin >> n >> x;
//         int a[n], b[n][2];
//         for(int i=0;i<n;i++){
//             cin >> a[i];
//             b[i][1]=a[i];
//             b[i][0]=abs(x-a[i]);
//         }
//         for(int i=0;i<n;i++){
//             for(int j=0;j<n;j++){
//                 if(b[i][0] > b[j][0])
//                 {
//                     swap(b[i][0] , b[j][0]);
//                     swap(b[i][1] , b[j][1]);
//                 }
//             }
//         }
//         for(int i=0;i<n;i++) cout << b[i][1]<<" ";
//         cout << endl;
//     }
// }
#include<bits/stdc++.h>
using namespace std ;
void sx(int a[],int n ,int x){
    multimap<int ,int > ml;
    multimap<int ,int > :: iterator it;
    for(int i=0 ;i<n;i++) ml.insert(make_pair(abs(x-a[i]),a[i]));
    int i=0;
    for( it = ml.begin(); it!=ml.end();it++){
        a[i++]=(*it).second;
    }
}
int main(){
    int t;cin >> t;
    while(t--){
        int n ,x;
        cin >> n >> x;
        int a[n];
        for(int i=0;i<n;i++) cin >> a[i];
        sx(a,n ,x);
        for(int i=0;i<n;i++) cout << a[i] << " ";
        cout << endl;
    }
}
#include <bits/stdc++.h>
using namespace std;
int main() {
    int t; cin >> t;
    while (t--) {    
        int n, x; cin >> n >> x;
        int a[n], b[n];
        for (int i = 0; i < n; i++) cin >> a[i];
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n - 1; j++) {
                if (abs(x - a[j]) > abs(x - a[j  + 1])) {
                    swap(a[j], a[j + 1]);
                } 
            }
        }
        for (int i = 0; i < n; i++) cout << a[i] << " ";
        cout << endl;
    }
}