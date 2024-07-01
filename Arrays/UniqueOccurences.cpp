#include<iostream>
#include<unordered_map>
#include<unordered_set>
#include<vector>
using namespace std;

bool uniqueOcc(vector <int> &arr , int n){
    unordered_map<int,int> freq;
    for(auto x : arr){
        freq[x]++;
    }
    unordered_set <int> s;
    for(auto x :freq  ){
    //   cout << s.first << " -> "<< s.second << " ";
      s.insert(x.second);
    }
    return freq.size() == s.size();

}
int main(){
    // int arr[] = {1,2,2,1,1,3};
    vector <int> arr = {1,2,2,1,1,3};
    bool isUniqueOcc = uniqueOcc(arr,6);
    cout <<  isUniqueOcc;
       


}
