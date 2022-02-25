#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    int a[n];
    for(int i=0;i<n;i++) cin >> a[i];
    int i=0;
    while(i+1<n){
        int max=a[i];
        int ad;
        for(int j=i+1;j<n;j++){
            if(max > a[j])
            {
                max=a[j];
                ad=j;
            }
        }
        swap(a[i],a[ad]);
        cout << "Buoc " <<i+1 <<": ";
        for(int j=0;j<n;j++) cout << a[j] <<" ";
        cout << endl;
        i++;
    }
}