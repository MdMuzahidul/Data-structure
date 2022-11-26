#include <bits\stdc++.h>
using namespace std;
int main()
{
    int a[10] = {45, 21, 63, 15, 27, 16, 75, 5, 2, 1};
    for (int i = 1; i < 10; i++)
    {
        int key = a[i];
        int j = i - 1;
        while (j >= 0 && a[j] > key)
        {
            a[j + 1] = a[j];
            j = j - 1;
        }
        a[j + 1] = key;
    }
    for (int i = 0; i < 10; i++)
    {
        cout << a[i] << " ";
    }
}