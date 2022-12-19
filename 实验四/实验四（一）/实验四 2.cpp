#include <iostream>
using namespace std;
void bubblesort(double a[], int size)
{
    int i, j; double t;
    for (i = 0; i < size - 1; i++)
    {
        for (j = i + 1; j < size; j++)
        {
            if (a[i] > a[j])
            {
                t = a[j]; a[j] = a[i]; a[i] = t;
            }
        }
    }
    for (i = 0; i < size; i++)
        cout << a[i] << "    ";
}
int main()
{
    double a[10] = { 2.01,5.02,6.03,6.98,7.64,1.23,6.14,9.36,1.36,4.95 };
    int size = sizeof(a) / sizeof(a[0]);
    bubblesort(a, size);
    return 0;
}