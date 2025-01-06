#include<iostream>
using namespace std;

int main()
{
	
	int i = 0  ;
	
	int arr[5] = {3,9,6,7,2};
	
	int sum = 0;
	
	do
	{
		
		sum+=arr[i];
		i++;

	}
	while(i<5);
	{
		
		cout<<"sum : "<<sum<<endl;
		
	}

	return 0;
	
}
