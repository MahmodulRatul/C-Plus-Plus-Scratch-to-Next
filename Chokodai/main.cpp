#include <iostream>

using namespace std;

int main()
{
	int n;
	cin>>n;
	int x = (4*n);
	int arr1[x];
	int cnt;
	for (int i=0; i<x; i++)
	{
		cin >> arr1[i];
		if (arr1[i] == NULL)
		{
			break;
		}
	}

	for (int i=1; i<=n; i++)
	{
		for (int j = 0; j<x; j++)
		{
			if(arr1[j]==i)
			{
			cnt++;
			}
		}

		if(cnt != 4)
		{
			cout<<i<<"is missing"<<endl;
		}
	}
    cout << "" << endl;
    return 0;
}
