#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;cin >> t;
    while(t--){
        int n;
        cin >> n;
        int a[n] ,s[n][n],count=0;
        for(int i=0;i<n;i++) cin >> a[i];
        int i=0;
        bool haveswap=false;
        while(1){
            haveswap=false;
            for(int j=0;j<n-1;j++) {
                if(a[j] > a[j+1]){
                    swap(a[j],a[j+1]);
                    haveswap=true;
                }
            }
            if(haveswap==false) break;
            for(int j=0;j<n;j++) s[count][j]=a[j];
            count++;
        }
        for(int i=0;i<count ;i++){
            cout <<"Buoc " << count-i<<": ";
            for(int j=0;j<n;j++) cout << s[count-i-1][j] <<" ";
            cout << endl;
        }
    }
}