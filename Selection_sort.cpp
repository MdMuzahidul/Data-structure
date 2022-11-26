#include <bits\stdc++.h>
using namespace std;
int main()
{
    int a[8] = {77, 33, 44, 11, 88, 22, 66, 55};
    for (int i = 0; i < 7; i++)
    {
        int imin = i;
        for (int j = i + 1; j < 8; j++)
        {
            if (a[j] < a[imin])
                imin = j;
        }
        swap(a[i], a[imin]);
    }
    for (int i = 0; i < 8; i++)
        cout << a[i] << " ";
}