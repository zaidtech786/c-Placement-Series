#include<iostream>
using namespace std;

void AnglePattern(int n){
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
           cout << "* ";
        }
        cout << endl;
        
    }
    
}

void NumberAnglePattern(int n){
    int num = 1;
     for (int row = 1; row <= n; row++)
     {
         for (int col = 1; col <= row; col++)
         {
             cout << num << " ";
             num++;
         }
         cout << endl;
     }
     
}

void reverseAnglePattern(int n){
    for (int i = 0; i <= n; i++)
    {
        for (int j = 1; j <= n - i ; j++)  
        {
           cout << "*";
        }
        cout << endl;
    }
    
}

void pattern10(int n){
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
           cout << "* ";
        }
        cout << endl;
        
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
          cout << "* ";
        }
        cout << endl;
        
    }
    
    
}
int main(){
  int n = 5;
    // AnglePattern(n);
    // reverseAnglePattern(n);
    // NumberAnglePattern(n);
    pattern10(n);
}