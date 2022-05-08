#include<bits/stdc++.h>
using namespace std;
int main()
{
	string a;
	int sum=0;
	while(getline(cin,a))
	{
		for(int i=0;i<32;i++)
		{
			sum=a[i]-'0'+2*sum;
			if(i==7||i==15||i==23||i==31) 
			{
				cout<<sum;
				if(i!=31)
				{
					cout<<".";
				}
				sum=0;
			}
		}
	}
	return 0;
}

