#include <iostream>
#include <math.h>
using namespace std;

int calcMaxSubArr(int arr[] , int n){
    int sum = 0, maxi = arr[0];
    int start = -1 , end = -1,ans;
    for (int  i = 0; i < n; i++)
    {
        if(sum == 0){
            start = i;
        }
        sum+=arr[i];
        maxi = max(maxi,sum);
        
        if(maxi > sum){
            end = i;
        }

        if(sum < 0)
         sum=0;

        
    }
 
    cout << start << "   " << end <<endl; 
    return maxi;
    

}
int main()
{
    int arr[] = {-2,1,-3,4,-1,2,1,-5,4};
    cout << calcMaxSubArr(arr,9);
    return 0;
}