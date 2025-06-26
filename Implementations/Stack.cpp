#include<iostream>
using namespace std;

class Stack{
    private:
        int *arr;
        int top;
        int size;
    public:
        Stack(int size){
            this->size = size;
            arr = new int[size];
            top = -1;
        }

        void push(int element){
            // check if stack is full or not
            if(top >= size){
                cout<<"Stack is full"<<endl;
                return;
            }
            top++;
            arr[top] = element;
        }

        void pop(){
            // check if stack is empty or not
            if(top < 0){
                cout<<"Stack is empty"<<endl;
                return;
            }
            arr[top] = 0;
            top--;
        }

        void peek(){
            // stack empty or not
            if(top < 0){
                cout<<"Stack is empty"<<endl;
                return;
            }
            cout<<arr[top]<<endl;
        }
};

int main(){
    Stack s(5);
    s.peek();
    s.pop();
    s.push(1);
    s.push(2);
    s.peek();
    s.pop();
    s.peek();
    return 0;
}