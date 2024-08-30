#include <iostream>
#include <vector>
using namespace std;

int calcSubArr(int arr[], int n , int sum){
    int curr_Sum = 0;
    int right = 0 , left = 0;
    int startInd = -1 , endInd = -1;
   while(right<n)
    {
       if(curr_Sum == sum){
           endInd = right;
       }
       else if(curr_Sum < sum) {
          curr_Sum+=arr[right++];
       }
       else{
        curr_Sum-=arr[left++];
        startInd = left;
       }
    }
    return startInd;
    
}

int main()
{                                 // sum = 1  3  6  13
    int arr[5] = {1,2,3,7,5};    //    1 2 3 7 5     1 2 3 7 5   1 2 3 7 5    1 2 3 7 5   1 2 3  7  5
    int sum = 12;                //    r               r             r              r            r
                                  //   l             l           l            l             l
 
    int ans = calcSubArr(arr,5,sum);
   cout << ans ; 

    return 0;

}