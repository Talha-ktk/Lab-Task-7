#include <iostream>
using namespace std;

int main() 
{
    
    int arr[6] = {82, 59, 65, 43, 98, 78};

    int i = 5;

    do 
	{
		
        cout << arr[i] <<" ";
        i--;  
        
    } 
	while (i>=0);

    return 0;
    
}

