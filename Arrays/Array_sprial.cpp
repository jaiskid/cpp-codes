//Author : Neeraj jaiswal
//Date : 23th july 2019
#include <iostream> 
using namespace std; 

 
int main() 
{   int R,C;
    cin>>R>>C;
    int arr[10][10];

	for(int i=0;i<R;i++){
		for(int j=0;j<C;j++){
            //here is the change 
			cin>>arr[i][j];
		}
	}
 
    	int i, k = 0, l = 0; 
	int m=R;
	int n=C;
	// k - starting row index 
	// m - ending row index 
	// l - starting column index 
	// n - ending column index 
	// i - iterator 

	// initialize the count 
	int cnt = 0; 

	// total number of 
	// elements in matrix 
	int total = m * n; 

	while (k < m && l < n) 
	{ 
		if (cnt == total) 
			break; 

		// Print the first column 
		// from the remaining columns 
		for (i = k; i < m; ++i) 
		{ 
			cout << arr[i][l] << ", "; 
			cnt++; 
		} 
		l++; 

		if (cnt == total) 
			break; 

		// Print the last row from 
		// the remaining rows 
		for (i = l; i < n; ++i) 
		{ 
			cout << arr[m - 1][i] << ", "; 
			cnt++; 
		} 
		m--; 

		if (cnt == total) 
			break; 

		// Print the last column 
		// from the remaining columns 
		if (k < m) 
		{ 
			for (i = m - 1; i >= k; --i) 
			{ 
				cout << arr[i][n - 1] << ", "; 
				cnt++; 
			} 
			n--; 
		} 

		if (cnt == total) 
			break; 

		// Print the first row 
		// from the remaining rows 
		if (l < n) 
		{ 
			for (i = n - 1; i >= l; --i) 
			{ 
				cout << arr[k][i] << ", "; 
				cnt++; 
			} 
			k++; 
		}
	

	}
	cout<<"END";
 
 
	return 0; 
} 
