#include <iostream>

using namespace std;

int main() {
	int x, y;
	
	cout << "Enter the x-coordinate value: ";
	cin >> x;
	
	cout << "Enter the y-coordinate value: " ;
	cin >> y;

	if (x > 0) {
		if (y > 0)
			cout << "Quadrant : 1";
		else if (y < 0)
			cout << "Quadrant : 4";
	}
	else if(x<0)
	{
		if(y>0)
			cout << "Quadrant : 2";
		else if (y<0)
			cout << "Quadrant : 3";
	}
}