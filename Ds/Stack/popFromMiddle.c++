#include <iostream>
#include <stack>
using namespace std;


void popAtMiddle(stack <int> & s, int count,int size){
   if(count==size/2){
      s.pop();
      return;
   }
   int num = s.top();
   s.pop();

   popAtMiddle(s,count+1,size);
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
    int count = 0;
    
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    s.push(5);
    s.push(6);
    int size = s.size();
    popAtMiddle(s,count,size);
    printStack(s);
    return 0;
}