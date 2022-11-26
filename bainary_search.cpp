#include <bits\stdc++.h>
using namespace std;
int main()
{
    int a[13] = {25, 30, 37, 45, 57, 69, 72, 79, 82, 89, 91, 96, 98};
    int value = 96;
    int left = 0, right = 12, medile;
    while (left <= right)
    {
        medile = (left + right) / 2;
        if (value == a[medile])
        {
            cout << medile << endl;
            return 0;
        }
        else if (value > a[medile])
        {
            left = (medile + 1);
        }
        else
        {
            right = (medile - 1);
        }
    }
    cout << "Data not found";
}