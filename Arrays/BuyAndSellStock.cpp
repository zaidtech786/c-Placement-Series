#include<iostream>
using namespace std;

int BuyAndSellStock(int arr[],int n){
    int mini = arr[0]; //Itne me kharida   7 
    int profit = 0;  //initially itna profit hua 0 
    for (int i = 1; i < n; i++)
    {
        int cost = arr[i] - mini;   //  -6  counting profit matlab mini me kharida aur arr[i] me bechega to kitnaa profit hoga
        profit = max(profit,cost);   // 0  4 
        mini = min(mini,arr[i]);   // 1  1 
    }
    return profit ;
    
}
int main(){
int arr[] = {7,1,5,3,6,4};
int len = sizeof(arr) / sizeof(arr[0]);
cout << BuyAndSellStock(arr,len);

}