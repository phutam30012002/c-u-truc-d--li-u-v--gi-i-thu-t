#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;cin >> t;
    while (t--){
        string s;
        cin >> s;
        int i=0;
        for( i=s.size()-1;i>=0;i--) if(s[i]=='1') break;
        if(i<0) i=0;
        for(int j=i;j<s.size();j++){
            if(s[j]== '1') s[j]='0';
            else s[j]='1';
        }
        cout << s << endl;
    }
}
// 010100  010011