#include<iostream>
using namespace std;

void reverse(int arr[],int len, int s, int e){
    if(s > e){
        return;
    }
    int temp = 0;
    temp = arr[s];
    arr[s] = arr[e];
    arr[e] = temp;
    return reverse(arr,len-1,s++,e--);
}
int main(){
int arr[] = {1,2,3};
int len = sizeof(arr) / sizeof(arr[0]);
 int s = 0 ,e = len -1;
 reverse(arr,3,s,e);

}