#include <iostream>
using namespace std;

template <typename T>
class Stack
{
    T *arr;
    int top;
    int capacity;

public:
    Stack(int size = 100)
    {
        arr = new T[size];
        capacity = size;
        top = -1;
    }
    ~Stack() { delete[] arr; }
    void push(T x)
    {
        if (top == capacity - 1)
        {
            cout << "Overflow\n";
            return;
        }
        arr[++top] = x;
    }
    T pop()
    {
        {if (top == -1)
        
             cout << "Underflow\n";
            return T();
        }
        return arr[top--];
    }
    T peek()
    {
        if (top == -1)
        {
            cout << "Empty\n";
            return T();
        }
        return arr[top];
    }
    bool empty() { return top == -1; }
};

int main()
{
    Stack<int> s1;
    s1.push(10);
    s1.push(20);
    cout << s1.pop() << endl;

    Stack<string> s2;
    s2.push("hello");
    s2.push("world");
    cout << s2.pop() << endl;
    return 0;
}