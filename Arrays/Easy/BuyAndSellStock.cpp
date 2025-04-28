#include <iostream>
#include <algorithm> // For max() and min() functions
using namespace std;

int BuyAndSellStock(int arr[], int n) {
    // int buying_price = arr[0]; // Initially, we buy at the first price (7)
    // int profit = 0;  // Start with 0 profit
    // int selling_price = arr[0]; // Initialize selling price
    // // int num;

    // for (int i = 1; i < n; i++) {
    //     int num = arr[i];
    //     int cost = num - buying_price;  // Calculate potential profit (selling - buying)
        
    //     if (cost > profit) { 
    //         profit = cost;         // Update profit if current profit is larger
    //         selling_price = num;   // Track the price at which the stock is sold
    //     }

    //     buying_price = min(buying_price, num); // Update the buying price if a lower one is found
    // }

    // // Print results: buying price, selling price, and profit
    // cout << "Profit: " << profit << "\n";
    // cout << "Buying Price: " << buying_price << "\n";
    // cout << "Selling Price: " << selling_price << "\n";
    
    // return profit;

    int buying_price = arr[0];
    int profit = 0;
    int selling_price = arr[0];

    for (int i = 1; i < n; i++)
    {
        int num = arr[i];
        int cost = num - buying_price;
        if(cost > profit){
            profit = cost;
            selling_price = num;
        }
        buying_price = min(buying_price, num);
    }
     cout << "Profit: " << profit << "\n";
    cout << "Buying Price: " << buying_price << "\n";
    cout << "Selling Price: " << selling_price << "\n";
    
}

int main() {
    int arr[] = {7, 1, 5, 3, 6, 4};
    int len = sizeof(arr) / sizeof(arr[0]);

    BuyAndSellStock(arr, len);

    return 0;
}
