#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;cin >> n;
    int a[n];
    for(int i=0;i<n;i++) cin >> a[i];
    int i=n-1;
    sort(a,a+n);
    while(i>0){
        for(int j=i-1;j>=0;j--){
            if(a[i] < a[j])
            {
                swap(a[i],a[j]);
            }
        }
        cout << "Buoc " <<i <<": ";
        for(int j=0;j<n;j++) cout << a[j] <<" ";
        cout << endl;
        i--;
    }
}