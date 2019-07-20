#include<iostream>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int t;
	cin >> t;

	while(t--)
	{
		long long int n;
		cin >> n;

		long long int mean = 0;

		long long int a[n];
		for(int i=0;i<n;i++)
		{
			cin >> a[i];
			mean+=a[i];
		}

		if(mean%n==0)
		{
			mean = mean/n;
		}
		else
		{
			mean =0;
		}
		
		int flag = -5;

		if(mean!=0)
		{
			for(int i=0;i<n;i++)
			{
				if(a[i]==mean)
				{
					flag = i+1;
					i=n;
				}
			}
		}

		if(flag>-5)
		{
			cout << flag;
		}
		else
		{
			cout << "Impossible";
		}
		cout << "\n";

	}
}