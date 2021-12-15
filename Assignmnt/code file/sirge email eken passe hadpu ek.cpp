/* SAVINDU PASINTHA TOUR MATE CAB SERVICE */
//mulin compilr run krl tour mate kiyn ek nawoth norml run krnn it psse

#include <iostream>
#include <fstream>
#include <string>
#include <windows.h>
#include <unistd.h>
#include <cstdlib>
#include <ctime>
using namespace std;

HANDLE out = GetStdHandle(STD_OUTPUT_HANDLE);
 
void fontsize(int,int);  
void welcome();
void datetime();
void registration();
void login();
void menu();
void exit();
void viewdetailsmenu();
void vehicledetailsviewmenu();
void driverdetailsviewmenu();
void editdetailsmenu();
void updatedetailsmenu();
void vdu();
void acd();
void emp();
void bookingdetailsmenu();
void bookin();
void cleardetailsmenu();
void clvd();
void clacd();
void clemp();
void clbookin();
void payment();
void aboutcompanydetailsmenu();
void houwtousesoftware();

int main()  
{ 
   sleep(3);
   welcome();
   system("cls");
   login();        
   return 0;
}

void registration()
{
    fontsize(24,24);
	system("Color D");
	cout<<"\t\t\t\t\t"<<endl;
    cout<<"\t\t\t\t\t"<<endl;	
	cout<<"\t\t\t\t\t************************************************************"<<endl; 
	cout<<"\t\t\t\t\t************************************************************"<<endl;
	cout<<"\t\t\t\t\t**                                                        **"<<endl;
	cout<<"\t\t\t\t\t**                   REGISTRATION FORM                    **"<<endl;
	cout<<"\t\t\t\t\t**                                                        **"<<endl;
	cout<<"\t\t\t\t\t************************************************************"<<endl;
	cout<<"\t\t\t\t\t************************************************************"<<endl;
	cout<<"\t\t\t\t\t"<<endl;
	cout<<"\t\t\t\t\t"<<endl;
	
	string w;
	ofstream myfile;  
    myfile.open ("registration form.txt",ios::app); 
    myfile<<"*****USER REGISTRATION DETAILS*****"<<endl;
    myfile<<"."<<endl;
    
    cout<<"\t\t\t\t\t1-ENTER YOUR FIRST NAME--"<<" ";        cin>>w;   myfile<<"1-FIRST NAME--"<<w<<endl;
	cout<<"\t\t\t\t\t2-ENTER YOUR LAST NAME--"<<" ";         cin>>w;   myfile<<"2-LAST NAME--"<<w<<endl;	
	cout<<"\t\t\t\t\t3-ENTER YOUR ADDRESS--"<<" ";           cin>>w;   myfile<<"3-ADDRESS--"<<w<<endl;
	cout<<"\t\t\t\t\t4-ENTER YOUR TELEPHONE NUMBER--"<<" ";  cin>>w;   myfile<<"4-TELEPHONE NUMBER--"<<w<<endl;	
	cout<<"\t\t\t\t\t5-ENTER YOUR EMAIL ADDRESS--"<<" ";     cin>>w;   myfile<<"5-EMAIL--"<<w<<endl;
	cout<<"\t\t\t\t\t6-ENTER YOUR PASSWORD--"<<" ";          cin>>w;   myfile<<"6-PASSWORD--"<<w<<endl; 
	cout<<"\t\t\t\t\t7-ENTER YOUR PASSWORD AGAIN--"<<" ";    cin>>w;   myfile<<"7-PASSWORD--"<<w<<endl;  
	myfile<<" "<<endl;  
	
	cout<<"\t\t\t\t\t"<<endl;
	cout<<"\t\t\t\t\t REGISTRATION SUCCESFULL !"<<endl;
	
	sleep(3);
	system("cls");
	menu(); 			
}

void login()
{  
    fontsize(24,24);
    cout<<"\t\t\t\t\t"<<endl;
    datetime();
    system("Color F");
    cout<<"\t\t\t\t\t"<<endl;
	cout<<"\t\t\t\t\t************************************************************"<<endl; 
	cout<<"\t\t\t\t\t************************************************************"<<endl;
	cout<<"\t\t\t\t\t**                                                        **"<<endl;
	cout<<"\t\t\t\t\t**                        LOGIN                           **"<<endl;
	cout<<"\t\t\t\t\t**                                                        **"<<endl;
	cout<<"\t\t\t\t\t************************************************************"<<endl;
	cout<<"\t\t\t\t\t************************************************************"<<endl;
	cout<<"\t\t\t\t\t"<<endl;
	cout<<"\t\t\t\t\t"<<endl;
	
    string u,p;//u=user name,p=password variable
    cout<<"\t\t\t\t\t1-PLEASE ENTER USER NAME(--user----)-"<<" ";   cin>>u;
    cout<<"\t\t\t\t\t2-PLEASE ENTER  PASSWORD(--pass99--)-"<<" ";   cin>>p;
    
    if((u=="user") && (p=="pass99"))
	{
		cout<<endl;
		cout<<endl;
	    cout<<"\t\t\t\t\t LOGIN SUCCESFULL !"<<endl;
	
	sleep(3);
	system("cls");
	
	   while(1)
	  {
	   menu();
      }
		
	}
	else
	{
		cout<<endl;
		cout<<endl;
		cout<<"\t\t\t\t\t LOGIN FAIL !"<<endl;	
		sleep(3);
		system("cls");
		login();
	}	
}

