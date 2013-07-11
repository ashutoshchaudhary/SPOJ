/* 
   SPOJ Problem Set (Classical)
   10582. Subarrays
   Problem Code: ARRAYSUB
*/

#include <iostream>
#include <vector>

using namespace std;

int main(int argc, char const *argv[])
	{
		long long int n, k, a[1000000];
		
		vector<long long int> v;
		
		cin >> n;

		for(long long int i = 0; i < n; i++)
			cin >> a[i];

		cin >> k;

		long long int large = -1;

		for(long long int i = 0; i < k; i++)
			{
				if(a[i] > large)
					large = a[i];
			}
		v.push_back(large);

		//a[k-1] = large;

		for(long long int i = k; i < n; i++)
			{
				if(a[i] > v[i-k])
					v.push_back(a[i]);
				else
					{
						if(v[i-k] == a[i-k])
							{
								long long int large = -1, t = i-k+1;

								for(long long int j = t; j < t+k; j++)
									{
										if(a[j] > large)
											large = a[j];
									}
								v.push_back(large);
							}

						else
							v.push_back(v[i-k]);
					}
			}

		for(long long int i = 0; i < v.size(); i++)
			cout << v[i] << " ";

		cout << endl;
		
		return 0;
	}