#include "ConsecutiveOnes.h"

int ConsecutiveOnes::findConsecutiveOnes(int n)
{
	/*int n;*/
	/*cin >> n;*/

	int num = n;
	vector<int> temp = {};

	while (num > 0) {
		temp.push_back(num % 2);
		num = num / 2;
	}
	temp.push_back(num % 2); 

	int sz = temp.size();
	int counter = 0;
	int maxCount = 0; 
	for (int i = sz - 1; i >= 0; i--) {
		/*cout << temp[i] << " "; */
		if (temp[i] == 1) counter++;
		else {
			if (counter > maxCount) maxCount = counter;
			cout << maxCount << " "; 
			counter = 0;
		}
	}
	if (counter > maxCount) maxCount = counter; 
	cout << endl;
	return maxCount; 
}
