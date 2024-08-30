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

// If Only single missing element are there.
int findMissingNo(int arr[] ,int len){
    // cout << len <<endl;
    int num = len + 1;
    int sum = ( num  * (num + 1)) / 2; // Sum of Natural Number 
    int s = 0;
    for (int i = 0; i < len; i++)
    {
        s+=arr[i];
    }
    return sum - s;
}

// If Missing Element is more than 1
void printMissingElements(int arr[], int N)
{
    int cnt = 0;
    int missingNum [N + 1];
    for (int i = arr[0]; i <= arr[N - 1]; i++) {
        if (arr[cnt] == i) 
            cnt++;
        else 
            cout << i << " ";
        
    }
}

int main() { 
    int arr [] = {1,4,6,7};  
     int len = sizeof(arr) / sizeof(arr[0]);
     printMissingElements(arr,len);
    return 0;
}