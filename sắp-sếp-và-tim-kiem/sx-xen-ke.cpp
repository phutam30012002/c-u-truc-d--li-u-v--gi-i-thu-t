#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;cin >> n;
        int a[n];
        for(int i=0;i<n;i++) cin >> a[i];
        sort(a,a+n);
        int d=0;
        for(int i=0;i< n/2+1;i++) {
            cout << a[n-i-1] <<" ";
            cout << a[i] <<" ";
           
        }
        cout << endl;
        
    }
}
/*
2
7
7 1 2 3 4 5 6
8
1 6 9 4 3 7 8 2
ý tưởng:
1, 
    + sắp xếp nhanh 
    + tạo 1 biến đếm và in ra theo thứ tự 
      cho đến khi biến đếm bằng 0
*/
// #include<iostream>
// #include<algorithm>
// using namespace std;

// int test, num;
// int arr[1000];
// int compare(const void* a, const void* b)
// {
//     const int* x = (int*) a;
//     const int* y = (int*) b;
//     if (*x > *y)
//         return 1;
//     else if (*x < *y)
//         return -1;
//     return 0;
// }

// void input (){
//     for(int i = 0; i < num; i++) {
//             cin >> arr[i];
//     }
// }

// void output (){
//     int count = num;
//      for(int i = 0; i < num / 2 + 1; i++) {
//             cout << arr[num - i - 1] << " " << arr[i] << " ";
//             count -= 2;
//             if(count == 0) break;
//             else if(num % 2 == 1 && count == 1) break;
//     }
// }



// int main() {
//     cin >> test;
//     while(test--) {
//         cin >> num;
//         input();
//         qsort(arr,num,sizeof(int), compare);
//         output();
//         cout << endl;
//     }
// }
