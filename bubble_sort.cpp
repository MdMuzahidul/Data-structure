#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout << "inter the array size:";
    cin >> n;
    int a[n];
    cout << "inter the array number:" << endl;
    for (int i = 0; i < n; i++)
        cin >> a[i];
    for (int k = 0; k < n - 1; k++)
    {
        for (int i = 0; i < n - k - 1; i++)
        {
            if (a[i] > a[i + 1])
            {
                swap(a[i], a[i + 1]);
            }
        }
    }
    cout << "bubble sort:";
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
}
