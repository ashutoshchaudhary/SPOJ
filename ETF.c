/* 
   SPOJ Problem Set (Classical)
   4141. Euler Totient Function
   Problem Code: ETF
*/

#include <stdio.h>

long long int euler(long long int x)
  {
		int i;
		long long int result = x;
		
		for(i = 2; i*i <= x; i++)
			{
				if(x % i == 0)
					result -= result / i;
				while(x % i == 0)
					x = x / i;
			}
		
		if(x > 1)
			result -= result / x;

		return result;
	}

int main()
	{
		int t, i;
		long long int n;

		scanf("%d", &t);

		for(i = 0; i < t; i++)
			{
				scanf("%lld", &n);
				printf("%lld\n", euler(n));
			}
		return 0;
	}
