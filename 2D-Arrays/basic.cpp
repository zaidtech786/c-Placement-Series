#include<iostream>
using namespace std;

int main(){
int m , n;
cout << "Enter the rows of an array : "<<endl;
cin >> m;
cout << "Enter the cols of an array : "<<endl;
cin >> n;
int arr [m] [n];
cout << "Enter the elements of an arrays : ";
for (int row = 0; row < m; row++)
{
    for (int col = 0; col < n; col++)
    {
        cin >> arr[row][col];
    }
}

cout << "Printing Arrays : "<<endl;
for (int i = 0; i < m; i++)
{
   for (int j = 0; j < n; j++)
   {
      cout << arr[i][j] << " ";
   }
   cout << endl;
   
}


}