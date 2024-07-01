#include<iostream>
#include<vector>
using namespace std;


// void rotate90(int arr[][3],int nRow,int nCol){
//     for (int col = 0; col < nCol; col++)
//     {
//          for (int row = nRow - 1; row >= 0; row--)
//             {
//                cout << arr[row][col] << ' ';
//             }
//     cout << endl;
//     }
// }

 vector<int> rotate90(int arr[3][3],int nRow,int nCol){
   // Take Transpose;
  for (int i = 0; i < nRow; i++)
  {
     for (int j = 0; j < i; j++)
     {
       
        swap(arr[i][j],arr[j][i]);
     }
     cout << endl;
  }

 //   Rotate
//  for (int i = nRow - 1; i >=0; i--)
//  {
//      for (int j = 0; j < nCol; j++)
//      {
//          cout << arr[i][j] << " ";
//      }
//      cout <<endl;
     
//  }
 

  

    
 } 
int main(){
int arr[3][3] = {1,2,3,4,5,6,7,8,9};
 rotate90(arr,3,3);

  

}