#include <iostream>
#include <vector>
using namespace std;


// If Only single missing element are there.
int findMissingNo( vector <int> arr){
   int num = arr.size() + 1;
   int sumOfNaturalNum = num * (num + 1) / 2;
   int sum = 0;
   for (int i = 0; i < arr.size(); i++)
   {
       sum +=arr[i];
   }
   return sumOfNaturalNum - sum;  
}

// If Missing Element is more than 1
int printMissingElements(int arr[], int N)
{
    int cnt = 0;
    vector<int> missingNo;
    for (int i = arr[0]; i <= arr[N - 1]; i++) {
        if (arr[cnt] == i)
            cnt++;
        else 
        return i;    // this will return 1st missing number;
            missingNo.push_back(i);
            // cout << i << " ";
    }

// Return Minimum Missing number
// int min = 100;
//     for(auto i : missingNo){
//         if(i < min)
//           min = i;
//     }
//     return min;
return missingNo[0];

}


int main() { 
    vector <int> arr = {1,2,4,5,6,7};  
   cout <<  findMissingNo(arr) <<endl;
//    cout << printMissingElements(arr,len);
    return 0;
}