#include<iostream>
#include<limits.h>
using namespace std;

char FindMaxOccuringChar(string s){
    int count[26] = {0};
    for (int i = 0; i < s.length(); i++)
    {
        if(s[i] >='a' && s[i] <='z')
           count[s[i] - 'a']++;
        else 
          count[s[i] - 'A']++;
    }

    int max = INT_MIN,ans = -1;
    for (int i = 0; i < 26; i++)
    {
       if(count[i] > max)
          ans = i;
          max = count[i];
    }
    return 'a' + ans;
    
    
}
int main(){
string str = "test";
cout << FindMaxOccuringChar(str);
}