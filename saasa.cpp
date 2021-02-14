#include <iostream>
#include <fstream>
#include <string>
#include <windows.h>//color change header file to code is system("color _");
using namespace std;

//prototype functions1

void registration();
void login();
void menu();
void exit();
void vdu();//vehcle details update or add
void acd();//add company about details or update
void emp();
void bookin();

void clvd();//clear vhicle details
void clacd();//clear company details
void clemp();
void clbookin();

void payment();

int main()// start main function
{ 
    
   login();        
	return 0;
}//end of main function


//function definition savindu
void registration()//registratration form
{

	do // DO YATATE THIN EKA ANIWARYENM KARANAWA
	{
		
		
	system("Color 1A");
	
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
	
	string w;// api input karana de gnn variable eka (local variable)
	
	ofstream myfile;  // SAVINDU MY KIYANNE API DUNN NAMK FILE KIYN EK PITIPASSEN ON NAMAK LIYNN PULUWN
    myfile.open ("registration form.txt",ios::app); //TEXT FILE KATA LIYNN OPEN KARNW 
    myfile<<"*****USER REGISTRATION DETAILS*****"<<endl;//OY DEK MULIN TYPE WENWA text fil eke AUTO
    myfile<<"."<<endl;//TEXT FILL EKE RULK IDA ARINN PAHALATA
    
    //text file ekt data input karnwa cout ek apit commandpromt eke penne ,api liyn de typ klm eka text eke aoto liya wenawa.
    cout<<"\t\t\t\t\t1-ENTER YOUR FIRST NAME-"<<" ";        cin>>w;   myfile<<"1-FIRST NAME--"<<w<<endl;
	cout<<"\t\t\t\t\t2-ENTER YOUR LAST NAME-"<<" ";         cin>>w;   myfile<<"2-LAST NAME--"<<w<<endl;	
	cout<<"\t\t\t\t\t3-ENTER YOUR ADDRESS-"<<" ";           cin>>w;   myfile<<"3-ADDRESS--"<<w<<endl;
	cout<<"\t\t\t\t\t4-ENTER YOUR TELEPHONE NUMBER-"<<" ";  cin>>w;   myfile<<"4-TELEPHONE NUMBER--"<<w<<endl;	
	cout<<"\t\t\t\t\t5-ENTER YOUR EMAIL ADDRESS-"<<" ";     cin>>w;   myfile<<"5-EMAIL--"<<w<<endl;
	cout<<"\t\t\t\t\t6-ENTER YOUR PASSWORD-"<<" ";          cin>>w;   myfile<<"6-PASSWORD--"<<w<<endl;  
	myfile<<" "<<endl;  //ANTHIMATA  HIS RULAK TIYANN TEXT EKE
	
	cout<<"\t\t\t\t\t REGISTRATION SUCCESFULL !"<<endl;
	
	system("cls");
	}
	while(0);//DO YATE THINA EKA KALATA PASSE OK ANIWARYA NA
	{
	
	}
	
}




//login start function savindu 
void login()
{  


    cout<<"\t\t\t\t\t"<<endl;
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
    cout<<"\t\t\t\t\t1-PLEASE ENTER USER NAME-"<<" ";   cin>>u;
    cout<<"\t\t\t\t\t1-PLEASE ENTER PASSWORD-"<<" ";    cin>>p;
    
    if((u=="a") && (p=="b"))
	{
	cout<<"\t\t\t\t\t LOGIN SUCCESFULL !"<<endl;
	
	
	system("cls");
	
	while(1)// oken wenne menu eka loop karala
	{
	menu();
    }
		//function call
	
	}
	else
	{
		cout<<"\t\t\t\t\t LOGIN FAIL !"<<endl;	
	}	
}


