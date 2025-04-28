#include<iostream>
using namespace std;

string capitalize(string str){
    int len = str.length();
   for(int i = 0;i < str.length(); i++){
    if(i == 0 || i == (len-1))  str[i] = toupper(str[i]);

    if(str[i] == ' '){
    str[i + 1] = toupper(str[i + 1]);
    str[i - 1] = toupper(str[i - 1]);
    }

   }

   return str;
}
int main(){
  string str = "zaid siddiqui";
  cout << capitalize(str);

}