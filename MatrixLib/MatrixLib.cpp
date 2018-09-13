// This is the main DLL file.
#include <iostream>
#include "stdafx.h"
#include <vector>
#include "MatrixLib.h"

using namespace MatrixLib;
using namespace std;
void main()
{
	vector<vector<int> > matrix{ { 1, 2, 3 },
	{ 4, 5, 6 },
	{ 7, 8, 9 } };
	Class1 obj1;
	 obj1.Transpose(matrix);

}