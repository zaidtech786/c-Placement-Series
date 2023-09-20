#include <iostream>
using namespace std;

int findFact(int no) {
   if(no == 1 || no==0){
    return 1;
   }
//    int fact = findFact(no-1);
//    int fact_n = no * fact;
   return no * findFact(no-1);
}
   

int main()
{
    int no = 5;
   
    cout << findFact(no);
    return 0;
}