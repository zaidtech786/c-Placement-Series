#include<iostream>
#include <vector>
using namespace std;

vector <int> findMissingRepeating(vector <int> arr){
    int n = arr.size();
    long long SN = (n * (n + 1)) / 2;  // 1 to N natural Number Sum
    long long S2n = (n * (n + 1) * (2 * n + 1)) / 6;  //1 to N natural Number Square
    long long s = 0, s2 = 0;
    for (int i = 0; i < arr.size(); i++)
    {
        s+=arr[i];  
        s2+=(long long)arr[i] * (long long)arr[i];
    }
    long long val1 = s - SN;
    long long val2 = s2 - S2n;
    val2 = val2 / val1;
    long long x = (val1 + val2) / 2;   // Repeating number
    long long y = x - val1; // Missing number
    return {(int)x,(int)y};
}

int main(){
//    int arr[] = {3, 4, -1, 1};
   vector <int> arr = {1,2,3,4,1};
    vector<int> result = findMissingRepeating(arr);

    // Print the result
    cout << "Repeating number: " << result[0] << endl;
    cout << "Missing number: " << result[1] << endl;

}