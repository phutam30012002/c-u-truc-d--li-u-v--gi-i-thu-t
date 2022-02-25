#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    int a[n];
    for(int i=0;i<n;i++) cin >> a[i];
    int i=0;
    bool haveswap=false;
    while(1){
        haveswap=false;
        for(int j=0;j<n-1;j++){
            if(a[j]>a[j+1]){
               swap(a[j],a[j+1]);
               haveswap=true;
            }
        }
        if(haveswap==false) break;
        cout << "Buoc " <<i+1 <<": ";
        for(int j=0;j<n;j++) cout << a[j] <<" ";
        cout << endl;
        i++;
        
    }
}