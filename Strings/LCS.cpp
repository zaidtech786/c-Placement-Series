#include<iostream>
using namespace std;

int lcs(string str1 , string str2 , int n , int m){
    if(n == 0 || m == 0){
        return 0;
    }

    if(str1[n - 1] == str2[m - 1]){
        return 1 + lcs(str1,str2,n - 1,m - 1);
    }
     return max(lcs(str1, str2, n, m - 1), lcs(str1, str2, n - 1, m));
    
    

}
int main(){
  string str1 = "abcdgh";
    string str2 = "abedfh";
  cout << "Length of LCS is : " << lcs(str1,str2,str1.length(),str2.length());
} 

// a b c d g h
// a b e d h 

// a b c d r 
// a b e d h r