#include <iostream>
using namespace std;
#define MAX 10

class Stack
{
    int top;

public:
    int a[MAX];
    Stack() { top = -1; }
    bool push(int x);
    int pop();
    int peek();
    bool isEmpty();
};

bool Stack::push(int x)
{
    if (top >= (MAX - 1))
    {
        cout << "Stack Overflow\n";
        return false;
    }
    else
    {
        a[++top] = x;
        cout << x << " didorong ke dalam tumpukan\n";
        return true;
    }
}

int Stack::pop()
{
    if (top < 0)
    {
        cout << "Stack Underflow\n";
        return 0;
    }
    else
    {
        int x = a[top--];
        cout << x << " dikeluarkan dari tumpukan\n";
        return x;
    }
}

int Stack::peek()
{
    if (top < 0)
    {
        cout << "Tumpukan Kosong\n";
        return 0;
    }
    else
    {
        int x = a[top];
        return x;
    }
}

bool Stack::isEmpty()
{
    return (top < 0);
}

int main()
{
    Stack s;
    s.push(400);
    s.push(350);
    s.push(380);
    s.push(370);
    s.push(300);
    s.push(340);
    s.push(330);
    s.push(339);

    s.pop();
    s.pop();
    s.pop();

    cout << "Elemen teratas: " << s.peek() << endl;

    return 0;
}