void menu()
{   
    fontsize(24,24);
    cout<<"\t\t\t\t\t"<<endl;
    datetime();
    system("Color 9");
    cout<<"\t\t\t\t\t"<<endl;
	cout<<"\t\t\t\t\t************************************************************"<<endl; 
	cout<<"\t\t\t\t\t************************************************************"<<endl;
	cout<<"\t\t\t\t\t**                                                        **"<<endl;
	cout<<"\t\t\t\t\t**                         MENU                           **"<<endl;
	cout<<"\t\t\t\t\t**                                                        **"<<endl;
	cout<<"\t\t\t\t\t************************************************************"<<endl;
	cout<<"\t\t\t\t\t************************************************************"<<endl;
	cout<<"\t\t\t\t\t"<<endl;
	cout<<"\t\t\t\t\t"<<endl;
	
	cout<<"\t\t\t\t\t 1:to VIEW"<<endl;
	cout<<"\t\t\t\t\t 2:to EDIT"<<endl;
	cout<<"\t\t\t\t\t 3:to PAYMENT BILLING"<<endl;
	cout<<"\t\t\t\t\t 4:to REGISTRATION TO SYSTEM"<<endl;
	cout<<"\t\t\t\t\t 5:to LOG OUT"<<endl;
	cout<<"\t\t\t\t\t 6:to HOW TO USE SOFTWARE"<<endl;
	cout<<"\t\t\t\t\t 7:to EXIT"<<endl;
	cout<<"\t\t\t\t\t"<<endl;
	cout<<"\t\t\t\t\t"<<endl;
	
	int p;
    cout<<"\t\t\t\t\t ENTER 1--7 HEAR---- ";
    cin>>p;
    switch(p)
    {
        case 1:
 	    {
 	    system("cls");
 	    viewdetailsmenu();        	    	 
 	    system("pause");
 	      break;
		}
 		case 2:
 	    {
 	    	system("cls");
 	    	editdetailsmenu();
 	      system("pause");
		  break;	
		}  
		  
		case 3:
		{
		 	system("cls");
		 	payment();
		 	system("pause");
 	      break;
		} 
				
		case 4:
 		{
 			system("cls");
 	        registration();
 	        system("pause");
 	      break;
 	    } 
 	      	 		
		case 5:
 	    {
 	    	system("cls");
 	 	    login();
 	        system("pause");
 	    break;
		}
								
 		case 6:
 		{
 	 	   system("cls");
 		   houwtousesoftware();
 		   system("pause");
 		break;
	    }
	    
	 	case 7:
 		{
 			system("cls");
 	        exit ();
 	    }
 	    default:
 	    cout<<"\t\t\t\t\tplease enter the valid option..."<<endl;
 	    	sleep(3);
 	    	menu();
	}	system("cls");			
}

void exit()
{
	fontsize(24,24);
	system("Color A");
    cout<<"\t\t\t\t\t"<<endl;
    cout<<"\t\t\t\t\t"<<endl;
	cout<<"\t\t\t\t\t************************************************************"<<endl; 
	cout<<"\t\t\t\t\t************************************************************"<<endl;
	cout<<"\t\t\t\t\t**                                                        **"<<endl;
	cout<<"\t\t\t\t\t**                                                        **"<<endl;
	cout<<"\t\t\t\t\t**                                                        **"<<endl;
	cout<<"\t\t\t\t\t**                                                        **"<<endl;
	cout<<"\t\t\t\t\t**                                                        **"<<endl;
	cout<<"\t\t\t\t\t**                                                        **"<<endl;
	cout<<"\t\t\t\t\t**                                                        **"<<endl;
	cout<<"\t\t\t\t\t**                 THANK YOU ........ !                   **"<<endl;
	cout<<"\t\t\t\t\t**                                                        **"<<endl;
	cout<<"\t\t\t\t\t**                                                        **"<<endl;
	cout<<"\t\t\t\t\t**                                                        **"<<endl;
	cout<<"\t\t\t\t\t**                                                        **"<<endl;
	cout<<"\t\t\t\t\t**                                                        **"<<endl;
	cout<<"\t\t\t\t\t**                                                        **"<<endl;
	cout<<"\t\t\t\t\t**                                                        **"<<endl;
	cout<<"\t\t\t\t\t************************************************************"<<endl;
	cout<<"\t\t\t\t\t************************************************************"<<endl;
	cout<<"\t\t\t\t\t"<<endl;
	cout<<"\t\t\t\t\t"<<endl;
	
	sleep(3);
	exit (0);
}

void viewdetailsmenu()
{
	fontsize(24,24);
	cout<<"\t\t\t\t\t"<<endl;
    datetime();
	system("Color A");
    cout<<"\t\t\t\t\t"<<endl;
 	cout<<"\t\t\t\t\t************************************************************"<<endl;
 	cout<<"\t\t\t\t\t************************************************************"<<endl; 
	cout<<"\t\t\t\t\t************************************************************"<<endl;
	cout<<"\t\t\t\t\t**                                                        **"<<endl;
	cout<<"\t\t\t\t\t**                     VIEW  DETAIL                       **"<<endl;
	cout<<"\t\t\t\t\t**                                                        **"<<endl;
	cout<<"\t\t\t\t\t************************************************************"<<endl;
	cout<<"\t\t\t\t\t************************************************************"<<endl;
	cout<<"\t\t\t\t\t"<<endl;
	cout<<"\t\t\t\t\t"<<endl;
	    
 	cout<<"\t\t\t\t\t 1)---VEHICLE DETAILS"<<endl;
 	cout<<"\t\t\t\t\t 2)---DRIVER DETAILS"<<endl;   cout<<"\t\t\t\t\t 3)---BOOKING DETAILS"<<endl;
 	cout<<"\t\t\t\t\t 4)---ABOUT COMPANY"<<endl;
 	cout<<"\t\t\t\t\t 5)---LOG OUT"<<endl;
 	cout<<"\t\t\t\t\t 6)---BACK"<<endl;
 	cout<<"\t\t\t\t\t 7)---EXIT"<<endl;
 	cout<<"\t\t\t\t\t"<<endl;
 	    
 	cout<<"\t\t\t\t\t ENTER 1--6 HEAR---- ";
 	int j;
 	cin>>j;
 	switch(j) 
 	   {
 	     case 1:
 	        {    
 	        system("cls");
 	        vehicledetailsviewmenu();	
 	         break;	
	        }        
			case 2:
 	        {    
            system("cls");
 	         driverdetailsviewmenu();	
 	        break;	
		    }
			case 3:
 	        {    
	        system("cls");
 	        bookingdetailsmenu();
 	        break;	
		    }
 	        case 4:
 	        {    
	        system("cls");
 	        aboutcompanydetailsmenu();
 	    	break;	
		    }         	
	        case 5:
            { 
            system("cls");
            login();
			break;
			} 
			case 6:
			{
		    system("cls");
		    menu();	
            } break;					
	        case 7:
			{
		    system("cls");
			exit();
			break;
		    }				
	        default:
			{
		    system("cls");
			viewdetailsmenu();
			}
		}		
}
void vehicledetailsviewmenu()
{
	fontsize(24,24);
 	system("Color D");	             
    cout<<"\t\t\t\t\t"<<endl;
    cout<<"\t\t\t\t\t"<<endl;
 	cout<<"\t\t\t\t\t************************************************************"<<endl;
 	cout<<"\t\t\t\t\t************************************************************"<<endl;
	cout<<"\t\t\t\t\t************************************************************"<<endl;
	cout<<"\t\t\t\t\t**                                                        **"<<endl;
	cout<<"\t\t\t\t\t**                    VEHICLE  DETAIL                     **"<<endl;
	cout<<"\t\t\t\t\t**                                                        **"<<endl;
	cout<<"\t\t\t\t\t************************************************************"<<endl;                                                 
 	string line;
    ifstream myfile ("vehicledts.txt");
    if (myfile.is_open())
        {
           while ( getline (myfile,line) )
               {
                    cout<<"\t\t\t\t\t" << line << '\n';
               }
            myfile.close();                            
         }	            
    else
       {
        cout << "CAN NOT OPEN FILE"; 
        sleep(3);
       }
}

