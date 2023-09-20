#include <iostream>
using namespace std;

void printElement(int no){
    if(no==0){
        return;
    }
    cout << no << " ";
    printElement(no-1);
}

int sumElem(int no){
if(no==0 || no==1){
    return 1;
}
return no + sumElem(no-1);
}


int main()
{
    int no = 5;
    cout << sumElem(no);
    // printElement(no);
    return 0;
}