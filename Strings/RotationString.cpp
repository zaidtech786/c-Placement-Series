// Question:- Check if one string is rotation of another string

#include<iostream>
using namespace std;

bool checkRotation(string str, string rotatedStr){
   if(str.length() != rotatedStr.length()){
    return false;
   }

   string concatenatedStr = str + rotatedStr;   // abcdcdab

   if(concatenatedStr.find(rotatedStr) != std::string::npos){
        return true;
   } 
   return false;
}  
int main(){
 string str = "abcd";
 string rotatedStr = "adbc";   
 cout << checkRotation(str,rotatedStr);

}
