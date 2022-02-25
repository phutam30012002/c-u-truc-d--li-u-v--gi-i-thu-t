#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;cin >> n;
    int a[n],s[n][n],count=0;
    for(int i=0;i<n;i++) cin >> a[i];
    for(int i=0;i<n;i++){
       sort(a,a+i+1);
       for(int j=0;j<=i;j++) s[count][j]=a[j];
       count++;
    }
    for(int i=0;i<count;i++){
        cout << "Buoc " <<count-i -1<< ": ";
        for(int j=0;j<n-i;j++) cout << s[count-i-1][j] <<" ";
        cout << endl;
    }
}