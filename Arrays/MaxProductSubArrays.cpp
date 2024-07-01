#include<iostream>
#include<limits.h>
using namespace std;

int maxProduct(int arr[],int n){
    int prefix = 1,suffix = 1,ans = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        if(prefix == 0) prefix = 1;
        if(suffix == 0) prefix = 1;
        prefix*=arr[i];
        suffix*=arr[n - i - 1];
        ans = max(ans,max(prefix,suffix));
    }
    return ans;
    
}
int main(){
int arr[] = {2,3,-2,4};
int len = sizeof(arr)/sizeof(arr[0]);
cout << maxProduct(arr,len);

}