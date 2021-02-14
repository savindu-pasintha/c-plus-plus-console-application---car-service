#include <iostream>
using namespace std;
int main()
{
	
	int p[4];
	
	
	for(int i=0; i<4;i++)
	{	
	cin>>p[i];	
	}
	
	system("cls");
	/*print*/
	
	
		for(int i=0; i<4;i++)
	{	
	
    if( p[0] >  p[1])
    {
    	cout<<"max is "<<p[0];
	}
	
	else if( p[1] >  p[2])
    {
    	cout<<"max is "<<p[1];
	}
	  
	else if( p[2] >  p[3])
    {
    	cout<<"max is "<<p[2];
	}
	else
    {
    	cout<<"max is "<<p[3];
	}

    }	
cout<<endl;
	
	return 0;
	
}

