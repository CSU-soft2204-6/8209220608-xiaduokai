#include <iostream>
#include<iomanip>
using namespace std;
bool is_prime(int m);
int main()
{
    cout << setw(10);
    for (int x=2,y=0;y<200 ; x++)
    {
        if (is_prime(x) == true)
        {
            cout << x<<setw(10);
            y++;
            if (y % 10 == 0) cout << endl;
        }
    }
    return 0;
}

bool is_prime(int m)
{
    int i;
    for (i = 2; i < m; i++)
        if (m % i == 0) break;
    if (i >= m)
        return true;
    else return false;
}
