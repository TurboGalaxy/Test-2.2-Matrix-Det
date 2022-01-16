#include <iostream>
using namespace std;
int main()
{
    float Determinan[2][2];
	float det;
	int i, j;
	for (i = 0; i < 2; i++)
	{
		for (j = 0; j < 2; j++)
		{
			cout << "Enter Your Number  " << i+1 << " and " << j+1 << ":" << endl;
			cin >> Determinan[i][j];
		}
	}
	det = Determinan[0][0] * Determinan[1][1] - Determinan[1][0] * Determinan[0][1];
	cout << "\nThe Determinan of Numbers is :\t" << det << endl;


	return 0;

}
