#include<iostream>
using namespace std ;
int main()
{
    int a[3][3]= { {1,2,3},{4,5,6},{7,8,9} } ;
    int i , j , n=3 ;
    for(i=0;i<3;i++)
    {
     for(j=0;j<3;j++)
     {
     a[i][j] = a[i][n-1]/3; ;
     }
     }
     for(i=0;i<3;i++)
    {
     for(j=0;j<3;j++)
     {
     cout<<a[i][j] ;
     }
    cout<<endl;
    }
return 0;
}