//SART MENU
void menu()
{    
   //
    
    system("Color 09");
    
    cout<<"\t\t\t\t\t"<<endl;
    cout<<"\t\t\t\t\t"<<endl;
	cout<<"\t\t\t\t\t************************************************************"<<endl; 
	cout<<"\t\t\t\t\t************************************************************"<<endl;
	cout<<"\t\t\t\t\t**                                                        **"<<endl;
	cout<<"\t\t\t\t\t**                      MENU                              **"<<endl;
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
	cout<<"\t\t\t\t\t 7:to exit"<<endl;
		
	cout<<"\t\t\t\t\t"<<endl;
	cout<<"\t\t\t\t\t"<<endl;
	
	int p;
    cout<<"\t\t\t\t\t ENTER 1--7 HEAR---- ";
    cin>>p;
    switch(p)
    {
 
        //CASE 1 START
 	    case 1:
 	    { 
 	    
 	    system("cls");// savindu menu eke list ek makann 
 	    
 	    cout<<"\t\t\t\t\t"<<endl;
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
 	    cout<<"\t\t\t\t\t 2)---EMPLOYERS DETAILS"<<endl;
 	    cout<<"\t\t\t\t\t 3)---BOOKING DETAILS"<<endl;
 	    cout<<"\t\t\t\t\t 4)---ABOUT COMPANY"<<endl;
 	    cout<<"\t\t\t\t\t 5)---LOG OUT"<<endl;
 	    cout<<"\t\t\t\t\t 6)---EXIT"<<endl;
 	    cout<<"\t\t\t\t\t"<<endl;
 	    
 	    cout<<"\t\t\t\t\t ENTER 1--6 HEAR---- ";
 	               int j;//variable
 	               cin>>j;
 	                  switch(j)  //CASE 1.1 START
 	                   {
 	         	         case 1:
 	         		       {    system("cls");//claer the view details box
 	         		       
 	         		             cout<<"\t\t\t\t\t"<<endl;
                                 cout<<"\t\t\t\t\t"<<endl;
 	         		             cout<<"\t\t\t\t\t************************************************************"<<endl;
 	         		             cout<<"\t\t\t\t\t************************************************************"<<endl;
	                             cout<<"\t\t\t\t\t************************************************************"<<endl;
	                             cout<<"\t\t\t\t\t**                                                        **"<<endl;
	                             cout<<"\t\t\t\t\t**                    VEHICLE  DETAIL                     **"<<endl;
	                             cout<<"\t\t\t\t\t**                                                        **"<<endl;
	                             cout<<"\t\t\t\t\t************************************************************"<<endl;
	                             
	                             //READ FILE 
 	         			       string line;
                               ifstream myfile ("vehicledts.txt");
                                if (myfile.is_open())
                               {
                                    while ( getline (myfile,line) )
                                     {
                                       cout<<"\t\t\t\t\t" << line << '\n';
                                     }//t/ magin madata karann
                                        myfile.close();
                               }	
                    
                               else
                               {
                                  cout << "CAN NOT OPEN FILE"; 
					            }	
 	         			
 	         		        break;	
					        }
					        
			             case 2:
 	         		       {    system("cls");//claer the view details box
 	         		       
 	         		             cout<<"\t\t\t\t\t"<<endl;
                                 cout<<"\t\t\t\t\t"<<endl;
 	         		             cout<<"\t\t\t\t\t************************************************************"<<endl;
 	         		             cout<<"\t\t\t\t\t************************************************************"<<endl;
	                             cout<<"\t\t\t\t\t************************************************************"<<endl;
	                             cout<<"\t\t\t\t\t**                                                        **"<<endl;
	                             cout<<"\t\t\t\t\t**                  EMPLOYERS  DETAILS                    **"<<endl;
	                             cout<<"\t\t\t\t\t**                                                        **"<<endl;
	                             cout<<"\t\t\t\t\t************************************************************"<<endl;
	                             
	                             //READ FILE 
 	         			       string line;
                               ifstream myfile ("emp.txt");
                                if (myfile.is_open())
                               {
                                    while ( getline (myfile,line) )
                                     {
                                       cout<<"\t\t\t\t\t" << line << '\n';
                                     }//t/ magin madata karann
                                        myfile.close();
                               }	
                    
                               else
                               {
                                  cout << "CAN NOT OPEN FILE"; 
					            }	
 	         			
 	         		        break;	
					        }
			               case 3:
 	         		       {    system("cls");//claer the view details box
 	         		       
 	         		             cout<<"\t\t\t\t\t"<<endl;
                                 cout<<"\t\t\t\t\t"<<endl;
 	         		             cout<<"\t\t\t\t\t************************************************************"<<endl;
 	         		             cout<<"\t\t\t\t\t************************************************************"<<endl;
	                             cout<<"\t\t\t\t\t************************************************************"<<endl;
	                             cout<<"\t\t\t\t\t**                                                        **"<<endl;
	                             cout<<"\t\t\t\t\t**                 BOOKING   DETAILS                      **"<<endl;
	                             cout<<"\t\t\t\t\t**                                                        **"<<endl;
	                             cout<<"\t\t\t\t\t************************************************************"<<endl;
	                             
	                             //READ FILE 
 	         			       string line;
                               ifstream myfile ("bookin.txt");
                                if (myfile.is_open())
                               {
                                    while ( getline (myfile,line) )
                                     {
                                       cout<<"\t\t\t\t\t" << line << '\n';
                                     }//t/ magin madata karann
                                        myfile.close();
                               }	
                    
                               else
                               {
                                  cout << "CAN NOT OPEN FILE"; 
					            }	
 	         			
 	         		        break;	
					        }
			               
			 
 	         
 	         	          case 4:
 	         		       {    system("cls");//claer the view details box
 	         		       
 	         		             cout<<"\t\t\t\t\t"<<endl;
                                 cout<<"\t\t\t\t\t"<<endl;
 	         		             cout<<"\t\t\t\t\t************************************************************"<<endl;
 	         		             cout<<"\t\t\t\t\t************************************************************"<<endl;
	                             cout<<"\t\t\t\t\t************************************************************"<<endl;
	                             cout<<"\t\t\t\t\t**                                                        **"<<endl;
	                             cout<<"\t\t\t\t\t**             ABOUT  COMPANY  DETAils                    **"<<endl;
	                             cout<<"\t\t\t\t\t**                                                        **"<<endl;
	                             cout<<"\t\t\t\t\t************************************************************"<<endl;
 	         		       
 	         		             //READ FILE
 	         		       	   string line;
                               ifstream myfile ("about company.txt");
                                if (myfile.is_open())
                               {
                                    while ( getline (myfile,line) )
                                     {
                                       cout<<"\t\t\t\t\t" << line << '\n';//text fill eke ek out put wenwa screen ekt
                                     }//t/t/t/t damama conson screen eke madata wenawa content ek
                                        myfile.close();
                               }	
                    
                               else
                               {
                                  cout << "CAN NOT OPEN FILE"; 
					            }	
 	         			
 	    	         	     break;	
				        	} 
				        	
						  case 5:
							{ 
							system("cls");
							login();//login ekt yann
							
							break;
							} 
								
						  case 6:
						    {
						    exit();//exit function ek	
							}
								
							
							      
			            } //1.1 CASE STOP SAVINDU PASINGTHA  
 	     	         	    	 
 	    system("pause");
 	      break;
		}//CASE 1 STOP
 	      
 	      
 	      
 	    //CASE 2 START
 		case 2:
 	    {
 	    	system("cls");
 	    	
 	    cout<<"\t\t\t\t\t"<<endl;
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
	    
 	    cout<<"\t\t\t\t\t 1)--- UPDATE DETAILS "<<endl;//thina thana idan line by line liyann
 	    cout<<"\t\t\t\t\t 2)--- CLEAR DETAILS  "<<endl;
 	    cout<<"\t\t\t\t\t 3)---LOG OUT         "<<endl;
 	    cout<<"\t\t\t\t\t 4)---EXIT            "<<endl;
 	    cout<<"\t\t\t\t\t"<<endl;
 	    cout<<"\t\t\t\t\t ENTER 1--4 HEAR---- ";
 	               int g;//variable
 	               cin>>g;
 	                   switch(g)
 	                   {
 	                   	   	case 1://UPDATES 
 	                           {
 	                          	system("cls");
 	                          	
 	                          	cout<<"\t\t\t\t\t"<<endl;
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
 	                          	cout<<"\t\t\t\t\t 2)---EMPLOYERS DETAILS      "<<endl;
 	                            cout<<"\t\t\t\t\t 3)---BOOKING DETAILS        "<<endl;
 	                          	cout<<"\t\t\t\t\t 4)---ABOUT COMPANY  DETAILS "<<endl;
 	                          	cout<<"\t\t\t\t\t 5)---LOG OUT                "<<endl;
 	                          	cout<<"\t\t\t\t\t 6)---EXIT                "<<endl;
 	                          	cout<<"\t\t\t\t\t"<<endl;
 	                            cout<<"\t\t\t\t\t ENTER 1--6 HEAR---- ";
 	                                 int l;// variable
 	                                 cin>>l;
 	                                    if(l==1)
 	                                     {
 	                                     	system("cls");
 	                                     	
 	                                     	vdu();
 	                                     	//enter hear vehical details update function
										 }
										 
										else if(l==2)
										{
											system("cls");
											
											emp();
										//write here about company details update function	
										}
										
										else if(l==3)
										{
											system("cls");
											
											bookin();
										//write here about company details update function	
										}
										
										else if(l==4)
										{
											system("cls");
											
											acd();
										//write here about company details update function	
										}
										
										else if(l==5)
										{
											system("cls");
											login();
										//login ekt return krnn	
											
			                            }
							            
							            
							            else if(l==5)
										{
											exit();
										//exit wenn 
										}
										else
										{
											menu();
										//retun karnn oni function eke nama
										}
 	                            
 	                           system("pause");
 	                           break;
		                      }
		                       
		                       
							case 2://clear details
		                       { 
		                        system("cls");
		                        
		                        cout<<"\t\t\t\t\t"<<endl;
                                cout<<"\t\t\t\t\t"<<endl;
		                        cout<<"\t\t\t\t\t************************************************************"<<endl;	
 	                            cout<<"\t\t\t\t\t************************************************************"<<endl; 
	                            cout<<"\t\t\t\t\t************************************************************"<<endl;
	                            cout<<"\t\t\t\t\t**                                                       **"<<endl;  
	                            cout<<"\t\t\t\t\t**                     CLEAR DETAILS                      **"<<endl;
	                            cout<<"\t\t\t\t\t**                                                        **"<<endl;
	                            cout<<"\t\t\t\t\t************************************************************"<<endl;
	                            cout<<"\t\t\t\t\t************************************************************"<<endl;
	                            cout<<"\t\t\t\t\t"<<endl;
	                            cout<<"\t\t\t\t\t"<<endl;
	                            
		                       	cout<<"\t\t\t\t\t 1)---VEHICLE DETAILS        "<<endl;
		                       	cout<<"\t\t\t\t\t 2)---EMPLOYERS DETAILS      "<<endl;
 	                            cout<<"\t\t\t\t\t 3)---BOOKING DETAILS        "<<endl;
 	                          	cout<<"\t\t\t\t\t 4)---ABOUT COMPANY  DETAILS "<<endl;
 	                          	cout<<"\t\t\t\t\t 5)---LOG OUT                "<<endl;
 	                          	cout<<"\t\t\t\t\t 6)---EXIT                   "<<endl;
 	                          	cout<<"\t\t\t\t\t"<<endl;
 	                            cout<<"\t\t\t\t\t ENTER 1--6 HEAR---- ";
 	                            
		                       	     int n;// variable
 	                                 cin>>n;
 	                                    if(n==1)
 	                                     {
 	                                     	clvd();
 	                                     	//enter hear vehical details clear function
										 }
										 
										else if(n==2)
										 {
											system("cls");
											
											clemp();
										//write here about company details update function	
										 }
										
										else if(n==3)
										 {
											system("cls");
											
											clbookin();
										//write here about company details update function	
										 }
										 
										else if(n==4)
										{
											clacd();
										//write here about company details clear function	
										}
										
										else if(n==5)
										{
											system("cls");
										   login();
										//retun karnn log out
										}
										
										else if(n==6)
										{
											system("cls");
										   exit();
										//exitwenn
										}
 	                            
 	                            
		                       	        else 
										{
											menu();
										//retun karnn oni function eke nama
										}
		                       system("pause");
 	                           break;
							   }
							   
							   
							   
							   
							   case 3:
							   	{
							   		system("cls");
							   	   login();//login ekt return wenn
							   	  system("pause");
 	                              break;
								}
						        
						       case 4:
						        {
						        	exit();
								}	
						    
						    
					   }
 	   
 	   
 	   
 	   
 	     system("pause");
		  break;	
		}   //CASE 2 STOP
		  
		case 3:
		{
		 	
		 	system("cls");
		 	payment();//paiment billing
		 	
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
 	     
 	    
 		case 5://CASE 3 START
 	    {
 	    	system("cls");
 	    cout<<"LOG OUT"<<endl;
 	    login();
 	    //LOG OUT FUNCTION
 	     system("pause");
 	      break;
		}//CASE 3 STOP
		
		
		
		//CASE 4 START SAVI
 		case 6:
 		{
 			
 		system("cls");
 		
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
                    }//t/ magin madata karann text ek
        myfile.close();
            }	
                    
        else
            {
                cout << "CAN NOT OPEN FILE"; 
			}	
			
			
			
 		 system("pause");
 			break;
	    }
		
		
		
		
			
 	    //CASE 5 START
 	    case 7:
 		{
 	    exit (0);
 	    }
 	    
 	    
 	    default:
 	    cout<<"please enter the valid option..."<<endl;	
 	    
	}	system("cls");		
			
   

}


