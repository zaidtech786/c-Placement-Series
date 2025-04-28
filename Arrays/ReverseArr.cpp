#include <iostream>
#include <map>
using namespace std;

void reverseArr(int arr[],int n){
    int left = 0 , right = n - 1;
    while(left < right){
      swap(arr[left++],arr[right--]);
    }
} 

int findMin (int arr[],int n){
   int min = 100;
   for (int i = 0; i < n; i++)
   {
       if(arr[i] < min ){
         min = arr[i];
       }
   }
   return min;
}

void printArray(int arr[], int n){
 for (int i = 0; i < n; i++)
 {
    cout << arr[i] << " ";
 } 
}

void countFrequency(int arr[],int n){
int maxElem = 0;
for (int i = 0; i < n; i++)
{
    if(arr[i] > maxElem){
        maxElem = arr[i];
    }
}

int freq[maxElem + 1]  = {0}; 
   for (int i = 0; i < maxElem; i++)
   {
        freq[arr[i]]++;
   }
   
for(int i = 1 ; i < maxElem; i++){
   cout << i << "->" << freq[i] << " " ;
}
}

void fintRepeatingElement(int arr[],int n){
    for (int i = 0; i < n; i++)
    {
        for (int j = 1; j < n; j++)
        {
            if(arr[i] == arr[j]){
               cout << "Repeating element " <<arr[i];
               return;
            }
        }
        
    }
    
}

int findFactorial(int n){
   int fact = 1;
   for (int i = 1; i <= n; i++)
   {
      fact *=i;
   }
   return fact;
}
int findFactorialOfLargestElements(int arr[],int n){
   int maxi = 0;
   for (int i = 0; i < n; i++)
   {
      if(arr[i] > maxi){
         maxi = arr[i];
      }
   }
   int factorialNumber = findFactorial(maxi);
   return factorialNumber;
}

void alternatitvePosNeg(int arr[],int n){
   for (int i = 0; i < n; i++)
   {
      int temp = arr[i];
      arr[i] = arr[i + 1];
      arr[i + 1] = arr[temp];
   }
   for (int i = 0; i < n; i++)
 {
    cout << arr[i] << " ";
 } 
}


int main(){
   int arr[5]={1,2,3,1,5};
   reverseArr(arr,5);
   printArray(arr,5);
   cout << endl ;
   cout << findMin(arr,5);
      cout << endl ;
  
  countFrequency(arr,5);
   cout << endl ;
   fintRepeatingElement(arr,5);
   cout << endl ;
   cout << "Factorial of largest element: " << findFactorialOfLargestElements(arr,5);
   cout << endl ;
   alternatitvePosNeg(arr,5);
      
   return 0;
}