#include <bits/stdc++.h>
using namespace std;

struct node
{
    int data;
    node *ptr;
};
node *top = NULL;
void push(int x)
{
    node *temp = new node();
    temp->data = x;
    temp->ptr = top;
    top = temp;
}

int pop()
{
    node *temp = new node();
    temp = top;
    int x;
    x = temp->data;
    top = temp->ptr;
    delete temp;
    return x;
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
            cout << "PUSH :";
            cin >> age;
            push(age);
            break;
        case 2:
            cout << "POP :";
            cout << pop();
            break;
        default:
            cout << "INTER RIGHT KEY:";
            break;
        }
    }
}