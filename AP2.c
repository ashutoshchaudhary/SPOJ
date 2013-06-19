/* 
   SPOJ Problem Set (Classical)
   10509. Complete The Series (Easy)
   Problem Code: AP2
*/

#include <stdio.h>

int main()
  {
		long long int t, a, n, d, p , q, r, j, i;

		scanf("%lld", &t);

		for(j = 0; j < t; j++)
			{
				scanf("%lld%lld%lld", &p, &q, &r);

				n = (2 * r) / (p + q);
				d = (q - p) / (n - 5);
				a = p - (2 * d);

				printf("%lld\n", n);

				for(i = 0; i < n - 1; i++)
					printf("%lld ", a + (i * d));

				printf("%lld ", a + (i * d));

				printf("\n");
			}
		return 0;
	}
