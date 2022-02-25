#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;cin >> t;
    while(t--){
        int n ,k;
        cin >> n >> k;
        int a[k+1],b[k+1];
        for(int i=1;i<=k;i++){
            cin >> a[i];
            b[i]=a[i];
        }
        int dem =0;

            int i=k;
            while(i>=1 && a[i]==n-k+i) i--;
            if(i==0){
                dem==k;
            }else{
                a[i]++;
                for(int j=i+1;j<=k;j++){
                    a[j]=a[j-1]+1;
                }
            }
            int sum=0;
            for(int i=1;i<=k;i++){
                for(int j=1;j<=k;j++){
                    if(a[i]==b[j]) sum++;
                }
            }
        if(sum!=k) dem=k-sum;
        else dem=k;
        cout << dem << endl;
    }
}
// 1 3 5
// 1 4 5