#include <iostream>
#include <map>
#include <limits.h>
using namespace std;

char consecutiveMaxOccuringChar(string s){
   int current_count = 0 ,count = 0;
   int len = s.length();
   char ans = s[0];
   for (int i = 0; i < len; i++)
   {
       if(i < len - 1 && s[i]== s[i+1]){
         current_count++;
       }
       else{
         if(current_count > count){
            count = current_count;
            ans = s[i];
         }
         current_count = 1;
       }
   }
   return ans;
}

char FindMaxOccuringChar(string str)
{
   // int freq[26] = {0};
   // for (int i = 0; i < str.length(); i++)
   // {
   //    if (str[i] >= 'a' && str[i] <= 'z')
   //       freq[str[i] - 'a']++;
   //    else
   //       freq[str[i] - 'A']++;
   // }
   // int maxi = INT_MIN, ans = -1;
   // for (int i = 0; i < 26; i++) 
   // {
   //    if (freq[i] > maxi)
   //    {
   //       maxi = freq[i];
   //       ans = i;
   //    }
   // }
   // return 'a' + ans;
   
   int maxi = 0;
   char ans = 'a';
   map<char,int> mp;
   for(auto ch: str){
      mp[ch]++;
   }

   for(auto i : mp) {
      if(i.second > maxi){
         maxi = i.second;
         ans = i.first;
      }
   } 

   return ans;
}

   int main()
   {
      string str = "Test";
      cout << FindMaxOccuringChar(str);

      cout << endl;
      string s = "aaaabbaaccdddddde";
      cout << consecutiveMaxOccuringChar(s);
   }