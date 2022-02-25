#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;cin >> n;
    int a[n];
    for(int i=0;i<n;i++) cin >> a[i];
    int i=0;
    
    while(i<n-1){
        for(int j=i+1;j<n;j++){
            if(a[i] > a[j])
            {
                swap(a[i],a[j]);
            }
        }
        cout << "Buoc " <<i+1 <<": ";
        for(int j=0;j<n;j++) cout << a[j] <<" ";
        cout << endl;
        i++;
    }
}