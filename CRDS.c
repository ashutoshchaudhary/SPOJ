/* 
   SPOJ Problem Set (Classical)
   10509. Cards
   Problem Code: CRDS
*/

#include <stdio.h>

int main()
  {
		int t, i;
		long long int n, k;

		scanf("%d", &t);

		for(i = 0; i < t; i++)
			{
				scanf("%lld", &n);

				k = 3 * ((n * (n + 1))/2) - n;
				k = k % 1000007;

				printf("%lld\n", k);

			}
		return 0;
	}
