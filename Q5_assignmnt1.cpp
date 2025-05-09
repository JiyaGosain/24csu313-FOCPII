// Q5. Rotate the matrix by 90 degrees.

#include<iostream>
using namespace std;
int main()
{
    int m,n;
    cout<<"Enter the number of rows and columns: "<<endl;
    cin>>m>>n;
    int arr[m][n];
    cout<<"Enter the elements in the array"<<endl;
    for(int r=0;r<m;r++)
    {
        for(int c=0;c<n;c++)
        {
            cin>>arr[r][c];   
        }
    }
    for(int r=0;r<m;r++)
    {
        for(int c=0;c<n;c++)
        {
            cout<<arr[r][c]<<" ";   
        }
        cout<<endl;
    }
    cout<<"\nRotated matrix: "<<endl;
    for(int c=0;c<n;c++)
    {
        for(int r=m-1;r>=0;r--)
        {
            cout<<arr[r][c]<<" ";
        }
        cout<<endl;
    }
}