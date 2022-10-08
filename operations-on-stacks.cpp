//implementation of stacks using arrays
#include<iostream>
using namespace std;

#define n 100

class Stack{
    int *arr;
    int top;
    public:
    Stack(){
        arr = new int(n);
        top = -1;

    }
    void push(int x){
        if(top==n-1){
            cout<<"Overflow";
        }
        else{
            top++;
            arr[top] = x;
        }
    }
    void pop(){
        if(top==-1){
            cout<<"no elements to pop";
        }
        else{
            top--;
            
        }
    }
    int Top(){
        if(top==-1){
            cout<<"no element to pop";
        }
        else{
            return arr[top];
        }
    }
    bool Empty(){
        return top==-1;
        
    }
    

};
int main(){
    Stack s1;
    s1.push(2);
    s1.push(3);
    s1.push(4);
    cout<<s1.Top()<<endl;
    s1.pop();
    cout<<s1.Top()<<endl;
    s1.pop();
    cout<<s1.Top()<<endl;
    cout<<s1.Empty()<<endl;
   
    return 0;
}