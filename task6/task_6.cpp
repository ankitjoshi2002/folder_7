#include<iostream>
using namespace std ;
int main()
{
    char a[4][4] ;
    int i , j ;
    for(i=0;i<4;i++)
    {
     for(j=0;j<4;j++)
     {
        if(j>=i)
        a[i][j]='*';
        else
        a[i][j] =' ';
     }  }
    for(i=0;i<4;i++)
    {
        for(j=0;j<4;j++)
        cout<<a[i][j] ;
        cout<<endl;
    }
  
    return 0;
}
