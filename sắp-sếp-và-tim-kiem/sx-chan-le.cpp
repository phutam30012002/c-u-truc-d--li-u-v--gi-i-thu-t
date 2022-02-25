#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;cin >> n;
    long long a[n],b[n],c[n];
    int x=0,y=0;
    for(int i=0;i<n;i++) {
        cin >> a[i];
        if((i+1)%2==0){
            c[x++]=a[i];
        }else b[y++]=a[i];
    }
    sort(b,b+y);
    sort(c,c+x,greater<int>());
    for(int i=0;i<n/2;i++){
        cout << b[i] << " " << c[i] <<" ";
    }
    if(n%2!=0) cout << b[y-1];
}