void exit()
{
	exit (0);
}//end function exit


void vdu()//vehival details update function
{   system("Color f0");

    cout<<"\t\t\t\t\t"<<endl;
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
	
   string write;/*string dtatyp eka variable nm write .
								              api input karan eka save venawa.habai 
	                                          deveni para run karaddi klin typ kara thin than idan liyawenne*/
	
    ofstream myfile;
    myfile.open ("vehicledts.txt",ios::app);//text file eke nm
	myfile<<"******VEHICLE DETAILS****"<<endl;//OY DEK MULIN TYPE WENWA text fil eke
    myfile<<"..............."<<endl;
   
    //text file ekt data input karnwa cout ek apit commandpromt eke penne ,api liyn de typ klm eka text eke aoto liya wenawa.
	
    cout<<"\t\t\t\t\t 1-Input vehicle TYPE"<<" ";                   cin>>write;    myfile<<"1-TYPE--"<<write<<endl;//variable nma
    cout<<"\t\t\t\t\t 2-Input vehicle NAME"<<" ";                   cin>>write;    myfile<<"2-NAME--"<<write<<endl;//variable nma
    cout<<"\t\t\t\t\t 3-Input vehicle REGISTRATION DATE"<<" ";      cin>>write;    myfile<<"3-NUMBER OF SEAT--"<<write<<endl;//variable nma
    cout<<"\t\t\t\t\t 4-Input vehicle AC TYPE"<<" ";                cin>>write;    myfile<<"4-AC TYPE--"<<write<<endl;//variable nma
    cout<<"\t\t\t\t\t 5-Input vehicle COST"<<" ";                   cin>>write;    myfile<<"5-VEHICLE COST--"<<write<<endl;//variable nma
    cout<<"\t\t\t\t\t 6-Input vehicle INSUARANCE TYPE"<<" ";        cin>>write;    myfile<<"6-INSUARANCE TYPE--"<<write<<endl;//variable nma
    cout<<"\t\t\t\t\t 7-Input vehicle INSUARANCE EXPIER DATE"<<" "; cin>>write;    myfile<<"7-INSUARANCE EXPIER DATE--"<<write<<endl;//variable nma
    cout<<"\t\t\t\t\t 8-Input vehicle FUEL TYPE"<<" ";              cin>>write;    myfile<<"8-FUEL TYPE--"<<write<<endl;//variable nma
    cout<<"\t\t\t\t\t 9-Input vehicle TANK CAPACITY"<<" ";          cin>>write;    myfile<<"9-TANK CAPACITY--"<<write<<endl;//variable nma
    cout<<"\t\t\t\t\t 10-Input vehicle ENGIN NUMBER"<<" ";          cin>>write;    myfile<<"10-ENGIN NUMBER--"<<write<<endl;//variable nma
    cout<<"\t\t\t\t\t 11-Input vehicle CHASSIS NUMBER"<<" ";        cin>>write;    myfile<<"11-CHASSIS NUMBER--"<<write<<endl;//variable nma
    myfile<<"  "<<endl;// 11 K TYP UNAT PASSE HIS PELI2K THIYAL
                                
    myfile.close();//file close karal
	
	system("cls");
	menu();//liyala iwar unama ai menu ekata yanawa		                          	
}


