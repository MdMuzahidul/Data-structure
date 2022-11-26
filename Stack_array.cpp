#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int stack_arr[5];
int top = -1;
void push(int x)
{
    if (top == 4)
    {
        cout << "Ar dukaina vai jaiga nai";
        return;
    }
    top++;
    stack_arr[top] = x;
}

int pop()
{
    int x;
    if (top == -1)
    {
        cout << "sira dan vai amar sob shas" << endl;
    }
    x = stack_arr[top];
    top--;
    return x;
}

void print()
{
    if (top == -1)
    {
        cout << "koyta laga tor";
    }
    else
    {
        for (int i = 0; i <= top; i++)
        {
            cout << stack_arr[i] << " ";
        }
    }
    cout << endl;
}

void peek()
{
    if (top == -1)
    {
        cout << "data da sala";
    }
    else
        cout << stack_arr[top];
}

int main()
{
    int n, age;
    while (1)
    {
        cin >> n;
        switch (n)
        {
        case 1:
            cout << "push:";
            cin >> age;
            push(age);
            break;
        case 2:
            cout << "POP: ";
            cout << pop() << endl;
            break;
        case 3:
            cout << "Print:";
            print();
            break;
        case 4:
            cout << "peek:";
            peek();
            break;
        default:
            break;
        }
    }
}
