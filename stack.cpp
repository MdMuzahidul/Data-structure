#include <bits\stdc++.h>
using namespace std;

class node
{
public:
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
    int a, age;
    while (1)
    {
        cin >> a;
        switch (a)
        {
        case 1:
            cin >> age;
            push(age);
            break;
        case 2:
            cout << pop();
            break; 

        default:
            break;
        }
    }
}