#include<iostream>
#include<string>
using namespace std;
int main()
{
    string u,p;
    cout<<"PLEASE INPUT YOUR PASSWORD"<<endl;
    cin>>u;//a username
    cout<<"PLEASE INPUT YOUR PASSWORD"<<endl;
    cin>>p;//b password
    system("cls");// clear to uda thina ewa
    if((u=="a") && (p=="b"))
    {
	
	    cout<<"****************************"<<endl;
 	    cout<<"****************************"<<endl;
 	    cout<<"****************************"<<endl;
 	    cout<<"****! SUCCESFULL LOGIN !****"<<endl;
 	    cout<<"****************************"<<endl;
 	    cout<<"****************************"<<endl;
 	    cout<<"****************************"<<endl;
   }
 	    
	else 
	{
	cout<<"**************************"<<endl;
 	cout<<"**************************"<<endl;
 	cout<<"**************************"<<endl;
	cout<<"*******LOGIN FAILED*******"<<endl;
	cout<<"**************************"<<endl;
 	cout<<"**************************"<<endl;
 	cout<<"**************************"<<endl;
   }
	
	
	
	
	return 0;
}

