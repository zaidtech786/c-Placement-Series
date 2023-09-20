#include <iostream>
using namespace std;

int AbundantNo(int no) {
    int sum = 0;
    for (int i = 1; i < no; i++)
    {
       if(no % i ==0){
         sum+=i;
       }
    }
    if(no < sum) {
        cout << "Abundant Number";
    }
    else{
        cout << " Not a Abundant Number";
    }
    
}
int main()
{
    int no = 18;
    AbundantNo(no);
    return 0;
}