#include <iostream>
#include <stack>
using namespace std;

bool balanced(stack <char> s, string exp ){
   for (int i = 0; i < exp.length(); i++)
   {
     if( (exp[i] == '(' ) || (exp[i] == '{' ) || (exp[i] == '[' )    ){
        s.push(exp[i]);
     }
     else{
        if(!s.empty()){
            int top = s.top();
            if( (exp[i] == ')' && top=='(' ) || (exp[i] == '}' && top=='{' ) || (exp[i] == ']' && top=='[' ) ){
                s.pop();
            }
            else{
                return false;
            }
        }
        else{
            return false;
        }



     }
   }
   if(s.empty()){
    return true;
   }
   else {
    return false;
   }
   
}

int main()
{
    stack <char> s;
    string exp = "{[()]}";
    if(balanced(s,exp)){
        cout << "Balanced";
    }
    else{
        cout << "Not Balanced";
    }
    return 0;
}