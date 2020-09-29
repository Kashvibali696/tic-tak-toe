// C++ program to print
// matrix in zig-zag form
#include <iostream>
using namespace std;
int main()
{
int c,r;
cout<<"\nInput the number of rows : ";
cin>>r;
cout<< "\nInput the number of columns : ";
cin>>c;
int arr[r][c];
int i,j;
cout<< "\nInput the matrix \n";
for(i = 0; i < r; i++)
{
for(j = 0; j < c; j++)
{
cin>>arr[i][j];
}
}
cout<<"\nThe Matrix is \n";
for(i = 0; i < r; i++)
{
for(j = 0; j < c; j++)
{
cout << arr[i][j] << " ";
}
cout << endl;
}

	// Method to print matrix in zig-zag for
		int evenRow = 0; //starts from the first row
		int oddRow = 1; //starts from the next row
cout<<"zigzag matrix:"<<endl;
		while (evenRow<r)
		{
			for (int i=0;i<c;i++)
			{
				// evenRow will be printed
						// in the same direction
				cout<<arr[evenRow][i] << " ";
			}

			// Skipping next row so as
				// to get the next evenRow
			evenRow = evenRow + 2;

			if(oddRow < r)
			{
				for (int i=c-1; i>=0; i--)
				{
				// oddRow will be printed in
					// the opposite direction
				cout<<arr[oddRow][i] << " ";
				}
			}

			// Skipping next row so as
				// to get the next oddRow
			oddRow = oddRow + 2;
		}
	}




				// the opp
