#include <iostream>
#include <map>
#include <limits.h>
using namespace std;

char consecutiveMaxOccuringChar(string s) {
   int count = 1, maxCount = 1;
   int len = s.length();
   char ans = s[0];

   for (int i = 1; i < len; i++) {
       if (s[i] == s[i - 1]) {
           count++;
       } else {
           count = 1;
       }

       if (count > maxCount) {
           maxCount = count;
           ans = s[i];
       }
   }
   return ans;
}

char FindMaxOccuringChar(string str)
{  
   int maxi = 0 ;
   char ans = 'a';
   map<char,int> freq;
   int len = str.length();
    for (int i = 0; i < len; i++)
    {
        freq[str[i]]++;
    }

    for(auto it:freq){
      if(it.second > maxi){
         maxi = it.second;
         ans = it.first;
      }
    }
    return ans;
}

   int main()
   {
      string str = "Testtt";
      cout << FindMaxOccuringChar(str);

      cout << endl;
      
      string s = "aaaabbaaccdddddde";
      cout << consecutiveMaxOccuringChar(s);
   }