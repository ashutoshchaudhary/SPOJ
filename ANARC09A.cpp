#include <iostream>
#include <stack>
#include <string>

using namespace std;

int main(int argc, char const *argv[])
	{
		int count = 1;
		string a;

		cin >> a;

		while(a[0] != '-')
			{
				stack<char> s;
				int c = 0, o = 0;

				for(int i = 0; i < a.length(); i++)
					{
						if(a[i] == '{')
							s.push('{');

						if(a[i] == '}')
							{
								if(!s.empty())
									{
										s.pop();
									}
								else
									c++;
							}
					}

				while(!s.empty())
					{
						s.pop();
						o++;
					}

				//if(c == o)
				cout << count << ". " << (c + o) / 2 << endl;
				//else if(c != 0)
				//	cout << count << ". " << c/2 << endl;
				//else
				//	cout << count << ". " << o/2 << endl;

				count++;

				cin >> a;				
			}	

		return 0;
	}