#include<iostream>
#include<vector>
using namespace std;

vector <int> leaders(vector <int> arr){
    int n = arr.size(),maxi = 0;
    vector <int> ans;
    for (int i = n - 1; i >= 0; i--){
        if(arr[i] > maxi)   ans.push_back(arr[i]);
        maxi = max(maxi,arr[i]);
    }
    return ans;

   
}
int main(){
vector <int> arr = {10,22,12,3,0,6};
vector <int> res = leaders(arr);

for(auto i : res){
 cout << i << " ";
}

}