#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
#include<iterator>
using namespace std;
int main()
{
	string s;
	vector<char>v{'`','1','2','3','4','5','6','7','8','9','0','-','=', 'Q','W','E','R','T','Y','U','I','O','P','[',']','\\' , 'A','S','D','F','G','H','J','K','L',';','\'' , 'Z','X','C','V','B','N','M',',','.','/' };
	while (getline(cin, s))
	{
		for (int i = 0; i < s.size(); i++)
		{
			if (s[i] == ' ')
				cout << " ";
			else
			{
				auto it = find(v.begin(), v.end(), s[i]);
				if (it != v.end())
				{
					int index = distance(v.begin(), it);
					{
						cout << v[--index];
					}
				}
			}
		}
		cout << endl;
	}
	return 0;
}
