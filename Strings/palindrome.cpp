#include <iostream>
using namespace std;

// Convert all the character to lowercase;
char isLower(char ch)
{
    if (ch >= 'a' && ch <= 'z')
        return ch;
    else
    {
        char temp = ch - 'A' + 'a';
        return temp;
    }
}

// // Remove special character
// bool isValid(char ch) {
//     // Check if the character is alphanumeric (a-z, A-Z, 0-9)
//     return ((ch >= 'a' && ch <= 'z') || 
//             (ch >= 'A' && ch <= 'Z') || 
//             (ch >= '0' && ch <= '9'));
// }

string checkPalindrome(string s)
{
    int left = 0, right = s.length() - 1;
    while (left < right)
    {
        
            if (tolower(s[left]) != tolower(s[right]))
                return "Not a palidrome";
            else
            {
                left++;
                right--;
            }
        
    }
    return "Palindrome";
}
string reverseStr(string str){
    int left = 0,right = str.length() -1 ;
    while (left < right)
    {
        swap(str[left++],str[right--]);
    }
    return str;
}

// This function uses alnum inbuilt function
bool isPalindrome(string str){
   string newStr = "";
  int len = str.length();
   for (int i = 0; i < len; i++)
   {
      if(isalnum(str[i]))  newStr.push_back(tolower(str[i]));
   }
int left = 0 , right = newStr.length() - 1;
while (left < right)
{
    if(newStr[left] != newStr[right])   return 0;
    left++;
    right--;
}

return 1;

}


bool isValid(char ch) {
    // Check if the character is alphanumeric (a-z, A-Z, 0-9)
    if( (ch >='a' && ch<='z') ||(ch >='A' && ch<='Z') || (ch >='1' && ch<='9') )
      return 1;
    else
       return 0;
}

bool isPalindrome2(string str) {
   string newStr = "";

   for (int i = 0; i < str.length(); i++)
   {
      if(isValid(str[i])){
        newStr.push_back(str[i]);
      }
   }

   int left = 0 , right = newStr.length() - 1;
   while (left < right)
   {
      if(tolower(newStr[left]) !=tolower(newStr[right]) )
        return 0;
      else{
        left++;
        right--;
      }
   }
   
   return 1;
}


bool normalPalindrome(string str){
    int len = str.length();
    int left = 0 , right = len - 1;
    while (left < right)
    {
        if(str[left] != str[right])  return 0;
        else{
            left++;
            right--;
        }
    }
    return 1;
}

int main()
{
    // Check valid palindrome in these first we need to remove spaces , spl character and convert all char to lowercase;
    string name = "Lool";
    string ans = checkPalindrome(name);
    cout << ans <<endl;
    

    // Check Palindrom 2nd type
    string str = "@$#$looL$#$@";
    cout << isPalindrome2(str);
    cout <<endl;

    string normalStr = "lol";
    cout << isPalindrome(normalStr);
}