void acd()//add company details
{  
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
    myfile.open ("about company.txt",ios::app);//text file eke nm
    cout<<"\t\t\t\t\t WRITE HERE COMPANY DETAILS "<<endl;
    cin>>write;//text fil ekat input karann
    myfile<<write<<endl;//variable nma savindu pasingtha
    myfile.close();//file close karal	
    
    system("cls");
    menu();//liyala iawar unam ai menu akata yanawa
}

void emp()
{
	system("Color f0");
	
	cout<<"\t\t\t\t\t"<<endl;
    cout<<"\t\t\t\t\t"<<endl;
	cout<<"\t\t\t\t\t************************************************************"<<endl; 
	cout<<"\t\t\t\t\t************************************************************"<<endl;
	cout<<"\t\t\t\t\t**                                                        **"<<endl;
	cout<<"\t\t\t\t\t**                    ADD EMPLOYERS DETAILS               **"<<endl;
	cout<<"\t\t\t\t\t**                                                        **"<<endl;
	cout<<"\t\t\t\t\t************************************************************"<<endl;
	cout<<"\t\t\t\t\t************************************************************"<<endl;
	cout<<"\t\t\t\t\t"<<endl;
	cout<<"\t\t\t\t\t"<<endl;
	
   string write;/*string dtatyp eka variable nm write .
								              api input karan eka save venawa.habai 
	                                          deveni para run karaddi klin typ kara thin than idan liyawenne*/
	
    ofstream myfile;
    myfile.open ("emp.txt",ios::app);//text file eke nm
	myfile<<"******EMPLOYER DETAILS****"<<endl;//OY DEK MULIN TYPE WENWA text fil eke
    myfile<<"..............."<<endl;
    
    //text file ekt data input karnwa cout ek apit commandpromt eke penne ,api liyn de typ klm eka text eke aoto liya wenawa.
	
    cout<<"\t\t\t\t\t 1-Input FULL NAME"<<" ";       cin>>write;    myfile<<"1-NAME--"<<write<<endl;//variable nma
    cout<<"\t\t\t\t\t 2-Input DATE OF BIRTH"<<" ";   cin>>write;    myfile<<"2-DATE OF BIRTH--"<<write<<endl;//variable nma
    cout<<"\t\t\t\t\t 3-Input ADDRESS"<<" ";         cin>>write;    myfile<<"3-ADDRESS--"<<write<<endl;//variable nma
    cout<<"\t\t\t\t\t 4-Input TELEPHONE NUMBER"<<" ";cin>>write;    myfile<<"4-TELEPHON NUM--"<<write<<endl;//variable nma
    cout<<"\t\t\t\t\t 5-Input EMAIL ADDRESS"<<" ";   cin>>write;    myfile<<"5-EMAIL--"<<write<<endl;//variable nma
    cout<<"\t\t\t\t\t 6-Input JOB DESIGNATION"<<" "; cin>>write;    myfile<<"6-JOB DESIGNATION--"<<write<<endl;//variable nma
    cout<<"\t\t\t\t\t 7-Input JOB TO JOIN DATE"<<" ";cin>>write;    myfile<<"7-JOB TO JOIN DATE--"<<write<<endl;//variable nma
    cout<<"\t\t\t\t\t 8-Input JOB SALARY"<<" ";      cin>>write;    myfile<<"8-JOB SALARY--"<<write<<endl;//variable nma
    myfile<<"  "<<endl;// 11 K TYP UNAT PASSE HIS PELI2K THIYAL
                                
    myfile.close();//file close karal
	
    system("cls");
    menu();//liyala	
}

