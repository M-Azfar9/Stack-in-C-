#include <iostream>
using namespace std;
class MyStack
{
private:
    int *stackArray;
    int stackSize;
    int top;

public:
    MyStack(int size)
    {
        stackArray = new int[size];
        stackSize = size;
        top = -1;
    }

    bool isStackEmpty()
    {
        return (top == -1);
    }

    bool isStackFull()
    {
        return (top >= stackSize - 1);
    }

    void push(int value)
    {
        if (!isStackFull())
        {
            stackArray[++top] = value;
        }
        else
        {
            cout << "Stack OverFlow" << endl;
            return;
        }
    }

    int pop()
    {
        if (!isStackEmpty())
        {
            return stackArray[top--];
        }
        else
        {
            cout << "Stack is Empty" << endl;
            return -1;
        }
    }

    void displayStack()
    {
        cout << "Stack Elements:" << endl;
        for (int i = 0; i <= top; i++)
        {
            cout << stackArray[i] << " ";
        }
        cout << endl;
    }
    void displayTopElement()
    {
        if (!isStackEmpty())
            cout << "Top Element of stack: " << stackArray[top] << endl;
        else
            cout<<"Stack Is Empty"<<endl;
    }
};
int main()
{
    MyStack s(5);
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    s.push(5);
    s.push(6);
    int val = s.pop();
    cout<<val;
    return 0;
}