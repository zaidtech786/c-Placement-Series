#include<iostream>
#include<vector>
using namespace std;

// Code not working

void spiralMatrix(int arr[][3],int nRow,int nCol){
      vector<vector<int>> ans;
    int count = 0;
    int total = nRow * nCol;
    int startingRow = 0;
    int startingCol = 0;
    int endingRow = nRow - 1;
    int endingCol = nCol - 1;
   
   while (count < total)
   {
       for (int i = startingCol; count < total && i <= endingCol; i++)
       {
           cout << arr[startingRow][i] << " ";
        //    ans.push_back(arr[startingRow][i]);
           count++;
       }
     
           startingRow++;
       for (int i = startingRow; count < total && i <= endingRow; i++)
       {
           cout << arr[i][endingCol] << " ";
           count++;
       }
           endingCol--;
          

       for (int i = endingCol; count < total && i <= startingCol; i++)
       {
           cout << arr[endingRow][i] << " ";
           count++;
       }
           endingRow--;
        
       
        for (int i = endingRow;count < total && i <= startingRow; i++)
       {
           cout << arr[i][startingCol] << " ";
           count++;
       }
       startingCol++;
       
       
       
   }
   
}
int main(){
   int arr[3][3] = {1,2,3,4,5,6,7,8,9};
   spiralMatrix(arr,3,3);

}
/*
1 2 3
4 5 6
7 8 9
*/