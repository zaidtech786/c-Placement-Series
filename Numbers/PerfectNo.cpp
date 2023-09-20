#include <iostream>
using namespace std;

int detectPerfect(int no) {
    int sum = 0;
    for (int i = 1; i < no; i++)
    {
       if(no % i == 0){
        sum+=i;
       }
    }
    return sum;
    
}

int main()
{
    int no = 28;
    if(detectPerfect(no) == no){
        cout << "perfect No";
    }
    else{
        cout << "Not a Perfect No";
    }
    return 0;
}