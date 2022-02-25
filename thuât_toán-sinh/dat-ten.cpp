#include<bits/stdc++.h>
using namespace std;
int n ,k ,ok;
string s="";
void ktao(){
    for(int i=0;i<k;i++) s+=char('A'+i);
}
void sinh(){
    int i=k-1;
   while( i>=0 && s[i]== char(n-k+i+ 'A')) i--;
   if(i<0) {
       ok=0;
   }else {
       s[i]++;
       for(int j=i+1;j<k ;j++){
           s[j]=char(s[j-1]+1);
       }
   }
}
int main(){
    int t;cin >> t;
    while(t--){
        s="";
        cin >> n >> k;
        ktao();
        ok=1;
        while(ok){
        cout << s << endl;
        sinh();
        }
    }
}