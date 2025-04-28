#include<iostream>
using namespace std;

void print(int n){
    for (int i = 0; i < n; i++)
    {
        // spaces
        for (int j = 0; j < n - i - 1; j++)
        {
            cout << " ";
        }

        // Stars
        for (int k = 0; k < 2 * i + 1; k++)
        {
           cout << "*" ;
        }

        // spaces
         for (int j = 0; j < n - i - 1; j++)
        {
            cout << " ";
        }

        cout << endl;
    }
    
}

void reversePrint(int n ){
    for (int i = 0; i < n; i++)
    {
    // Spaces
        for (int j = 0; j < i; j++)
        {
             cout << " ";
        }
        // Stars
        for (int j = 0; j < 2 * n - (2 * i + 1); j++)
        {
             cout << "*";
        }
        //  Spaces
          for (int j = 0; j < i; j++)
        {
             cout << " ";
        }

     cout << endl;   
    }
    
}
int main(){
  int n = 5 ;
  print(n);
//   reversePrint(n);

}