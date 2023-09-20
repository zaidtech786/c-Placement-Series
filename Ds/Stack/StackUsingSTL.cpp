#include <iostream>
#include <stack>
using namespace std;

int main()
{
    stack <int> s;
    s.push(5);
    s.push(6);
    s.push(8);
    s.push(9);
    s.pop();
    cout << s.top();
    return 0;
}