#include<bits/stdc++.h>
using namespace std;
int n, a[100] ,ok;
void ktao(){
    for(int i=1 ;i <=n;i++){
        a[i]=0;
    }
}
void sinh(){
    // bawts ddauaf tuwf bit cuooois cung vaf di tim bit 0 dau tien
    int i=n;
    while(i>=1 && a[i]==1){
        a[i]=0;
        i--;
    }
    if(i==0) {
        ok=0;
        // cau hinh cuoi cung
    }else {
        a[i]=1;
    }
}
int main(){
    cin >> n;
    ok=1;
    ktao();
    while(ok){
        for(int i=1;i<=n ;i++){
            cout << a[i] << " ";
        }
        cout << endl;
        sinh();
    }
    return 0;
}