#include<iostream>
using namespace std;

void pattern1(int n){
    int spaces = 6;
    for (int i = 0; i < n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << j ;
        }

        for (int j = 0; j < spaces; j++)
        {
            cout << " ";
        }
        spaces-=2;
        
        cout << endl;
        
    }
    
}
int main(){
    int n = 5;
pattern1(n);

}