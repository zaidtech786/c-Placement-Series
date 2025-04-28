#include<iostream>
#include<unordered_set>
using namespace std;

bool containDuplicate(int arr[], int n){
     unordered_set<int> seen;
    for (int i = 0; i < n; i++)
    {
        if(seen.find(arr[i]) != seen.end()){
            return true;
        }
        seen.insert(arr[i]);
    }
    return false;
}
int main(){
int arr[] = {1,2,3};
int size = sizeof(arr) / sizeof(arr[0]);
cout << containDuplicate(arr,size);
}