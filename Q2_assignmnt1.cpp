// Q2. Array operations
// a. Accept an integer array from the user (size determined at runtime)
// b. Reverse the array and display it.
// c. Find and display the second largest and second smallest elements in the array.



#include<iostream>
using namespace std;


void sort(int arr[],int N)
{
    for(int i=0;i<N-1;i++)
    {
        for(int j=0;j<N-1-i;j++)
        {
            if(arr[j]>arr[j+1])
            {
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
}

void find_and_display(int arr[],int N)
{
    sort(arr,N);
    cout<<"\nSecond largest number is: "<<arr[N-2]<<endl;
    cout<<"Second smallest number is: "<<arr[1]<<endl;

}


int main()
{
    //size of the array
    int N,arr[10];
    cout<<"Enter the size of the array: ";
    cin>>N;

    //Enter the elements in an array
    cout<<"Enter "<<N<<" elements in the array: ";
    for(int i=0;i<N;i++)
    cin>>arr[i];

    cout<<"Reverse of the array is: "<<endl;
    for(int i=N-1;i>=0;i--)
    {
        cout<<arr[i]<<" ";
    }

    find_and_display(arr,N);
    return 0;
}