void bookin()
{
	system("Color f0");
	
	cout<<"\t\t\t\t\t"<<endl;
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
	
   string write;/*string dtatyp eka variable nm write .
								              api input karan eka save venawa.habai 
	                                          deveni para run karaddi klin typ kara thin than idan liyawenne*/
	
    ofstream myfile;
    myfile.open ("bookin.txt",ios::app);//text file eke nm
	myfile<<"******BOOKING DETAILS****"<<endl;//OY DEK MULIN TYPE WENWA text fil eke
    myfile<<"..............."<<endl;
   
    //text file ekt data input karnwa cout ek apit commandpromt eke penne ,api liyn de typ klm eka text eke aoto liya wenawa.
	cout<<"\t\t\t\t\t 1-Input CUSTOMER NAME"<<" ";   cin>>write;    myfile<<"1-CUSTOMER NAME--"<<write<<endl;//variable nma
    cout<<"\t\t\t\t\t 2-Input CONTACT NUM"<<" ";     cin>>write;    myfile<<"2-CONTACT NUM--"<<write<<endl;//variable nma
    cout<<"\t\t\t\t\t 3-Input CUSTOMER EMAIL"<<" ";  cin>>write;    myfile<<"3-EMAIL--"<<write<<endl;//variable nma
    cout<<"\t\t\t\t\t 4-Input VEHICLE TYPE"<<" ";    cin>>write;    myfile<<"4-VEHICAL TYPE--"<<write<<endl;//variable nma
    cout<<"\t\t\t\t\t 5-Input VEHICLE NAME"<<" ";    cin>>write;    myfile<<"5-VEHICLE NAME--"<<write<<endl;//variable nma
    cout<<"\t\t\t\t\t 6-Input PICUP ADDRESS"<<" ";   cin>>write;    myfile<<"6-PICUP ADDRESS--"<<write<<endl;//variable nma
    cout<<"\t\t\t\t\t 7-Input DROP ADDRESS"<<" ";    cin>>write;    myfile<<"7-DROP ADDRESS--"<<write<<endl;//variable nma
    cout<<"\t\t\t\t\t 8-Input DATE"<<" ";            cin>>write;    myfile<<"8-DATE--"<<write<<endl;//variable nma
    myfile<<"  "<<endl;// 11 K TYP UNAT PASSE HIS PELI2K THIYAL
                                
    myfile.close();//file close karal
	
    system("cls");
    menu();// RETURN 
}


