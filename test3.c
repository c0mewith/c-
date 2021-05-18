#include <iostream>
using namespace std;

int max(unsigned long num)
{
	int temp;
	int sum = 0;
	while (num >= 10)
	{
		temp = num % 10;
		num = num / 10;
		sum += temp;
	}
	sum += num;
	return sum;
}		

int main(void)
{
	cout << max(5123);
	return 0;
}