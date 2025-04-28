#include<iostream>
#include<vector>
using namespace std;

vector<int> plusOne(vector <int> arr) {
      for (int i = arr.size() - 1 ; i >=0; i--)
      {
           if(arr[i] != 9){
             arr[i]++;
             break;
           }
           arr[i] = 0;
      }

      if(arr[0] ==0){
        vector <int> res (arr.size()+ 1,0);
        res[0] = 1;
        return res;
      }

      return arr;
      
}



int main() {
    vector <int> arr = {1,2,3};  // Example array
    vector<int> res = plusOne(arr);

    // Print the result
    for (int num : res) {
        cout << num << " ";
    }

    return 0;
}
