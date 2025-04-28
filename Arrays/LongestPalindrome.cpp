#include<iostream>
using namespace std;

bool  isPalindrome(int n){
    int temp = n;
    int rev = 0;
    while (temp!=0)
    {
        int digit = temp % 10 ;
         rev = rev * 10 + digit;
        temp /= 10;
    }
    return rev == n;
    
}

int getLength(int n){
    int len = 0;
    while (n!=0)
    {
         len++;
         n/=10;
        /* code */
    }
    return len;
}
int main(){
int arr[] = {111,1234,1425,121,10101};
int size = sizeof(arr) / sizeof(arr[0]);
int maxLen = 0;
int ans = 0;
for (int i = 0; i < size; i++)
{
    if(isPalindrome(arr[i])){
        int len = getLength(arr[i]);
        if(len > maxLen){
            maxLen = len;
            ans = arr[i];
        }
    }
}

cout << "Maximum Length is " << maxLen << "And Palindromic Number is " << ans;

}