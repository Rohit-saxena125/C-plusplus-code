/*
*        *
**      **
* *    * *
*  *  *  *
*   **   *
*   **   *
*  *  *  *
* *    * *
**      **
*        *
*/
#include<iostream.h>
using namespace std ;

int main()
{
    int n ;
    cin>>n;
    for ( int i = 1 ; i <= n ; i++ )
    {
        for (int j = 1; j <= i ; j++)
        {
            if ( j == 1 || j == i)
                cout<<"*";
            else
                cout<<" " ;
        }
        for ( int j = 1 ; j <= 2 * n - 2 * i ; j++)
            cout<<" ";
        for ( int j = 1 ; j <= i ;j++)
        {
            if ( j == 1 || j == i)
                cout<<"*";
            else
                cout<< " ";
        }
        cout<<"\n";
    }
    for( int i = n ;i > 0; i--)
    {
        for (int j =1 ; j <= i ; j++ )
        {
            if (j == 1 || j == i)
                cout<<"*";
            else
                cout<<" ";
        }
        for (int j = 1 ; j <= 2 * n - 2 * i ;j++ )
            cout<<" ";
        for (int j = 1 ; j <= i ;j++)
        {
            if ( j == 1 || j == i)
                cout<<"*";
            else
                cout<<" ";
        }
        cout<<"\n" ;
    }
    return 0 ;
}