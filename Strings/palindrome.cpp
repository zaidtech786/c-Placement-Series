#include<iostream>
using namespace std;

// Convert all the character to lowercase;
char checkLetterCase(char ch){
         if(ch >= 'a' && ch <='z')
           return ch;
        else  {
           char temp = ch - 'A' + 'a';
           return temp;
        }
}

// Remove special character
bool isValid(char ch){
   if( (ch >='a' && ch <='z') && (ch >='A' && ch <='Z') && (ch >=0 && ch<=9))
      return 1;
   else
      return 0;
}

bool checkPalindrome(string s){
    cout << s;
    // int left = 0 ,right = s.length();
    // while (left <=right)
    // {
    //     if(s[left]!=s[right])
    //        return 0;
    //     else
    //        left++;
    //        right--;
    // }
    // return 1;  
}

string isPalindrom(string s){
    string temp = "";
    // Remove faltu character
    for (int i = 0; i < s.length(); i++)
    {
        if(isValid(s[i]))
          temp.push_back(s[i]);
    }
    
    // Convert to lowercase
    for (int i = 0; i < temp.length(); i++)
    {
        //  temp[i] = checkLetterCase(s[i]);
        cout << temp[i];
    }
    return temp;
    
}

int main(){
    // Check valid palindrome in these first we need to remove spaces , spl character and convert all char to lowercase;
 string name = "za%#$id";
isPalindrom(name);


}