/*
    *****
   *   *
  *   *
 *   *
*****
*/
#include <iostream.h>
using namespace std;

int main()
{
    int n, j, i;

    cin >> n;

    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= n - i; j++)
        {
            cout << " ";
        }
        for (j = 1; j <= n; j++)
        {
            if (i == 1 || i == n)
            {
                cout << "*";
            }
            else
            {
                if (j == 1 || j == n)
                {
                    cout << "*";
                }
                else
                {
                    cout << " ";
                }
            }
        }
        cout << endl;
    }
    return 0;
}