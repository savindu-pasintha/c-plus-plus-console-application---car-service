#include <iostream>
using namespace std;

int main()
{
    int age[3];
    int sum;
    
    
    for( int i=0;i<3; i++ )
    {   
	
	    cout<<"input 1 to to valuse numbers"<<endl;
    	cin>>age[i];
    	
    }

    	cout<<endl;
    	system("cls");
    	/*printing we inputed */
    
     for( int i=0;i<10; i++ )
    {   
	
	    cout<<age[i]<<" ";
	    	cout<<endl;
	    	/*printing we input value sum */
    
    
	   	 sum=sum+age[i];

	}
	
	cout<<"sum is"<<sum<<endl;



	cout<<endl;
    return 0;
}
