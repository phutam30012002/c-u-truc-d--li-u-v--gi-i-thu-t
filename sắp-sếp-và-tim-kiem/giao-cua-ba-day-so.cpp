// #include<bits/stdc++.h>
// using namespace std;
// void input(long long a[] ,int n){
//     for(int i=0;i<n;i++) cin >> a[i];
// }
// long long a[1000005], b[1000005], c[1000005];
// int main(){
//     int t;cin >> t;
//     while(t--){
//         int n1,n2,n3;
//         cin >> n1>> n2 >> n3;
        
//         multiset<long long> A;
//         multiset<long long > AB;
//         input(a,n1);
//         for(int i=0;i<n2 ;i++) 
//         {
//             cin >> b[i];
//             A.insert(b[i]);
//         }
//         input(c,n3);
//         for(int i=0;i<n1;i++)
//         {
//             if(A.count(a[i])!=0){
//                 AB.insert(a[i]);
//                 A.erase(A.find(a[i]));
//                 a[i]=-1;
//             }
//         }
//         multiset<long long> ABC;
//         for(int i=0;i<n3;i++){
//             if(AB.count(c[i])!=0){
//                 ABC.insert(c[i]);
//                 AB.erase(A.find(c[i]));
//                 c[i]=-1;
//             }
//         }
//         if(ABC.size()==0) cout <<-1 ;
//         else {
//             for(auto x:ABC) cout << x <<" ";
//         }
//         cout << endl;
//     }
// }
#include <bits/stdc++.h>
using namespace std;
long long a[1000005], b[1000005], c[1000005];
int main() {
    int t; cin >> t;
    while (t--) {
        int n, m, p, ok = 0; cin >> n >> m >> p;
        for (int i = 0; i < n; i++) cin >> a[i];
        for (int i = 0; i < m; i++) cin >> b[i];
        for (int i = 0; i < p; i++) cin >> c[i];
        int i = 0, j = 0, k = 0;
        while (i <= n && j <= m && k <= p) {
            if (a[i] == b[j] && b[j] == c[k]) {
                cout << a[i] << " ";
                ok = 1;
                i++, j++, k++;
            } else if (a[i] < b[j])i++;
			else if (b[j] < c[k]) j++;
			else k++;
        }
        if (ok == 0) cout << "-1";
        cout << endl;
    }
}