#include<bits/stdc++.h>
using namespace std;
int n ,ok ,a[1000],cnt;
void ktao(){
    cnt =1;
    a[1]=n;
}
void sinh(){
    int i=cnt;
    while(i>=1 && a[i]== 1) i--;
    if(i==0) {
        ok =0;
    }else {
        a[i]--;
        int d= cnt -i+1;
        cnt =i;
        int q= d/a[i];
        int r=d%a[i];
        if(q){
            for(int j=1;j<=q;j++){
                cnt++;
                a[cnt]=a[i];
            }
        }
        if(r){
            cnt++;
            a[cnt]=r;
        }
    }
}
int main(){
    cin >> n;
    ktao();
    ok=1;
    while(ok){
        for(int i=1; i<=cnt;i++){
            cout << a[i] <<" ";
        }
        cout << endl;
        sinh();
    }
    return 0;
}