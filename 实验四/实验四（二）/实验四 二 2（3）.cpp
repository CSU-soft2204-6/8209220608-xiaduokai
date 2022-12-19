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
}
int main()
{
    int n;
    cout << "数组元素个数：";
    cin >> n;
    double* p = new double[n];
    cout << "输入数组元素：";
    for (int i = 0; i < n; i++)
        cin >> p[i];
    bubblesort(p, n);
    for (int i = 0; i < n; i++)
            cout << p[i] << "    ";
    delete[]p;
}


