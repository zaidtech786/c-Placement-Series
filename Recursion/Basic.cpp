#include <iostream>
using namespace std;

void printElement(int no){
    if(no == 0){
        return;
    }
    cout << no << " ";
    printElement(no - 1);
}

int sumElem(int no){
    if(no == 0){
        return 0;
    }
    return no+=sumElem(no-1);

}

void reverse(int no){
    if(no < 10){
        cout << no;
        return;
    }
    cout << no % 10;
    reverse(no / 10);
}

int factorial(int no){
    if(no == 0 || no == 1){
        return 1;
    }
    return no * factorial(no - 1);
}
void fibonacci(int a,int b, int no) {
    if(no == 0){
        return;
    }
    cout << a << "  " << b;
    int c = a + b;
    a = b;
    b = c;
    fibonacci(a,b,no - 1);
}
int main()
{
    int no = 10;
    int a = 0 , b = 1;
    // cout << sumElem(no);
    printElement(no);
    //   reverse(no);
    //   cout << factorial(no);
    // fibonacci(a,b, no);
    return 0;
}