#include <iostream>
using namespace std;
#include <vector>

void AlternatePosNeg(int arr[], int n)
{
    vector<int> pos, neg;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] < 0)
        {
            neg.push_back(arr[i]);
        }
        else{
           pos.push_back(arr[i]);
        }
    }
    
    int i = 0 ,  j= 0 , k = 0 ;
    while( i < pos.size() && j < neg.size()){
        arr[k++] = pos[i++];
        arr[k++] = neg[j++];
    }
  
    
}

void printArray(int arr[], int n){
  for (int i = 0; i < n; i++)
  {
    cout << arr[i] << " ";
  }
  
}


int main()
{

    int arr[] = {4, 6, -5, -2, 1, -8};
    AlternatePosNeg(arr, 6);
    printArray(arr, 6);

    return 0;
}
