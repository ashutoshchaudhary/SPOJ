/* 
   SPOJ Problem Set (Classical)
   10582. Subarrays
   Problem Code: ARRAYSUB
*/

#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
	{
		long long int n, k, a[1000000];

		cin >> n;

		for(int i = 0; i < n; i++)
			cin >> a[i];

		cin >> k;
		
		long long int i = 0, w = i;
		
		while((w+k) <= n)
			{

				//long long int w = i; 
				long long int large = a[w];
				
				for(i = w; i < w+k; i++)
					{
						if(a[i] > large)
							large = a[i];
					}

				cout << large << " ";
				
				w = w + 1;
			}
		
		cout << endl;
		
		return 0;
	}