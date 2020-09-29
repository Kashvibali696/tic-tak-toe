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
cout << "\nSpiral Matrix : ";
int k = 0, l = 0;
while(k < r && l < c)
{
for(i = l; i < c; i++)
{
cout << arr[k][i] <<" ";
}
k++;
for(i =c-1; i>=0; i--)
{
cout << arr[r][i] << " ";
}
r--;

for(i=l+2; i <c; i++)
{
cout << arr[l+2][i] << " ";
}

}