void driverdetailsviewmenu()
{
	fontsize(24,24);	             
	system("Color D");		             
 	cout<<"\t\t\t\t\t"<<endl;
    cout<<"\t\t\t\t\t"<<endl;
 	cout<<"\t\t\t\t\t************************************************************"<<endl;
 	cout<<"\t\t\t\t\t************************************************************"<<endl;
    cout<<"\t\t\t\t\t************************************************************"<<endl;
	cout<<"\t\t\t\t\t**                                                        **"<<endl;
	cout<<"\t\t\t\t\t**                  DRIVER     DETAILS                    **"<<endl;
	cout<<"\t\t\t\t\t**                                                        **"<<endl;
	cout<<"\t\t\t\t\t************************************************************"<<endl;
	cout<<"\t\t\t\t\t************************************************************"<<endl;
	
	string line;
    ifstream myfile ("emp.txt");
    if (myfile.is_open())
       {
        while ( getline (myfile,line) )
            {
            cout<<"\t\t\t\t\t" << line << '\n';
            }
        myfile.close();
        }	
    else
        {
        cout << "CAN NOT OPEN FILE"; 
        sleep(3);
		}
}

void editdetailsmenu()
{       
        fontsize(24,24);
		cout<<"\t\t\t\t\t"<<endl;
        datetime();
 	    system("Color C");
        cout<<"\t\t\t\t\t"<<endl;	
 	    cout<<"\t\t\t\t\t************************************************************"<<endl;	
 	    cout<<"\t\t\t\t\t************************************************************"<<endl; 
	    cout<<"\t\t\t\t\t************************************************************"<<endl;
	    cout<<"\t\t\t\t\t**                                                        **"<<endl;
	    cout<<"\t\t\t\t\t**                    EDIT DETAILS                        **"<<endl;
	    cout<<"\t\t\t\t\t**                                                        **"<<endl;
	    cout<<"\t\t\t\t\t************************************************************"<<endl;
	    cout<<"\t\t\t\t\t************************************************************"<<endl;
	    cout<<"\t\t\t\t\t"<<endl;
	    cout<<"\t\t\t\t\t"<<endl;
	    
 	    cout<<"\t\t\t\t\t 1)--- UPDATE DETAILS "<<endl;
 	    cout<<"\t\t\t\t\t 2)--- CLEAR DETAILS  "<<endl;
 	    cout<<"\t\t\t\t\t 3)---LOG OUT         "<<endl;
 	    cout<<"\t\t\t\t\t 4)---BACK            "<<endl;
 	    cout<<"\t\t\t\t\t 5)---EXIT            "<<endl;
 	    cout<<"\t\t\t\t\t"<<endl;
 	    cout<<"\t\t\t\t\t ENTER 1--5 HEAR---- ";

 	    int g;
 	    cin>>g;
 	    switch(g)
 	    {
 	        case 1: 
 	         {
 	        system("cls");
 	        updatedetailsmenu();
 	        system("pause");
 	        break;
		    }                  
			case 2:
		    { 
		    system("cls");
		    cleardetailsmenu();
		    system("pause");
 	        break;
			}				 		   
			case 3:
			{
			system("cls");
			login();
	        system("pause");
 	        break;
		   }			        
			case 4:
			{
			system("cls");
			menu();
		   }break;
						       
			case 5:
		    {
			system("cls");
			exit();
		   }						
			break;
			default:
			{
			system("cls");
			editdetailsmenu();
		   }
		}
}

