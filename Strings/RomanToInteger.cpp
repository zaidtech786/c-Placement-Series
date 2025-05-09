#include<iostream>
using namespace std;

int value(char r)
{
    if (r == 'I')
        return 1;
    if (r == 'V')
        return 5;
    if (r == 'X')
        return 10;
    if (r == 'L')
        return 50;
    if (r == 'C')
        return 100;
    if (r == 'D')
        return 500;
    if (r == 'M')
        return 1000;
    return -1;
}

int ConvertToInteger(string str){
    int ans = 0;
    for (int i = 0; i < str.length(); i++)
    {
        char s1 = value(str[i]);  // 10 
        if(i+1 < str.length()){
            char s2 = value(str[i + 1]);   //1 

            if(s1>=s2){
               ans+=s1;   // 0 + 10 = 10 + 1 = 11 
            }
            else{
                ans+=s2-s1;
                i++;
            }
        }
        else{
            ans+=s1;
        }
    }
    return ans;
    
}

int main(){
string str = "XI";
cout << ConvertToInteger(str);
}