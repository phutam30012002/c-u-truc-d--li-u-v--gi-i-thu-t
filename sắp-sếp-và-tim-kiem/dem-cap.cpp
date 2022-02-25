// #include<iostream>
// #include<algorithm>
// #include<math.h>
// using namespace std;
// int  countPairsBruteForce(int X[], int Y[],
//                                int m, int n)
// {
//     int  ans = 0;
 
//     for (int i = 0; i < m; i++)
//         for (int j = 0; j < n; j++)
//             if (pow(X[i], Y[j]) > pow(Y[j], X[i]))
//                 ans++;
//     return ans;
// }
// int main(){
//     int t;cin >> t;
//     while(t--){
//         int n ,m;
//         cin >> n >> m;
//         int a[n] ,b[m];
//         for(int i=0;i<n;i++) cin >> a[i];
//         for(int i=0;i<m;i++) cin >> b[i];
//        cout << countPairsBruteForce(a,b,n,m);
//     }
// }


#include<iostream>
#include<algorithm>
using namespace std;
int count(int x ,int y[],int n ,int noofy[]){
    if(x==0) return 0;
    if(x==1) return noofy[0];
    int* idx= upper_bound(y,y+n,x);
    int ans=(y+n)-idx;
    ans+=(noofy[0]+noofy[1]);
    if(x==2) ans-=(noofy[3]+noofy[4]);
    if(x==3)  ans+=noofy[2];
    return ans;
}
int countpairs(int x[],int y[],int m ,int n){
    int noofy[5]={0};
    for (int i = 0; i < n; i++)
        if (y[i] < 5)
            noofy[y[i]]++;
        sort(y,y+n);
        int total_pairs = 0;
        for (int i = 0; i < m; i++)
        total_pairs += count(x[i], y, n, noofy);
 
    return total_pairs;
}
int main(){
    int t;cin >> t;
    while(t--){
        int n ,m;
        cin >> n >> m;
        int a[n] ,b[m];
        for(int i=0;i<n;i++) cin >> a[i];
        for(int i=0;i<m;i++) cin >> b[i];
        cout << countpairs(a,b,n,m) << endl;
}
}