void updatedetailsmenu()
{
	fontsize(24,24); 
    cout<<"\t\t\t\t\t"<<endl;
    datetime();
 	system("Color A");
    cout<<"\t\t\t\t\t"<<endl;
 	cout<<"\t\t\t\t\t************************************************************"<<endl;	
 	cout<<"\t\t\t\t\t************************************************************"<<endl; 
	cout<<"\t\t\t\t\t************************************************************"<<endl;
	cout<<"\t\t\t\t\t**                                                        **"<<endl;
	cout<<"\t\t\t\t\t**                   UPDATES DETAIL                       **"<<endl;
	cout<<"\t\t\t\t\t**                                                        **"<<endl;
    cout<<"\t\t\t\t\t************************************************************"<<endl;
	cout<<"\t\t\t\t\t************************************************************"<<endl;
	cout<<"\t\t\t\t\t"<<endl;
	cout<<"\t\t\t\t\t"<<endl;
	                            
 	cout<<"\t\t\t\t\t 1)---VEHICLE DETAILS        "<<endl;
 	cout<<"\t\t\t\t\t 2)---DRIVER DETAILS         "<<endl;
 	cout<<"\t\t\t\t\t 3)---BOOKING DETAILS        "<<endl;
 	cout<<"\t\t\t\t\t 4)---ABOUT COMPANY  DETAILS "<<endl;
  	cout<<"\t\t\t\t\t 5)---LOG OUT                "<<endl;
 	cout<<"\t\t\t\t\t 6)---BACK                   "<<endl;
 	cout<<"\t\t\t\t\t 7)---EXIT                   "<<endl;
 	cout<<"\t\t\t\t\t"<<endl;
 	cout<<"\t\t\t\t\t ENTER 1--7 HEAR---- ";
 	
 	int l;
 	cin>>l;
    if(l==1)
 	{
 	system("cls");
 	vdu();
    }									 
	else if(l==2)
	{
	system("cls");
	emp();
	}									
	else if(l==3)
	{
	system("cls");
	bookin();
	}								
	else if(l==4)
	{
	system("cls");
	acd();
	}								
	else if(l==5)
	{
	system("cls");
	login();
	}
    else if(l==6)
	{
	system("cls");
	editdetailsmenu()
	}								
	else if(l==7)
	{
	system("cls");
	exit();
	}
	else
	{
	system("cls");
	updatedetailsmenu();
	}
}

void vdu()
{  
    fontsize(24,24);
    cout<<"\t\t\t\t\t"<<endl;
    datetime();
    system("Color A");
    cout<<"\t\t\t\t\t"<<endl;
	cout<<"\t\t\t\t\t************************************************************"<<endl; 
	cout<<"\t\t\t\t\t************************************************************"<<endl;
	cout<<"\t\t\t\t\t**                                                        **"<<endl;
	cout<<"\t\t\t\t\t**                 ADD VEHICLE DETAILS                    **"<<endl;
	cout<<"\t\t\t\t\t**                                                        **"<<endl;
	cout<<"\t\t\t\t\t************************************************************"<<endl;
	cout<<"\t\t\t\t\t************************************************************"<<endl;
	cout<<"\t\t\t\t\t"<<endl;
	cout<<"\t\t\t\t\t"<<endl;
	
    string write;
    ofstream myfile;
    myfile.open ("vehicledts.txt",ios::app);
	myfile<<"**********"<<endl; 
    myfile<<"..............."<<endl;
   
    cout<<"\t\t\t\t\t 1-Input vehicle TYPE(CAR/VAN/CAB)--"<<" ";               cin>>write;    myfile<<"1-TYPE--"<<write<<endl;
    cout<<"\t\t\t\t\t 2-Input vehicle NAME(bmw/alto/hybrid/ect..)--"<<" ";     cin>>write;    myfile<<"2-NAME--"<<write<<endl;
    cout<<"\t\t\t\t\t 3-Input vehicle REGISTRATION DATE(YEAR.MONTH.DATE)--"<<" "; 
	cin>>write;    myfile<<"3-NUMBER OF SEAT--"<<write<<endl;
    cout<<"\t\t\t\t\t 4-Input vehicle AC TYPE(YES/NO)--"<<" ";                 cin>>write;    myfile<<"4-AC TYPE--"<<write<<endl;
    cout<<"\t\t\t\t\t 5-Input vehicle COST(full price xx RS)--"<<" ";          cin>>write;    myfile<<"5-VEHICLE COST--"<<write<<endl;
    cout<<"\t\t\t\t\t 6-Input vehicle INSUARANCE TYPE(full/3rd party)--"<<" "; cin>>write; myfile<<"6-INSUARANCE TYPE--"<<write<<endl;
    cout<<"\t\t\t\t\t 7-Input vehicle INSUARANCE EXPIER DATE(year.month.day)--"<<" "; 
	cin>>write; myfile<<"7-INSUARANCE EXPIER DATE--"<<write<<endl;
    cout<<"\t\t\t\t\t 8-Input vehicle FUEL TYPE(petrotl/disel)--"<<" ";  cin>>write;    myfile<<"8-FUEL TYPE--"<<write<<endl;
    cout<<"\t\t\t\t\t 9-Input vehicle TANK CAPACITY(xxx liter)--"<<" ";  cin>>write;    myfile<<"9-TANK CAPACITY--"<<write<<endl;
    cout<<"\t\t\t\t\t 10-Input vehicle ENGIN NUMBER(xxxxx)--"<<" ";      cin>>write;    myfile<<"10-ENGIN NUMBER--"<<write<<endl;
    cout<<"\t\t\t\t\t 11-Input vehicle CHASSIS NUMBER(xxxxxxx)--"<<" ";  cin>>write;    myfile<<"11-CHASSIS NUMBER--"<<write<<endl;
	
	cout<<endl;
	cout<<endl;
	cout<<"\t\t\t\t\t .....successfully....!"<<endl;
	sleep(3);
	myfile<<"  "<<endl;
    myfile.close();
    
          	int x;
            cout<<endl;
            cout << "\t\t\t\t\t presh 1 -DO YOU WANT to ADD Again  ?"<<endl;
            cout << "\t\t\t\t\t Presh 2 - to BACK"<<endl;
            cout<<endl;
            cout<<"\t\t\t\t\t ENTER  HEAR---- ";
            cin>>x;
            switch(x)
            {
            	case 1:
            		{ system("cls");
                     vdu();
					}break;
                case 2:
			       {system("cls");
			        updatedetailsmenu();
			       }
		    }
	
	system("cls");
	menu();	                          	
}

