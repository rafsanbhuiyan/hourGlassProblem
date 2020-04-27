#include <vector>
#include <iostream>
#include <cmath>
#include <algorithm>

using namespace std;

int hourglassSum(vector<vector<int>> arr)
{
	int result = INT_MIN;

	for (int r = 0; r <= 3; r++)
	{
		for (int c = 0; c <= 3; c++)
		{
			int sum = arr[r][c] + arr[r][c + 1] + arr[r][c + 2] +
				arr[r + 1][c + 1] +
				arr[r + 2][c] + arr[r + 2][c + 1] + arr[r + 2][c + 2];

			result = max(result, sum);
		}
	}

	return result;
}

int main()
{
	vector<vector<int>> arr(6);
	for (int i = 0; i < 6; i++) {
		arr[i].resize(6);

		for (int j = 0; j < 6; j++) {
			cin >> arr[i][j];
		}

		cin.ignore(numeric_limits<streamsize>::max(), '\n');
	}

	int result = hourglassSum(arr);

	cout << result << "\n";

	return 0;
}
