#include<bits/stdc++.h>
using namespace std;
int n ,ok ;
string s="";
void ktao(){
    for(int i=1;i<=n;i++)
    {
        s[i]='A';
    }
}
void sinh(){
  
    int i=n;
    while(i>=1 && s[i]=='B'){
        s[i]='A';
        i--;
    }
    if(i==0) {
        ok=0;
        // cau hinh cuoi cung
    }else {
        s[i]='B';
    }
}
int main(){
    int t;
    cin >> t;
    while(t--){
        cin >> n;
        ktao();
        ok=1;
        while(ok){
            for(int i=1;i<=n;i++){
                cout << s[i];

            }
            cout <<" ";
            sinh();
        }
        cout << endl;
}
}