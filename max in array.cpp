#include <iostream>
using namespace std;

int main()
{
    int age[3];
    int sum;
    
    
    for( int i=0;i<3; i++ )
    {   
	
	    cout<<"input 1 to 3to valuse numbers"<<endl;
    	cin>>age[i];
    }
    
     for( int i=0;i<10; i++ )
    {   
	
	 
	    if(age[0] < age[i])
           age[0] = age[i];	
	}
		system("cls");
		/*printing we input value sum */
    
    
cout<<"array max"<<age[0]<<endl;



	cout<<endl;
    return 0;
}
