#include<iostream>
#include<stack>
using namespace std;

bool checkParenthesis(string str){
   stack <char> st;
   for (int i = 0; i < str.length(); i++)
   {
        if(st.empty()){
            st.push(str[i]);
        }
        else if((st.top() == '(' &&  str[i] == ')') || (st.top() == '{' &&  str[i] == '}') || (st.top() == '[' &&  str[i] == ']')){
             st.pop();
        }
        else{
            st.push(str[i]);
        }
   }
   
   return st.size() == 0;
}
int main(){
string str = "{[()]}";
cout << checkParenthesis(str);

}