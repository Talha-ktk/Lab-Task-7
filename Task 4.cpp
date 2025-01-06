#include <iostream>
using namespace std;

int main()
{
   
    int arr[10] = {8, 67, 98, 123, 9, 20, 3, 10, 14, 11};

    
    for (int i = 0; i < 10; i++) 
	{
       
        if (arr[i] % 2==0)
		{
			
            cout << arr[i] << " is even " << endl;
            
        } 
		else 
		{
			
            cout << arr[i] << " is odd  " << endl;
            
        }
        
    }

    return 0;
    
}

