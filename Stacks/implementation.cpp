#include <bits/stdc++.h>
using namespace std;

int top = -1, a[INT16_MAX];

// function to push element in stack
void push(int x)
{
    // checking the overflow condition
    if (top >= INT_MAX - 1)
        cout << "Stack overflow";
    else
    {
        top++;
        a[top] = x;
        cout << x << " has be pushed to the stack";
    }
}

void pop()
{
    // checking the underflow condition
    if (top < 0)
        cout << "stack underflow";
    else
    {
        cout << a[top] << "poped form the stack";
        top--;
    }
}

void peak()
{
    if (top < 0)
        cout << "stack it empty";
    else
        cout << a[top] << "is the top element";
}

void isEmpty()
{
    if (top < 0)
        cout << "stack is empty";
}

void display()
{
    if (top < 0)
        cout << "stack is empty";
    else
    {
        for (int i = top; i >= 0; i--)
        {
            cout << a[i] << " ";
        }
    }
}

int main()
{

    int ch, val;

    cout << "1) Push in stack" << endl;
    cout << "2) Pop from stack" << endl;
    cout << "3) Display stack" << endl;
    cout << "4) Exit" << endl;

    do
    {
        cout << "enter the choice" << endl;
        cin >> ch;
        switch (ch)
        {
        case 1:
        {
            cout << "Enter value to be pushed:" << endl;
            cin >> val;
            push(val);
            break;
        }
        case 2:
        {
            pop();
            break;
        }
        case 3:
        {
            display();
            break;
        }
        case 4:
        {
            cout << "Exit" << endl;
            break;
        }
        default:
        {
            cout << "Invalid Choice" << endl;
        }
        }
    } while (ch != 4);

    return 0;
}