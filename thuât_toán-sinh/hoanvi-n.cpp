#include<bits/stdc++.h>
using namespace std;
int n , ok ,a[1000];
void ktao(){
    for(int i=1;i <=n;i++ ){
        a[i]=i;
    }
}
void sinh(){
    int i=n-1;
    while( i>=1 && a[i]> a[i+1]) i--;
    // tim vi tri dau tien maf a[i]< a[i+1]
    if(i==0) {
        ok =0;
    }else {
        int j=n;
        while(a[i] > a[j]) j--;
        // tim vi tri dau tien maf nhor nhats lowns hown a[i]
        swap(a[i],a[j]);
        // doi cho

        // int l= i+1 ,r=n;
        // while(l<r) 
        // {
        //     swap(a[l],a[r]);
        //     l++;r--;
        // }
        reverse(a+i+1, a+n+1);
        // cais nay laf dao nguoc tuw vij tris i+1 ddens vt n
        // cai chu thick tren laf code tuj viet 
    }
}
int main(){
    cin >> n;
    ok=1;
    ktao();
    while(ok){
        for(int i=1;i<=n ;i++){
            cout << a[i] << " ";
        }
        cout << endl;
        sinh();
    }
    return 0;
}
// next_permutation(a ,a+n)
//  ham nay laf ham sinh hoans vi co san  nhung no se dua theo cau hinh cos san ow mang a rooi ddua ra caus hinh hoans vij tieeps theo 
//  ddiem yeu laf no sex k sinh ra het moij caus hinhf neeus caaus hinh ban ddau k phair laf caus hinh nhor nhat vd 123 
// de giai quyet vandde
// prev_permutation(a, a+n) ham nay sex sinh hoan vij truocs cau hinh dc khoi tao tu mang a