#include "MatrixLib.h"
#include <vector>
using namespace MatrixLib;
using namespace std;
vector <vector<int>> Class1::Transpose(vector <vector<int>>& matrix)
{
	int rows = matrix.size();
	int columns = matrix[0].size();
	vector <vector <int>> transpose;
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < columns; j++)
		{
			transpose[j][i] = matrix[i][j];
		}
	}
	return transpose;
}