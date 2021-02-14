#include <iostream>
using namespace std;

void mini();
void car();
void van();

int main()
{
	int b;
cout<<"vehicle payment";
	cout<<"1-mini";
	cout<<"2-car";
	cout<<"3-van";
	cout<<"enter vehicle type";
	
	switch(b)
	   { 
	    case 1:{ mini();
	            break;}
	   
		case 2:{ car();
			break;}
			
			
		case 3:{ van();
			break;}	
     	}

	return 0;
}

void mini(){
	int m[3]={30,200,1000};
	
	
}
