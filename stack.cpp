#include<iostream>
#include<stack>
using namespace std;

void printStackElements(stack<int> input_stack){
    while(!input_stack.empty()){
        cout << input_stack.top() << endl;
        input_stack.pop();
        }
}

int main()
{
    // functions
    // empty, size, pus, pop top 
    stack<int> numberStack;
    numberStack.push(1);
    numberStack.push(2);
    numberStack.push(3);
    numberStack.pop();

    printStackElements(numberStack);
    // if(numberStack.empty())
    //     cout<<"Stack is empty" << endl;
    // else
    //     cout << "Stack is not empty" << endl;
    // cout <<"Stack size is " << numberStack.size() << endl;
}