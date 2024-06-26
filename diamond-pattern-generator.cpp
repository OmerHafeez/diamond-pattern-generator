#include<iostream>
using namespace std;
int main()
{
	int i,j,m,n,k,space,h=2,a=1;
	cout<<"Enter the NUmber of rows: ";
	cin>>n;
	for(int i=1;i<=h;i++)
	{
		space=n;
		for(int i=1;i<=n;i++)
		{
			for(int j=space;j>=1;j--) //prints the first spaces
			{
				cout<<" ";
			}
		for(int j=i;j>=1;j--)	//prints the half of the uper triangle
			{
				cout<<j;
			}
		for(int k=1;k<=i;k++)	//prints the other half of the uper triangle
			{
				cout<<k;
			}
			
			for(int j=space;j>=1;j--)	//prints the spaces of uper triangle
			{
				cout<<" ";
			}
			//repeat for the other diamoand
				for(int j=(space-1);j>=1;j--)
			{
				cout<<" ";
			}
		for(int j=i;j>=1;j--)
			{
				cout<<j;
			}
		for(int k=1;k<=i;k++)
			{
				cout<<k;
			}
		cout<<endl;
		space--;
	}
		
		m=n-1;
		for(i=1;i<=n;i++)
		{
			for(k=0;k<=i;k++)	//print the spaces of lower triangle
			{
				cout<<" ";
			}
			for(j=m;j>=1;j--)	//print the half of lower triangle
			{
				cout<<j;
			}
			for(j=1;j<=m;j++)	//print the other half of lower triangle
			{
				cout<<j;
			}
			for(int z=(i);z>=1;z--)	//print the spaces of lower triangle
			{
				cout<<" ";
			}
			//repeat for the second diamond
			for(k=0;k<=i;k++)
			{
				cout<<" ";
			}
			for(j=m;j>=1;j--)
			{
				cout<<j;
			}
			for(j=1;j<=m;j++)
			{
				cout<<j;
			}
			for(int z=(i);z>=1;z--)
			{
				cout<<" ";
			}
			cout<<endl;
			m--;
		}
	
	


}
}



