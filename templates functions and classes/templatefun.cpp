#include <iostream>
using namespace std;
template <class T>
class Stack
{
private:
    int *stk;
    int top;
    int size;

public:
    Stack(int sz)
    {
        size = sz;
        top = -1;
        stk = new T[size];
    }
    void push(T x);
    T pop();
};
template<class T>
void Stack<T>::push(T x)
{
    if (top == size - 1)
    {
        cout << "Stack is Full";
    }
    else
    {
        top++;
        stk[top] = x;
    }
}
template<class T>
T Stack<T>::pop()
{
    T x = 0;
    if (top == -1)
    {
        cout << "stack is empty" << endl;
    }
    else
    {
        x = stk[top];
        top--;
    }
    return x;
}

int main()
{
    Stack<int> s(10);
    s.push(10);
    s.push(30);
    s.push(12);
}