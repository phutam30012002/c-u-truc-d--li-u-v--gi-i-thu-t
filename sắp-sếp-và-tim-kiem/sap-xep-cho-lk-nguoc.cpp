#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int n;cin >> n;
    int a[n],s[n][n],count=0;
    for(int i=0;i<n;i++) cin >> a[i];
    for(int i=0 ;i<n-1;i++){
        int max=1e9,ad=i;
        for(int j=i+1;j<n;j++){
            if(max>a[j]) {
                max=a[j];
                ad=j;
            }
        }
        if(a[i]>max) swap(a[i],a[ad]);
        for (int k = 0; k < n; k++)
                s[count][k] = a[k];
            count++;
    }
    for (int i = 0; i < count; i++) {
            cout << "Buoc " << count - i << ": ";
            for (int j = 0; j < n; j++)
                cout << s[count - i - 1][j] << " ";
            cout << endl;
        }
}