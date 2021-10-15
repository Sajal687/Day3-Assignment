#include <iostream>
using namespace std;

//Compiler version g++ 6.3.0

int main()
{
    int i , j , k , row , col , a;
    
    cout<<"Enter Number of Rows & Columns :";
    cin>>row>>col;
    a = col/2;
    for(i=0;i<row;i++)
    {
      for(j=0;j<col/2;j++)
      {
        if(i<=j)
        cout<<"*";
        else
        cout<<" ";
      }
      for(k=col/2 ; k<i+a ; k++)
      {
         cout<<"*";
      }
      cout<<endl;
    }
    
}