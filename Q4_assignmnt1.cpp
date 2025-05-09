// Q4. Spiral matrix:

#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the value of n: ";
    cin >> n;
	
    int a[n][n]; //2D array 
    int num[n * n]; //1D array for storing numbers.

    cout << "Enter " << n * n << " elements" << endl;
    
	// Read elements correctly into 1D array
    for (int i = 0; i < n * n; i++) 
	{ 
        cin >> num[i]; 
    }

	// Column Variables (c1, c2, c3, c4): Track movement left and right across the rows.
	// Row Variables (r1, r2, r3, r4): Track movement up and down across the columns.

    int i, j, r1 = 0, r2 = 1, r3 = n - 1, r4 = n - 2, c1 = 0, c2 = n - 1, c3 = n - 2, c4 = 0;
    int rr1 = 0, rr2 = 1, rr3 = n - 1, rr4 = n - 2, cc1 = 0, cc2 = n - 1, cc3 = n - 2, cc4 = 0;
    int row = n, col = n, k = 0, x = 0;
    int col1 = col;

    for (i = 0; i < (row * 2); i++) 
	{
        r1 = rr1, r2 = rr2, r3 = rr3, r4 = rr4;
        c1 = cc1, c2 = cc2, c3 = cc3, c4 = cc4;

        for (j = 1; j <= col; j++) 
		{
            if (i == 0 || i % 4 == 0) 
			{
                a[r1][c1] = num[k++];
                c1++;
            } 
			else if (i == 1 || i % 4 == 1) 
			{ 
                a[r2][c2] = num[k++];
                r2++;
            } 
			else if (i == 2 || i % 4 == 2) 
			{ 
                a[r3][c3] = num[k++];
                c3--;
            } 
			else if (i == 3 || i % 4 == 3) 
			{ 
                a[r4][c4] = num[k++];
                r4--;
            }
        }

        if (x == 0) 
		{
            col--;
            x = 1;
        } 
		else if (i % 2 == 0) 
		{
            col--;
        }

        if (i == 0 || i % 4 == 0) 
		{
            rr1++;
            cc1++;
        } 
		else if (i == 1 || i % 4 == 1) 
		{
            rr2++;
            cc2--;
        } 
		else if (i == 2 || i % 4 == 2) 
		{
            rr3--;
            cc3--;
        } 
		else if (i == 3 || i % 4 == 3) 
		{
            rr4--;
            cc4++;
        }
    }

    // Display the spiral matrix
    cout << "\nSpiral Matrix:\n";
    cout << "\n";
    for (i = 0; i < n; i++) 
	{ 
        for (j = 0; j < col1; j++) 
		{
            cout << a[i][j] << "\t";
        }
        cout << endl;
    }

    // Traverse the matrix in spiral order
    cout<<"Traverse of a matrix:\n"<<endl;

    int top=0, bottom=n-1, left=0, right=n-1;
    while (top <= bottom && left <= right) 
    {
        for (int i = left; i <= right; i++)
        {
            cout << a[top][i] << " ";
        }
        top++;

        for (int i = top; i <= bottom; i++)
        {
            cout << a[i][right] << " ";
        }
        right--;

        if (top <= bottom) 
        {
            for (int i = right; i >= left; i--)
            {
                cout << a[bottom][i] << " ";
            }
            bottom--;
        }

        if (left <= right) 
        {
            for (int i = bottom; i >= top; i--)
            {
                cout << a[i][left] << " ";
            }
            left++;
        }
    }
    cout << endl;

    return 0;
}