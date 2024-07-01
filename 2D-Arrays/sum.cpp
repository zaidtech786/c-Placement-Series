#include<iostream>
using namespace std;


// Each row sum
void rowSum(int arr[][3],int m,int n){
    for (int i = 0; i < m; i++)
    {
    int sum = 0;
       for (int j = 0; j < n; j++)
       {
           sum+=arr[i][j];
       }
       cout << "Sum of row " << i <<" is " <<sum <<endl;
    }
}

// Each Column sum
void colSum(int arr[][3],int m,int n){
    for (int col = 0; col < m; col++)
    {
    int sum = 0;
       for (int row = 0; row < n; row++)
       {
           sum+=arr[row][col];
       }
       cout << sum << " " <<endl;
    }
}


int main(){
int arr [3] [3] = {1,2,3,4,5,6,7,8,9};
rowSum(arr,3,3);
colSum(arr,3,3);

}