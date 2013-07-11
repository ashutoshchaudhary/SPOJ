/* 
   SPOJ Problem Set (Classical)
   2727. Army Strength
   Problem Code: ARMY
*/

#include <iostream>
#include <vector>

using namespace std;

int main(int argc, char const *argv[])
	{
		long long int t, ng, nm;
		vector<long long int> ngl;
		vector<long long int> nml;
		
		cin >> t;

		for(long long int w = 0; w < t; w++)
			{
				cout << endl;

				cin >> ng >> nm;
				long long int x;

				for(long long int i = 0; i < ng; i++)
					{
						cin >> x;
						ngl.push_back(x);
					}

				for(long long int i = 0; i < nm; i++)
					{
						cin >> x;
						nml.push_back(x);
					}

				long long int maxg = ngl[0];
				long long int maxm = nml[0];

				for(long long int i = 0; i < ng; i++)
					if(ngl[i] > maxg)
						maxg = ngl[i];

				for(long long int i = 0; i < nm; i++)
					if(nml[i] > maxm)
						maxm = nml[i];

				if(maxg >= maxm)
					cout << "Godzilla" << endl;
				else
					cout << "MechaGodzilla" << endl;
				nml.clear();
				ngl.clear();
			}
	

		return 0;
	}