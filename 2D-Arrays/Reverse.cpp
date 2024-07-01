#include<iostream>
using namespace std;

void reverse(int arr[][3],int nRow,int nCol){
   for (int row = nRow - 1 ; row >=0 ; row--)
{
    for (int col = 0; col < nCol; col++)
    {
      cout << arr[row][col] << " ";
    }
    cout <<endl;
}

}

int main(){
    int arr[3][3] = {1,2,3,4,5,6,7,8,9};         
    reverse(arr,3,3);
   
//1 2 3     7 8 9
//4 5 6  -> 4 5 6
//7 8 9     1 2 3


}