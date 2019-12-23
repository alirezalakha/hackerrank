#include <iostream>
#include <vector>

using namespace std;

main () 
{
	int number; vector<int> remainder;
	cin >> number; int consecutiveOne = 1;
	while (number > 0)
	{
		remainder.push_back(number%2);
		number /= 2;
	}
	for (int i=0; i<remainder.size(); i++)
	{
		if (remainder[i] == 1 and remainder[i] == remainder[i+1])
		{
			consecutiveOne += 1;
		}
		cout << remainder[i] << " ";
	}
	cout << endl;
	cout << consecutiveOne << endl;
}