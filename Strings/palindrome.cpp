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

// Remove special character
bool isValid(char ch)
{
    if ((ch >= 'a' && ch <= 'z') && (ch >= 'A' && ch <= 'Z') && (ch >= 0 && ch <= 9))
        return 1;
    else
        return 0;
}

string checkPalindrome(string s)
{
    int left = 0, right = s.length() - 1;
    while (left < right)
    {
        
            if (isLower(s[left]) != isLower(s[right]))
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
bool isPalindrome(string str){
    string rStr = "";
    for (const auto &c :str )
    {
        if(isalnum(c)){
            rStr.push_back(tolower(c));
        }
    }
        if(rStr.empty()){
            return false;
        }
        // string temp = rStr;
        // string revStr =  reverseStr(rStr);
        // cout << "Rstr " << revStr <<endl;
        // cout << "temp " << rStr;
        // // return temp == revStr;
        cout << rStr ;
 int left = 0,right = rStr.length() -1 ;
    while (left < right)
    {
        
            if (rStr[left] != rStr[right])
                return 0;
            else
            {
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
    string str = "@$#$lool$#@";
    cout << isPalindrome(str);
}