#include<iostream>
using namespace std;

string removeSpace(string str){
    string ans = "";
   for (int i = 0; i < str.length(); i++)
   {
       if(str[i] != ' '){
           ans.push_back(str[i]);
       }
   }
   return ans;
}

string removeFaltuChar(string str){
      string ans = "";
   for (int i = 0; i < str.length(); i++)
   {
       if( (str[i] >='a' && str[i] <='z') || (str[i]>='A' && str[i] <='Z')){
           ans.push_back(str[i]);
       }
   }
   return ans;
}

int main(){
string str = "21@zaid23@#$";
cout << removeFaltuChar(str);

}