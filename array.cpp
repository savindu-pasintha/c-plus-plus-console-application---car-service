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
    	
    	system("cls");
    	/*printing we inputed */
    
     for( int i=0;i<10; i++ )
    {   
	
	    cout<<age[i]<<" ";
	   	
	}
		system("cls");
		/*printing we input value sum */
    
     sum=age[0]+age[1]+age[2];
cout<<"sum is"<<sum<<endl;



	cout<<endl;
    return 0;
}
