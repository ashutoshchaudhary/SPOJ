/* 
   SPOJ Problem Set (Classical)
   3410. Feynman
   Problem Code: SAMER08F
*/

#include <iostream>

using namespace std;

int main()
	{
		int n, r;
		
		cin >> n;

		while(n)
			{
				r = (n * (n+1) * (2*n + 1))/6;
				cout << r << endl;
				cin >> n;
			}
		
		return 0;

	}
