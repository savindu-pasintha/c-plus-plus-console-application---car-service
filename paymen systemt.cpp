#include<iostream>
using namespace std;
void payment();
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
