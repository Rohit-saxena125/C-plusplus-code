#include <iostream.h>
using namespace std;
int main()
{
    int n;

    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        if (i % 2 == 0)
        {
            continue;
        }
        else
        {
            printf("%d ", i);
        }
    }

    return 0;
}