void acd()
{   
    fontsize(24,24);
    system("Color A");
    cout<<"\t\t\t\t\t"<<endl;
    cout<<"\t\t\t\t\t"<<endl;
	cout<<"\t\t\t\t\t************************************************************"<<endl; 
	cout<<"\t\t\t\t\t************************************************************"<<endl;
	cout<<"\t\t\t\t\t**                                                        **"<<endl;
	cout<<"\t\t\t\t\t**                ADD COMPANY DETAILS                     **"<<endl;
	cout<<"\t\t\t\t\t**                                                        **"<<endl;
	cout<<"\t\t\t\t\t************************************************************"<<endl;
	cout<<"\t\t\t\t\t************************************************************"<<endl;
	cout<<"\t\t\t\t\t"<<endl;
	cout<<"\t\t\t\t\t"<<endl;
	
    string write;
	ofstream myfile;
    myfile.open ("about company.txt",ios::app);
    cout<<"\t\t\t\t\t WRITE HERE COMPANY DETAILS "<<endl;
    cout<<endl;
    cout<<"\t\t\t\t\t";
    cin>>write;
    myfile<<write<<endl;
    myfile.close();	
    cout<<endl;
	cout<<endl;
	cout<<"\t\t\t\t\t .....successfully....!"<<endl;  
	sleep(3);  
 
    int x;
            cout<<endl;
            cout << "\t\t\t\t\t presh 1 -DO YOU WANT to ADD Again  ?"<<endl;
            cout << "\t\t\t\t\t Presh 2 - to BACK"<<endl;
            cout<<endl;
            cout<<"\t\t\t\t\t ENTER HEAR---- ";
            cin>>x;
            switch(x)
            {
            	case 1:
            		{ system("cls");
                     acd();
					}break;
               case 2:
			       {system("cls");
			        updatedetailsmenu();
			        break;
			       }
		    }
}

void emp()
{   
    fontsize(24,24);
	cout<<"\t\t\t\t\t"<<endl;
    datetime();
	system("Color A");
    cout<<"\t\t\t\t\t"<<endl;
	cout<<"\t\t\t\t\t************************************************************"<<endl; 
	cout<<"\t\t\t\t\t************************************************************"<<endl;
	cout<<"\t\t\t\t\t**                                                        **"<<endl;
	cout<<"\t\t\t\t\t**                       ADD DRIVER DETAILS               **"<<endl;
	cout<<"\t\t\t\t\t**                                                        **"<<endl;
	cout<<"\t\t\t\t\t************************************************************"<<endl;
	cout<<"\t\t\t\t\t************************************************************"<<endl;
	cout<<"\t\t\t\t\t"<<endl;
	cout<<"\t\t\t\t\t"<<endl;
	
    string write; 
    ofstream myfile;
    myfile.open ("emp.txt",ios::app);
	myfile<<"**********"<<endl;
    myfile<<"..............."<<endl;

	cout<<"\t\t\t\t\t 1-Input FULL NAME--"<<" ";       cin>>write;    myfile<<"1-NAME--"<<write<<endl;
    cout<<"\t\t\t\t\t 2-Input ADDRESS--"<<" ";         cin>>write;    myfile<<"2-ADDRESS--"<<write<<endl;
	cout<<"\t\t\t\t\t 3-Input DATE OF BIRTH--"<<" ";   cin>>write;    myfile<<"3-DATE OF BIRTH--"<<write<<endl;
	cout<<"\t\t\t\t\t 4-Input TELEPHONE NUMBER--"<<" ";cin>>write;    myfile<<"4-TELEPHON NUM--"<<write<<endl;
    cout<<"\t\t\t\t\t 5-Input EMAIL ADDRESS--"<<" ";   cin>>write;    myfile<<"5-EMAIL--"<<write<<endl;
    cout<<"\t\t\t\t\t 6-Input JOB DESIGNATION(driver)--"<<" "; cin>>write;    myfile<<"6-JOB DESIGNATION--"<<write<<endl;
    cout<<"\t\t\t\t\t 7-Input JOB TO JOIN DATE--"<<" ";cin>>write;    myfile<<"7-JOB TO JOIN DATE--"<<write<<endl;
    cout<<"\t\t\t\t\t 8-Input JOB SALARY--"<<" ";      cin>>write;    myfile<<"8-JOB SALARY--"<<write<<endl;
    
	cout<<endl;
	cout<<endl;
	cout<<"\t\t\t\t\t .....successfully....!"<<endl;    
	sleep(3);
	myfile<<"  "<<endl;
    myfile.close();
    int x;
            cout<<endl;
            cout << "\t\t\t\t\t presh 1 -DO YOU WANT to ADD Again  ?"<<endl;
            cout << "\t\t\t\t\t Presh 2 - to BACK"<<endl;
            cout<<endl;
            cout<<"\t\t\t\t\t ENTER HEAR---- ";
            cin>>x;
            switch(x)
            {
                case 1:
            		{ system("cls");
                     emp();
					}break;
                case 2:
			       {system("cls");
			        updatedetailsmenu();
			       }
		    }
}


void bookingdetailsmenu()
{   
    fontsize(24,24);
	system("Color D");
 	cout<<"\t\t\t\t\t"<<endl;
    cout<<"\t\t\t\t\t"<<endl;
 	cout<<"\t\t\t\t\t************************************************************"<<endl;
 	cout<<"\t\t\t\t\t************************************************************"<<endl;
	cout<<"\t\t\t\t\t************************************************************"<<endl;
    cout<<"\t\t\t\t\t**                                                        **"<<endl;
	cout<<"\t\t\t\t\t**                 BOOKING   DETAILS                      **"<<endl;
	cout<<"\t\t\t\t\t**                                                        **"<<endl;
	cout<<"\t\t\t\t\t************************************************************"<<endl;
	
 	string line;
    ifstream myfile ("bookin.txt");
    if (myfile.is_open())
    {
        while ( getline (myfile,line) )
        {
        cout<<"\t\t\t\t\t" << line << '\n';
        }
        myfile.close();
    }	
                    
    else
    {
    cout<<endl;
    cout<<endl;
    cout << "\t\t\t\t\t CAN NOT OPEN FILE"; 
    sleep(3);
	}
}

