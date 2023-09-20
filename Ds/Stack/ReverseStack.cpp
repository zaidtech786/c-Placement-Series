#include <iostream>
#include <stack>
using namespace std;

void reverse(stack<int> & s){
      if(s.empty()){
        return;
    }
    int num = s.top();
    s.pop();

      // 3  2 1 

    reverse(s);
    s.push(num);
    cout << num << " ";
    
}
int main()
{
    stack <int> s;
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    reverse(s);
    return 0;
}