#include<iostream>
using namespace std;

// First Approacg
string replace(string s){
    for (int i = 0; i < s.length(); i++)
    {
        if(s[i] == ' ')
           s[i] = '@';
         
    }
    return s;
}

string replace2(string s){
    string temp = "";
    for (int i = 0; i < s.length(); i++)
    {
        if(s[i] == ' '){
           temp.push_back('@');
           temp.push_back('4');
           temp.push_back('0');
        }
        else
          temp.push_back(s[i]);
         
    }
    return temp;
}
int main(){
string s = "My Name Is Zaid";
cout << replace2(s);

}