void bookin()
{    
    fontsize(24,24);  
    cout<<"\t\t\t\t\t"<<endl;
    datetime();
	system("Color A");
    cout<<"\t\t\t\t\t"<<endl;
	cout<<"\t\t\t\t\t************************************************************"<<endl; 
	cout<<"\t\t\t\t\t************************************************************"<<endl;
	cout<<"\t\t\t\t\t**                                                        **"<<endl;
	cout<<"\t\t\t\t\t**                    ADD BOOKING DETAILS                 **"<<endl;
	cout<<"\t\t\t\t\t**                                                        **"<<endl;
	cout<<"\t\t\t\t\t************************************************************"<<endl;
	cout<<"\t\t\t\t\t************************************************************"<<endl;
	cout<<"\t\t\t\t\t"<<endl;
	cout<<"\t\t\t\t\t"<<endl;
	
    string write;
    ofstream myfile;
    myfile.open ("bookin.txt",ios::app);
	myfile<<"******"<<endl;
    myfile<<"..............."<<endl;
   
	cout<<"\t\t\t\t\t 1-Input CUSTOMER NAME--"<<" ";   cin>>write;    myfile<<"1-CUSTOMER NAME--"<<write<<endl;
    cout<<"\t\t\t\t\t 2-Input CONTACT NUM--"<<" ";     cin>>write;    myfile<<"2-CONTACT NUM--"<<write<<endl;
    cout<<"\t\t\t\t\t 3-Input CUSTOMER EMAIL--"<<" ";  cin>>write;    myfile<<"3-EMAIL--"<<write<<endl;
    cout<<"\t\t\t\t\t 4-Input VEHICLE TYPE--"<<" ";    cin>>write;    myfile<<"4-VEHICAL TYPE--"<<write<<endl;
    cout<<"\t\t\t\t\t 5-Input VEHICLE NAME--"<<" ";    cin>>write;    myfile<<"5-VEHICLE NAME--"<<write<<endl;
    cout<<"\t\t\t\t\t 6-Input PICKUP ADDRESS--"<<" ";  cin>>write;    myfile<<"6-PICKUP ADDRESS--"<<write<<endl;
    cout<<"\t\t\t\t\t 7-Input DROP ADDRESS--"<<" ";    cin>>write;    myfile<<"7-DROP ADDRESS--"<<write<<endl;
    cout<<"\t\t\t\t\t 8-Input DATE--"<<" ";            cin>>write;    myfile<<"8-DATE--"<<write<<endl;
    
	cout<<endl;
	cout<<endl;
	cout<<"\t\t\t\t\t .....successfully....!"<<endl; 
	sleep(3);  
	myfile<<"  "<<endl;
    myfile.close();

    int x;
    cout<<endl;
    cout << "\t\t\t\t\t presh 1 -DO YOU WANT to BOOK Again  ?"<<endl;
    cout << "\t\t\t\t\t Presh 2 - to BACK"<<endl;
    cout<<endl;
    cout<<"\t\t\t\t\t ENTER HEAR---- ";
    cin>>x;
    switch(x)
    {
         case 1:
        { 
        system("cls");
        bookin();
		}break;
        case 2:
        {
        system("cls");
		updatedetailsmenu();
	    }
    }

}


void cleardetailsmenu()
{
	fontsize(24,24);	                        
	system("Color A");
	cout<<"\t\t\t\t\t"<<endl;
    cout<<"\t\t\t\t\t"<<endl;
	cout<<"\t\t\t\t\t************************************************************"<<endl;	
 	cout<<"\t\t\t\t\t************************************************************"<<endl; 
	cout<<"\t\t\t\t\t************************************************************"<<endl;
    cout<<"\t\t\t\t\t**                                                        **"<<endl;  
    cout<<"\t\t\t\t\t**                     CLEAR DETAILS                      **"<<endl;
	cout<<"\t\t\t\t\t**                                                        **"<<endl;
    cout<<"\t\t\t\t\t************************************************************"<<endl;
	cout<<"\t\t\t\t\t************************************************************"<<endl;
	cout<<"\t\t\t\t\t"<<endl;
	cout<<"\t\t\t\t\t"<<endl;
	                            
	cout<<"\t\t\t\t\t 1)---VEHICLE DETAILS        "<<endl;
	cout<<"\t\t\t\t\t 2)---DRIVER DETAILS      "<<endl;
 	cout<<"\t\t\t\t\t 3)---BOOKING DETAILS        "<<endl;
 	cout<<"\t\t\t\t\t 4)---ABOUT COMPANY  DETAILS "<<endl;
    cout<<"\t\t\t\t\t 5)---LOG OUT                "<<endl;
 	cout<<"\t\t\t\t\t 6)---BACK                   "<<endl;
 	cout<<"\t\t\t\t\t 7)---EXIT                   "<<endl;
 	cout<<"\t\t\t\t\t"<<endl;
 	cout<<"\t\t\t\t\t ENTER 1--7 HEAR---- ";
 	                            
    int n;
    cin>>n;
 	if(n==1)
 	{
 	clvd();
 	}
	else if(n==2)
	{
	clemp();
	}
	else if(n==3)
    {
	clbookin();
	}
	else if(n==4)
	{
	clacd();
	}
	else if(n==5)
	{
	system("cls");
	login();
	}
	else if(n==6)
	{
	system("cls");
	editdetailsmenu();
	}
	else if(n==7)
	{
	system("cls");
	exit();
	}
 	else 
	{
	system("cls");
	cleardetailsmenu();
	}
}

void clvd()
{
	fontsize(24,24);
	ofstream myfile;
    myfile.open ("vehicledts.txt",ios::out);
    myfile.close();
    
    cout<<"\t\t\t\t\t"<<endl;
	cout<<"\t\t\t\t\t"<<endl;
    cout<<"\t\t\t\t\t"<<endl;
	cout<<"\t\t\t\t\t"<<endl;
	cout<<endl;
	cout<<endl;
	cout<<"\t\t\t\t\t**        SUCCESSFULL CLEARED ALL CONTENT !....               **"<<endl;
	
	sleep(3);
	system("cls");
    cleardetailsmenu();a				
}

