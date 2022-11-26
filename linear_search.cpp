#include <bits\stdc++.h>
using namespace std;
int main()
{
    int a[10] = {13, 17, 14, 11, 10, 18, 23, 25, 30, 87};
    int n, position = -1;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        if (n == a[i])
        {
            position = i + 1;
            break;
        }
    }
    if (position == -1)
    {
        cout << "not found";
    }
    else
        cout << position;
}