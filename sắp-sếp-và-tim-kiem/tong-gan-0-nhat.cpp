// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int t;cin >> t;
//     while(t--){
//         int n; cin >> n;
//         int a[n];
//         for(int i=0;i<n;i++) cin >> a[i];
//         sort(a,a+n);
//         int minsum=INT_MAX;
//         int e1=0,e2=n-1 ,mine1=0,mine2=n-1;
//         while(e1<e2){
//              int sum=a[e1]+a[e2];
//             if(abs(sum)< abs(minsum)){
//                 minsum=sum;
//                 mine1=e1;
//                 mine2=e2;
//             }
//             if(sum < 0) e1++;
//             else e2--;

//         }
//         cout << a[mine1]+a[mine2] << endl;
//     }
// }
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; ++i) cin >> a[i];
        int min = a[0] + a[1];
        for (int i = 0; i < n; ++i) {
            for (int j = i + 1; j < n; ++j) {
                if (abs(a[i] + a[j]) < abs(min)) min = a[i] + a[j];
            }
        }
        cout << min << endl;
    }
}