void clacd()
{    
    fontsize(24,24);
	ofstream myfile;
    myfile.open ("about company.txt",ios::out);
    myfile.close();
    
    cout<<"\t\t\t\t\t"<<endl;
	cout<<"\t\t\t\t\t"<<endl;
    cout<<"\t\t\t\t\t"<<endl;
	cout<<"\t\t\t\t\t"<<endl;
	cout<<endl;
	cout<<endl;
	cout<<"\t\t\t\t\t**        SUCCESSFULL CLEARED ALL CONTENT !....               **"<<endl;
	
	sleep(3);
	system("cls");
    cleardetailsmenu();	
}

void clemp()
{   
    fontsize(24,24);
    ofstream myfile;
    myfile.open ("emp.txt",ios::out);
    myfile.close();
	
	cout<<"\t\t\t\t\t"<<endl;
	cout<<"\t\t\t\t\t"<<endl;
    cout<<"\t\t\t\t\t"<<endl;
	cout<<"\t\t\t\t\t"<<endl;
	cout<<endl;
	cout<<endl;
	cout<<"\t\t\t\t\t**        SUCCESSFULL CLEARED ALL CONTENT !....               **"<<endl;
	
   sleep(3);//second 1s to sleep
   system("cls");
     cleardetailsmenu();//again yann 	
}

void clbookin()
{   
    
	fontsize(24,24);
    ofstream myfile;
    myfile.open ("bookin.txt",ios::out);
    myfile.close();

    cout<<"\t\t\t\t\t"<<endl;
	cout<<"\t\t\t\t\t"<<endl;
    cout<<"\t\t\t\t\t"<<endl;
	cout<<"\t\t\t\t\t"<<endl;
	cout<<endl;
	cout<<endl;
	cout<<"\t\t\t\t\t**        SUCCESSFULL CLEARED ALL CONTENT !....               **"<<endl;
		
	sleep(3);//second 1s to sleep
    system("cls");
    cleardetailsmenu();
}

void payment()
{
    fontsize(24,24);
	int nd;
    float nk,nh,kp,hp,dp,tp
    string pp,d,m,ty;
    
        system("Color 9");
        cout<<"\t\t\t\t\t"<<endl;
        datetime();	
        
        cout<<"\t\t\t\t\t"<<endl;
        cout<<"\t\t\t\t\t----------------------------------------------------------------------"<<endl;
        cout<<"\t\t\t\t\t::::::::::::::::           PAYMENT BILL           ::::::::::::::::::::"<<endl;
        cout<<"\t\t\t\t\t----------------------------------------------------------------------"<<endl;
        cout<<"\t\t\t\t\t"<<endl;
        cout<<"\t\t\t\t\t"<<endl;
        
		cout<<"\t\t\t\t\t 1) Enter pickup place:-- ";
        cin>> pp;
        cout<<"\t\t\t\t\t 2) Enter drop place:-- ";
        cin>> d;
        cout<<"\t\t\t\t\t 3) how far traveled you (km):-- ";
        cin>> nk;//ditance
        cout<<"\t\t\t\t\t 4) Enter traveled number of Hours:-- ";
        cin>> nh;  	
        cout<<"\t\t\t\t\t 5) Enter Number of Days you stayed:-- ";
        cin>> nd;
		cout<<"\t\t\t\t\t 6) Enter Vehical type(CAB/CAR/VAN AND OTHERS):-- ";
        cin>> ty;  		
        cout<<"\t\t\t\t\t 7) Enter charge per km(RS):-- ";
        cin>> kp;  	
		cout<<"\t\t\t\t\t 8) Enter charge per Hour(RS):-- ";
        cin>> hp;  		  	
		cout<<"\t\t\t\t\t 9) Enter charge per Day(RS):-- ";
        cin>> dp;
		cout<<"\t\t\t\t\t 10) Enter payment method(card or cash):-- ";
        cin>> m;
		
		cout<<endl;
	    cout<<endl;
    	cout<<"\t\t\t\t\t .....successfully....!"<<endl;  
		sleep(3);
	    tp=((nk*kp)+(nh*hp)+(nd*dp));
	    dis=(tp*0.02);
	    p=(tp*0.98);
	
	     system("cls");
	     
	    system("Color F");
	    cout<<"\t\t\t\t\t"<<endl;
        cout<<"\t\t\t\t\t"<<endl;
        cout<<"\t\t\t\t\t-------------------------------------------------------------------"<<endl;
        cout<<"\t\t\t\t\t:::::::::::::::::     INVOICE    ::::::::::::::::::::::::::::::::::"<<endl;
        cout<<"\t\t\t\t\t-------------------------------------------------------------------"<<endl;
        cout<<"\t\t\t\t\t-                                                                  "<<endl;
        cout<<"\t\t\t\t\t-                                                                  "<<endl;
        cout<<"\t\t\t\t\t- 1)-From                    --"<<pp<<"                            "<<endl;
        cout<<"\t\t\t\t\t- 2)-To                      --"<<d<<"                             "<<endl;
        cout<<"\t\t\t\t\t- 3)-Traveled                --"<<nh<<"hours and"<<" "<<nd<<"days. "<<endl;
        cout<<"\t\t\t\t\t- 4)-Your Traveled Distance  --"<<nk<<"km                          "<<endl;
        cout<<"\t\t\t\t\t- 5)-Your Vehicle Type       --"<<ty<<"                            "<<endl;
        cout<<"\t\t\t\t\t- 6)-Charge Per One Km       --"<<kp<<"Rs.                         "<<endl;
        cout<<"\t\t\t\t\t- 7)-Charge Per Hour         --"<<hp<<"Rs.                         "<<endl;
        cout<<"\t\t\t\t\t- 8)-Charge Per Day          --"<<dp<<"Rs.                         "<<endl;
        cout<<"\t\t\t\t\t- 9)-Payment Method          --"<<m<<"                             "<<endl;
        cout<<"\t\t\t\t\t-10)-You Have"<<" "<<dis<<"--Rs"<<" "<<"Special Discount .         "<<endl;
        cout<<"\t\t\t\t\t-                                                                  "<<endl;
        cout<<"\t\t\t\t\t-         ******   You Should Pay   --"<<p<<"--Rs.                 "<<endl;
        cout<<"\t\t\t\t\t-------------------------------------------------------------------"<<endl;
        cout<<"\t\t\t\t\t::::::::::::::::::   COME AGAIN ! :::::::::::::::::::::::::::::::::"<<endl;
        cout<<"\t\t\t\t\t-------------------------------------------------------------------"<<endl;
          	
        int x;
        cout<<endl;
        cout << "\t\t\t\t\t presh 1 -DO YOU WANT to PAY BILL again  ?"<<endl;
        cout << "\t\t\t\t\t Presh 2 - to BACK"<<endl;
        cout<<endl;
        cout<<"\t\t\t\t\t ENTER HEAR---- ";
        cin>>x;
        switch(x)
            {
            	case 1:
            		{ 
					system("cls");
                      payment();
                      break;
					}
               case 2:
			       {
				   system("cls");
			        menu();
			        break;
			       }
			   default :
			   {
			   	system("pause");
				break;
			   }    
		    }			
}