//clear  details
void clvd()
{
	ofstream myfile;
    myfile.open ("vehicledts.txt",ios::out);//text file eke thin ewa dele wenwa ios::out eken tawa ekk thinawa ios::trunk kiya okkth hari
    myfile.close();//file close karal
		
	system("cls");
    menu();//liyala iawar unam ai menu akata yanawa				
}

void clacd()//clear karann company details
{
	ofstream myfile;
    myfile.open ("about company.txt",ios::out);//text file eke thin ewa dele wenwa ios::out eken tawa ekk thinawa ios::trunk kiya okkth hari
    myfile.close();//file close karal
	
	system("cls");
    menu();//liyala iawar unam ai menu akata yanawa		
}

void clemp()
{
ofstream myfile;
myfile.open ("emp.txt",ios::out);//text file eke thin ewa dele wenwa ios::out eken tawa ekk thinawa ios::trunk kiya okkth hari
myfile.close();//file close karal
	
system("cls");
menu();//liya	
}

void clbookin()
{
ofstream myfile;
myfile.open ("bookin.txt",ios::out);//text file eke thin ewa dele wenwa ios::out eken tawa ekk thinawa ios::trunk kiya okkth hari
myfile.close();//file close karal
		
system("cls");
menu();//liya	
}

void payment()
{

	int nd;
    float nk,nh,kp,hp,dp,tp /*total amount */,p /*available payment*/,dis;
    string pp,d,m,ty;
    

        cout<<"\t\t\t\t\t"<<endl;
        cout<<"\t\t\t\t\t"<<endl;
        cout<<"\t\t\t\t\t----------------------------------------------------------------------"<<endl;
        cout<<"\t\t\t\t\t::::::::::::::::           PAYMENT BILL           ::::::::::::::::::::"<<endl;
        cout<<"\t\t\t\t\t----------------------------------------------------------------------"<<endl;
        cout<<"\t\t\t\t\t"<<endl;
        cout<<"\t\t\t\t\t"<<endl;
        
		cout<<"\t\t\t\t\t 1) Enter pickup place: ";
        cin>> pp;
        cout<<"\t\t\t\t\t 2) Enter drop place: ";
        cin>> d;
        cout<<"\t\t\t\t\t 3) how far traveled you (km): ";
        cin>> nk;//ditance
        cout<<"\t\t\t\t\t 4) Enter traveled number of Hours: ";
        cin>> nh;  	
        cout<<"\t\t\t\t\t 5) Enter Number of Days: ";
        cin>> nd;
		cout<<"\t\t\t\t\t 6) Enter Vehical type: ";
        cin>> ty;  		
        cout<<"\t\t\t\t\t 7) Enter charge per km: ";
        cin>> kp;  	
		cout<<"\t\t\t\t\t 8) Enter charge per Hour: ";
        cin>> hp;  		  	
		cout<<"\t\t\t\t\t 9) Enter charge per Day: ";
        cin>> dp;
		cout<<"\t\t\t\t\t 10) Enter payment method(card or cash): ";
        cin>> m;
		
		  /*card		  		  			  
	      dis1=(tp*0.08);
	      p1=tp(*0.92);
	      
	      cash*/
	    tp=((nk*kp)+(nh*hp)+(nd*dp));
	    dis=(tp*0.02);
	    p=(tp*0.98);
	
	     system("cls");
	     
	    cout<<"\t\t\t\t\t"<<endl;
        cout<<"\t\t\t\t\t"<<endl;
        cout<<"\t\t\t\t\t-------------------------------------------------------------------"<<endl;
        cout<<"\t\t\t\t\t:::::::::::::::::     INVOICE    ::::::::::::::::::::::::::::::::::"<<endl;
        cout<<"\t\t\t\t\t-------------------------------------------------------------------"<<endl;
        cout<<"\t\t\t\t\t-                                                                  "<<endl;
        cout<<"\t\t\t\t\t-                                                                  "<<endl;
        cout<<"\t\t\t\t\t- 1)-From                    --"<<pp<<"                            "<<endl;
        cout<<"\t\t\t\t\t- 2)-To                      --"<<dp<<"                            "<<endl;
        cout<<"\t\t\t\t\t- 3)-Traveled                --"<<nh<<"hours and"<<" "<<nd<<"days. "<<endl;
        cout<<"\t\t\t\t\t- 4)-Your Traveled Distance  --"<<nk<<"km                          "<<endl;
        cout<<"\t\t\t\t\t- 5)-Your Vehicle Type       --"<<ty<<"                            "<<endl;
        cout<<"\t\t\t\t\t- 6)-Charge Per One Km       --"<<kp<<"Rs.                         "<<endl;
        cout<<"\t\t\t\t\t- 7)-Charge Per Hour         --"<<hp<<"Rs.                         "<<endl;
        cout<<"\t\t\t\t\t- 8)-Charge Per Day          --"<<dp<<"Rs.                         "<<endl;
        cout<<"\t\t\t\t\t- 9)-Payment Method          --"<<m<<"                             "<<endl;
        cout<<"\t\t\t\t\t-10)-You Have"<<" "<<dis<<"Rs"<<" "<<"Special Discount .           "<<endl;
        cout<<"\t\t\t\t\t-                                                                  "<<endl;
        cout<<"\t\t\t\t\t-         ******   You Should Pay   --"<<p<<"Rs.                   "<<endl;
        cout<<"\t\t\t\t\t-------------------------------------------------------------------"<<endl;
        cout<<"\t\t\t\t\t::::::::::::::::::   COME AGAIN ! :::::::::::::::::::::::::::::::::"<<endl;
        cout<<"\t\t\t\t\t-------------------------------------------------------------------"<<endl;
          	
}
	
	
