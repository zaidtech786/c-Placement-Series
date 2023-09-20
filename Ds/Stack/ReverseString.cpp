#include <iostream>
#include <stack>
using namespace std;

int main()
{
    stack <int> s;
    string str = "zaid";
    for (int i = 0; i < str.length(); i++)
    {
        char ch = str[i];
        s.push(ch);
    }
    string ans = "" ;
    while (!s.empty())
    {
       int num = s.top();
       ans.push_back(num);
       s.pop();
    }
    cout << "Reverse String is " << ans;
    
    
    return 0;
}