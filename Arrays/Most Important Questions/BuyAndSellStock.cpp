#include<iostream>
using namespace std;


int BuyAndSellStock(int arr[],int n){
    int buying_price = arr[0]; //Itne me kharida   7 
    int profit = 0;  //initially itna profit hua 0 
    int max_profit = 0;
    int min_buying_price = 0;
    for (int i = 1; i < n; i++)
    {
        int cost = arr[i] - buying_price;   //  -6  counting profit matlab buying_price me kharida aur arr[i] me bechega to kitnaa profit hoga
        profit = max(profit,cost);   // 0  4 
        buying_price = min(buying_price,arr[i]);   // 1  1 
    }
    return profit ;
    
}
int main(){
int arr[] = {7,1,5,3,6,4};
int len = sizeof(arr) / sizeof(arr[0]);
cout << BuyAndSellStock(arr,len);

}