#include <iostream>
#include <stack>
using namespace std;



class Stack{
    public:
    int *arr;
    int top;
    int size;
   
   Stack(int size){
    this -> size = size;
    arr = new int[size];
    top = -1;
   }

   bool isEmpty(){
    if(top==-1){
       return 1;
    }
    else{
        return 0;
    }
   }

   void push(int elm){
    if(size-top > 1){
       top++;
       arr[top] = elm;
    }
    else{
        cout << "Stack Bhar Chuka hai" <<endl;
    }
   }

  void pop(){
    if(!isEmpty()){
        top--;
    }
    else{
        cout << "Stack Underflow" <<endl;
    }
  }

  int peak() {
   if(!isEmpty()){
    return arr[top];
   }
   else{
    cout << "Stack Is Empty" <<endl;
   }
  }



};

int main()

{

    Stack st(5);
    st.push(5);
    st.push(6);
    st.push(8);
    st.push(9);
    st.pop();
   
   cout << st.peak();



    return 0;
}

