// Header Files
#include <iostream.h>
#include<conio.h>


void main()
{
    clrscr();
    int rows, i, j;
    cout << "Left Triangle Pattern\n";
    cout << "Enter the number of rows : ";
    cin>>rows;
    for (i = 1; i <= rows; i++)
    {
	for (j = 1; j <= i; j++)
	{
	    cout << "* ";
	}
	cout << "\n";
    }
    getch();

}