#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[n];
    int k = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        if (a[i] > k)
        {
            k = a[i];
        }
    }
    int temp[k + 1];
    memset(temp, 0, sizeof(temp));
    for (int i = 0; i < n; i++)
    {
        temp[a[i]]++;
    }
    for (int i = 1; i <= k; i++)
    {
        temp[i] += temp[i - 1];
    }
    int b[n];
    memset(b, 0, sizeof(b));
    for (int i = n - 1; i >= 0; i--)
    {
        b[--temp[a[i]]] = a[i];
    }
    for (int i = 0; i < n; i++)
    {
        cout << b[i] << " ";
    }
}
// counting sort

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, k = 0;
    cin >> n;
    int a[n + 1], b[n + 1] = {0};
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
        if (a[i] > k)
        {
            k = a[i];
        }
    }
    int c[k] = {0};
    for (int i = 1; i <= n; i++)
    {
        c[a[i]]++;
    }
    for (int i = 1; i <= k; i++)
    {
        c[i] += c[i - 1];
    }
    for (int i = n; i > 0; i--)
    {
        b[c[a[i]]] = a[i];
        c[a[i]]--;
    }
    for (int i = 1; i <= n; i++)
    {
        cout << b[i] << " ";
    }
}
