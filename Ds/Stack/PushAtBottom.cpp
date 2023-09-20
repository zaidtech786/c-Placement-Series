#include <iostream>
#include <stack>
using namespace std;

void pushAtBottom(stack <int> &s, int x){
    if(s.empty()){
        s.push(x);
    return;
    }
    int num = s.top();
    s.pop();

    pushAtBottom(s,x);
    s.push(num);
}

void printStack(stack <int> s){
    if(s.empty()){
        return;
    }
    int num = s.top();
    s.pop();

     cout << num;

    printStack(s);
    s.push(num);


}



int main()
{
    stack <int> s;
    int x = 9;
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    pushAtBottom(s,x);
    printStack(s);
    return 0;
}