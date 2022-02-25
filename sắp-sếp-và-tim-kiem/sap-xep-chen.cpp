#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    int a[n];
    for(int i=0;i<n;i++) cin >> a[i];
    int i=0;
    while(i<n){
        cout << "Buoc " <<i <<": ";
        sort(a,a+i+1);
        for(int j=0;j<=i;j++) cout << a[j] <<" ";
        cout << endl;
        i++;
    }
}