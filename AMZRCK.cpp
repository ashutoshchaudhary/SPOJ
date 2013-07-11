/* 
   SPOJ Problem Set (Classical)
   11932. Amz Rock
   Problem Code: AMZRCK
*/

#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
	{
		long long int a[45];
		int t, x;

		a[0] = 1;
		a[1] = 2;

		for(int i = 2; i < 45; i++)
			a[i] = a[i-1] + a[i-2];

		cin >> t;

		for(int i = 0; i < t; i++)
			{
				cin >> x;
				cout << a[x] << endl;
			}
		
		return 0;
	}