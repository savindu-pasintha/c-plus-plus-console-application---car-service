#include <iostream>

using namespace std;


int main()
{

    int chg,pay,method,nchg,bank;
    
    float tm,dt,dis;//tm=timehour,dt=date,dis=kmgana
	,
    string pp,dp,ty,x;//sp=pp,ep=dp,
    
    int z=0,y=1;
    while (z<y)
    {


        cout<<"----------------------------------------------------------------------"<<endl;
        cout<<"::::::::::::::::           PAYMENT BILL           ::::::::::::::::::::"<<endl;
        cout<<"----------------------------------------------------------------------"<<endl<<endl;
        cout<<"Enter pickup place: ";
        cin>> pp;
        cout<<"Enter drop place: ";
        cin>> dp;
        cout<<"how far traveled you (km): ";
        cin>> dis;//ditance
        cout<<"Enter traveled time(hours): ";
        cin>> tm;
        cout<<"Enter charge per km: ";
        cin>> pay;
        
        
        cout<<"----------------------------------------------------------------------"<<endl;
        cout<<"::::::::::::::::        SELECT CAB TYPE        ::::::::::::::::::::"<<endl;
        cout<<"----------------------------------------------------------------------"<<endl<<endl;
        
        cout<<"     1-MINI "<<endl;
        cout<<"     2-CAR "<<endl;
        cout<<"     3-VAN "<<endl;
       
        cout<<"Select vehicle type 1-3: "<<endl; 
        cin>>ty;
        cout<<""<<endl;
        
        
        chg=dis*pay;
        
        cout<<"----------------------------------------------------------"<<endl;
        cout<<":::::::::::::::::     INVOICE    :::::::::::::::::::::::::"<<endl;
        cout<<"----------------------------------------------------------"<<endl<<endl;
        cout<<""<<endl;
        cout<<""<<endl;
        cout<<"1-From                  --: "<<pp<<endl;
        cout<<"2-To                    --  : "<<dp<<endl;
        cout<<"3-Traveled              --"<<tm<<"hours and"<<day<<"days"<<endl;
        cout<<"4-Date                  --"<<dt<<endl;
        cout<<"5-Your Traveled Distance--"<<dis<<"km"<<endl;
        cout<<"6-Your Vehicle Type     --"<<ty<<endl;
        cout<<"7-Charge Per One Km     --"<<pay<<"Rs"<<endl;
        cout<<"8-Charge Per Hour          --"<<hpay<<"Rs"<<endl;
        cout<<"Payment Method          --"<<method<<endl;
        cout<<"You Have"<<dis<<"Rs"<<"Special Discount"<<endl
        cout<<"You Shouold Pay         --"<<tpay<<"Rs"
        
        cout<<"___________________________________________________________"<<endl;
        cout<<"::::::::::::::::::   COME AGAIN   :::::::::::::::::::::::::"<<endl;
        cout<<"-----------------------------------------------------------"<<endl;
        
        if (spd>100)
        {
            cout<<"You are pass the speed Limit"<<endl;
            cout<<"You have to pay Rs.1000/- for that issue."<<endl;//1000 is value of penalty for high speed.
            cout<<"Charge for travel is Rs."<<chg<<"/-"<<endl;
            chg=chg+1000;
            cout<<"Total charge for travel is Rs."<<chg<<"/-"<<endl<<endl;   //nowadays values are included.
        }
        else
        {
            cout<<"Charge for travel is Rs."<<chg<<"/-"<<endl<<endl;
        }
        cout<<"     --------------------------    "<<endl;
        cout<<"Select Your Paying Method: "<<endl;
        cout<<"     1 - Cash"<<endl;
        cout<<"     2 - Card"<<endl;
      
        cin>>method;
        if (method==1)
        {
            nchg=chg;
            cout<<"Your Final Charge is Rs."<<nchg<<"/="<<endl<<endl;

        }
        else if (method==2)
        {
            cout<<"--- You got 2% discount ---"<<endl;
            nchg=chg*98/100;
            cout<<"Your Final Charge is Rs."<<nchg<<"/="<<endl<<endl;

        }
        else if (method==3)
        {
            cout<<"Select Your Bank: "<<endl;
            cout<<"     1 - People's Bank"<<endl;
            cout<<"     2 - Sampath Bank"<<endl;
            cout<<"     3 - Commercial Bank"<<endl;
            cout<<"     4 - Hatton National Bank"<<endl;
            cout<<"     5 - Bank Of Celon"<<endl;
            cin>>bank;
            if (bank==1)
            {
                cout<<"you got a 5% discount"<<endl;
                nchg=chg*95/100;
                cout<<"Your Final Charge is Rs."<<nchg<<"/="<<endl<<endl;
            }
            else if (bank==2)
            {
                cout<<"you got a 4% discount"<<endl;
                nchg=chg*96/100;
                cout<<"Your Final Charge is Rs."<<nchg<<"/="<<endl<<endl;
            }
            else if (bank==3)
            {
                cout<<"you got a 3% discount"<<endl;
                nchg=chg*97/100;
                cout<<"Your Final Charge is Rs."<<nchg<<"/="<<endl<<endl;
            }
            else if (bank==4)
            {
                cout<<"you got a 5% discount"<<endl;
                nchg=chg*95/100;
                cout<<"Your Final Charge is Rs."<<nchg<<"/="<<endl<<endl;
            }
            else if (bank==5)
            {
                cout<<"you got a 4% discount"<<endl;
                nchg=chg*96/100;
                cout<<"Your Final Charge is Rs."<<nchg<<"/="<<endl<<endl;
            }

        }
        else
        {
            cout<<"--- Invalid Input ---"<<endl;
            nchg=chg;
            cout<<"Your Final Charge is Rs."<<nchg<<"/="<<endl<<endl;

        }


        
        cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
    }
}