void aboutcompanydetailsmenu()
{
    fontsize(24,24);
 	system("color D");
    cout<<"\t\t\t\t\t"<<endl;
    cout<<"\t\t\t\t\t"<<endl;
 	cout<<"\t\t\t\t\t************************************************************"<<endl;
 	cout<<"\t\t\t\t\t************************************************************"<<endl;
	cout<<"\t\t\t\t\t************************************************************"<<endl;
	cout<<"\t\t\t\t\t**                                                        **"<<endl;
	cout<<"\t\t\t\t\t**             ABOUT  COMPANY  DETAils                    **"<<endl;
	cout<<"\t\t\t\t\t**                                                        **"<<endl;
	cout<<"\t\t\t\t\t************************************************************"<<endl;
 	cout<<"\t\t\t\t\t"<<endl;
	cout<<"\t\t\t\t\t"<<endl;
	cout<<"\t\t\t\t\t"<<endl;
	cout<<"\t\t\t\t\t"<<endl;
 	         		             
 	string line;
    ifstream myfile ("about company.txt");
    if (myfile.is_open())
        {
            while ( getline (myfile,line) )
                {
                cout<<"\t\t\t\t\t" << line << '\n';
                }
                myfile.close();
                                        
         int x;
         cout<<endl;
         cout << "\t\t\t\t\t Presh 1 to BACK--";
         cin>>x;
       if(x==1)
             {
        system("cls");
        viewdetailsmenu();
		     }
	   else
		   {
		system("cls");
		aboutcompanydetailsmenu();
		   } 
		 
        }	
                    
    else
        {
        cout<<"\t\t\t\t\t"<<endl;
	    cout<<"\t\t\t\t\t"<<endl;
        cout<<"\t\t\t\t\t"<<endl;
	    cout<<"\t\t\t\t\t"<<endl;
        cout << "CAN NOT OPEN FILE"; 
        sleep(3);
	   }	
 	         			
}

void houwtousesoftware()
{       
        fontsize(24,24);
		system("Color 3");
		cout<<"\t\t\t\t\t"<<endl;
        cout<<"\t\t\t\t\t"<<endl; 	
 		cout<<"\t\t\t\t\t************************************************************"<<endl;	
 	    cout<<"\t\t\t\t\t************************************************************"<<endl; 
	    cout<<"\t\t\t\t\t************************************************************"<<endl;
	    cout<<"\t\t\t\t\t**                                                        **"<<endl;
	    cout<<"\t\t\t\t\t**                 HOW TO USE THIS                        **"<<endl;
	    cout<<"\t\t\t\t\t**                     SOFTWARE                           **"<<endl;
	    cout<<"\t\t\t\t\t************************************************************"<<endl;
	    cout<<"\t\t\t\t\t************************************************************"<<endl;
	    cout<<"\t\t\t\t\t"<<endl;
	    cout<<"\t\t\t\t\t"<<endl;
 		string line;
        ifstream myfile ("howtousthissoftware.txt");
        if (myfile.is_open())
            {
                while ( getline (myfile,line) )
                    {
                        cout<<"\t\t\t\t\t" << line << '\n';
                    }
        myfile.close();
            }	     
        else
            {   
			cout<<endl;
            cout<<endl;
            cout << "\t\t\t\t\tCAN NOT OPEN FILE";
		    sleep(3);
			}
}

void fontsize(int a, int b)
{  
  PCONSOLE_FONT_INFOEX lpConsoleCurrentFontEx = new CONSOLE_FONT_INFOEX();  
  lpConsoleCurrentFontEx->cbSize = sizeof(CONSOLE_FONT_INFOEX);  
  GetCurrentConsoleFontEx(out, 0, lpConsoleCurrentFontEx);  
  lpConsoleCurrentFontEx->dwFontSize.X = a;  
  lpConsoleCurrentFontEx->dwFontSize.Y = b;  
  SetCurrentConsoleFontEx(out, 0, lpConsoleCurrentFontEx);
}

void datetime()
{
	time_t t = time(NULL);
    tm* timePtr = localtime(&t);
  cout << endl;
  cout << endl;
  cout << "\t\t\t\t\tDate " <<(timePtr->tm_mday)<<"/"<< (timePtr->tm_mon)+1 <<"/"<< (timePtr->tm_year)+1900<<"   ";
  cout << "\t\t\t\t\Time " << (timePtr->tm_hour)<<":"<< (timePtr->tm_min)<<":"<< (timePtr->tm_sec) << endl;
}
			
void welcome()
 {
  cout<<endl;
  cout<<endl;
  char arr[14]={'T','O','U','R',' ','M','A','T','E',' ','2','0','2','0'};
  for(int a=0;a<=14;a++) 
    {
  	fontsize(100,100);
  	cout<<" "<<arr[a];
  	sleep(1);
    }
  
  
}			
			
	
	
