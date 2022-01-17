#include<iostream>
#include<string>
using namespace std;
void main()
{
	char a[100],b[100];
	cin.getline(a, 256,'\n');
	int t = strlen(a);
	for (int i = 0; i < t; i++)
	{
		if (isupper(a[i]))
		{
			a[i]=tolower(a[i]);
		}
	}
	for (int i = 0; i <t; i++)
	{
		for (int j = t; j >=0; j--)
		{
			if (i != j)
			{
				if (a[i] == a[j])
				{
					b[i] = ')';
				}
			}
		}
		if (b[i] != ')')
		{
			b[i] = '(';
		}
		cout << b[i];
	}
}