#include <iostream>
using namespace std;

// int findMissingNo(int arr[] , int n) {
//     long long sn = (n * (n + 1)) / 2;
//     long long s2n = (n * (n + 1) * (2 * n + 1)) / 6;
//     int s = 0, s2 = 0;
//     for (int i = 0; i < n; i++)
//     {
//         s+= arr[i];
//         s2+= (long long)arr[i] * (long long)arr[i];
//     }
//     long long val1 = s - sn;
//     long long val2 = s2 - s2n;
//     val2 = val2/val1;
//     long long x = (val1 + val2) / 2;   
//     long long y = x - val1;
//    return (int)y;
  
// }

int findMissingNo(int arr[] , int n,int len){
    int sum = (n * (n + 1)) / 2; // Sum of Natural Number 
    int s = 0;
    for (int i = 0; i < len; i++)
    {
        s+=arr[i];
    }
    return sum - s;
}
int main() { 
    int arr [] = {1,2,4,5};  
    int n = 5;   // n should be size of array + 1 
    int len = sizeof(arr) / sizeof(arr[0]);
    cout << findMissingNo(arr,n,len);
    return 0;
}