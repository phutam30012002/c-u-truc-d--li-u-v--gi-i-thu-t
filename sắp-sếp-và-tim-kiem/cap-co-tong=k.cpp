#include<bits/stdc++.h>
using namespace std;
int main(){
    int t; cin >> t;
    while(t--){
         long long n ,k; 
        cin >> n >> k;
         long long a[n];
        unordered_map<long long,long long> m;
        for( long long i=0;i<n;i++)
        {
            cin >> a[i];
            m[a[i]]++;
        }
         long long answer=0;
        for(int j=0;j<n;j++){
            if(a[j]== k-a[j]) answer +=(m[a[j]]-1);
            else answer+= m[k-a[j]];
        }
        cout << answer/2 << endl;
    }
}