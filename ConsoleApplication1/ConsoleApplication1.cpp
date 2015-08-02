// ConsoleApplication1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;
int main()
{
	long n, k,i,t,count;
	int *res;
	cin >> n;
	cin >> k;
	res = new int [n+1];
    for (i = 1; i <= k; i++)
	{
		cin >> t;
		if (t == 1)
		{
			res[1] = 0;
			res[2] = 0;
		}
		else
		{

			res[t - 1] = 0;
			res[t] = 0;
			res[t + 1] = 0;
		}

	}
	for (i = 1; i <= n; i++)
	{
		cout<<res[i]<<endl;

	}

	count = 0;
	for (i = 1; i <= n; i++)
	{
		if (res[i] == 0)
		{

			continue;
		}
		else 
		{
			count++;
			res[i - 1] = 0;
			res[i + 1] = 0;

		}


	}
	cout << count+k;

    return 0;
}

