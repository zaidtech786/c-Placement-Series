#include<iostream>
using namespace std;

void wavePrint(int arr[][4],int nrow,int ncol){
     for (int col = 0; col < ncol; col++)
     {
         if(col &1){
            // odd Index -> bottom to top
            for (int row = nrow - 1; row >= 0; row--)
            {
               cout << arr[row][col] << ' ';
            }
            
         }
         else{
            // Even Index-> top to bottom
            for (int row = 0; row < nrow; row++)
            {
               cout << arr[row][col] << " ";
            }
         }
         cout << endl;
     }
     
}
int main(){
  int arr[3][4] = {1,2,3,4,5,6,7,8,9,10,11,12};
  wavePrint(arr,3,4);
  /* 1  2  3  4
     5  6  7  8
     9 10 11 12
  */
}