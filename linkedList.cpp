#include <iostream>
#include <bits/stdc++.h>
using namespace std;
struct node
{
    int x;
    node *next;
};
node *head = NULL;
void append(int x)
{
    if (head == NULL)
    {
        head = new node();
        head->x = x;
        head->next = NULL;
    }
    else
    {
        node *current_node = head;
        while (current_node->next != NULL)
        {
            current_node = current_node->next;
        }
        node *newnode = new node();
        newnode->x = x;
        newnode->next = NULL;
        current_node->next = newnode;
    }
}
void print()
{
    node *current_node = head;
    while (current_node != NULL)
    {
        cout << current_node->x << endl;
        current_node = current_node->next;
    }
}
int main()
{
    int age, y;
    while (1)
    {
        cin >> y;
        switch (y)
        {
        case 1:
            cout << "age :";
            cin >> age;
            append(age);
            break;
        case 2:
            print();
            break;
        }
    }
    return 0;
}