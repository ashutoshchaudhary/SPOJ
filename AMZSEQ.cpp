/* 
   SPOJ Problem Set (Classical)
   11931. Amz Word
   Problem Code: AMZSEQ
*/

#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
	{
		long long int a[24];
		int t, x;

		a[0] = 1;
		a[1] = 3;

		for(int i = 2; i < 24; i++)
			a[i] = 2*a[i-1] + a[i-2];
	
		cin >> x;
		cout << a[x] << endl;			
		
		return 0;
	}