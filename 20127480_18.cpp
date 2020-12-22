#include<iostream>
using namespace std;
int main()
{
	int n,i,divide,count,z=0,k,count2=0;
	cin>>n;
	divide =n/2;
	int arr[n],arr1[n];
	for(i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	
	for(i=0;i<n;i++)
	{
		if(arr[i]>divide)
		{

		if(z>0)
		{
			for(k=0;k<z;k++)
			{
				if(arr1[k] != arr[i])
				count2++;
			}
			if(count2!=0)
			z++;
			count2=0;
		};
			if(z==0)
		{
			arr1[z]=arr[i];
			z++;
		};
		
	};
	}
	
	cout<<z;
	return 0;
	

}
