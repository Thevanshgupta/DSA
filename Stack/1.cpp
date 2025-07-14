#include <iostream>
#include <stack>
using namespace std;

int main()
{
    stack<int> s;
    s.push(12);
    s.push(122);
    s.push(121);
    s.push(122);
    s.push(123);
    while (!s.empty())
    {
        cout << s.top() << " ";
        s.pop();
    }
    cout << s.top();
}