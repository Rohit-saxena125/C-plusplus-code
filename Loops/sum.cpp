#include<iostream.h>
using namespace std;
int main()
{
    int n;

    cin>>n;

    int sum = 0 ;

    for (int i =1 ; i <= n ; i++)
    {
        sum += i ;
    } 
    printf("%d",sum);

    return 0 ;
}