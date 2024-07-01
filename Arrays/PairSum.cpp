#include <iostream>
#include <map>
using namespace std;
#include <vector>

// Two Pointer Approach only work when array is sorted, here we use Two Pointer Approach
map<int,int> pairSum(int arr[],int n , int target){
 	int i = 0, j = n - 1, sum = 0, ans = 0;
	map <int,int> pairs;
	while(i<j){
		sum = arr[i] + arr[j];
		if(sum == target) {
			pairs.insert({arr[i],arr[j]});
			ans++;
			i++;
			j--;
		}
		else if(sum > target){
		  j--;
		}
		else{
		  i++;
		}
	}
	return pairs;
   
} 
int main(){
   int k = 8;
   int arr[]={1,2,3,4,5,6,7};   //Make sure the array is sorted 
  map<int,int> pair =  pairSum(arr,7,k);
  for(auto i : pair)
     cout << i.first << "," << i.second <<endl;
   return 0;
}