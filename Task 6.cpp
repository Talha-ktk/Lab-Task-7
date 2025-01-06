#include<iostream>
using namespace std;

int main()
{
	
	int arr[10];
	
	int positive_count=0,negetive_count=0,zero_count=0;
	
	cout<<"Enter 10 integer values:";
	
	for(int i=0;i<10;i++)
	{
		
	  cin>>arr[i];
		
      if(arr[i]>0)
      {
      	
      	positive_count++;
      	
	  }
	  else if(arr[i]<0)
	  {
	  	
	  	negetive_count++;
	  	
	  }
	  else
	  {
	  	
	  	zero_count++;
	  	
	  }
	  
    }
    
    cout<<"Positive numbers:"<<positive_count<<endl;
    
    cout<<"Negetive numbers:"<<negetive_count<<endl;
    
    cout<<"Zeros:"<<zero_count<<endl;
    
    return 0;
    
}  
