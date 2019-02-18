
//C++ code for matrix addition
#include<iostream.h>
#include<conio.h>
#include<stdio.h>
void main()
{
   int row, col, i, j, first[10][10], second[10][10], sum[10][10];
   
   cout << "Enter the number of rows and columns of matrix ";
   cin >> row >> col;
   cout << "Enter the elements of first matrix\n";
 
   for ( i = 0 ; i < row ; i++ )
      for ( j = 0 ; j < col ; j++ )
         cin >> first[i][j];
 
   cout << "Enter the elements of second matrix\n";
 
   for ( i = 0 ; i < row ; i++ )
      for ( j = 0 ; j < col ; j++ )
            cin >> second[i][j];
 
   for ( i = 0 ; i < row ; i++ )
      for ( j = 0 ; j < col ; j++ )
         sum[i][j] = first[i][j] + second[i][j];
 
   cout << "Sum of entered matrices:-\n";
 
   for ( i = 0 ; i < row ; i++ )
   {
      for ( j = 0 ; j < col ; j++ )
         cout << sum[i][j] << "\t";
 
      cout << endl;
   }
   getch();
}
