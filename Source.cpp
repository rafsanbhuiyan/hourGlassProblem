#include <vector>
#include <iostream>
#include <cmath>
#include <algorithm>

using namespace std;

//funtion to calculate the sum of the hourglass with the maximum result
int hourglassSum(vector<vector<int>> arr)
{
	//initialize variable result as INT_MIN (built in)
	int result = INT_MIN;
	
	//Nested for loop to loop through the matrix, calculate and compare sums to print the max sum
	for (int r = 0; r <= 3; r++)
	{
		for (int c = 0; c <= 3; c++)
		{
			//Initialize sum and calculate the proper integers in the array
			int sum = arr[r][c] + arr[r][c + 1] + arr[r][c + 2] +
				arr[r + 1][c + 1] +
				arr[r + 2][c] + arr[r + 2][c + 1] + arr[r + 2][c + 2];
			
			//set the result for the max sum
			result = max(result, sum);
		}
	}
	
	//return result
	return result;
}


//Main function
int main()
{
	//initialize vector
	vector<vector<int>> arr(6);
	
	// Nested for loop for user input
	for (int i = 0; i < 6; i++) {
		arr[i].resize(6);

		for (int j = 0; j < 6; j++) {
			cin >> arr[i][j];
		}

		cin.ignore(numeric_limits<streamsize>::max(), '\n');
	}

	//Set result
	int result = hourglassSum(arr);
	
	//Print result
	cout << result << "\n";

	return 0;
}
