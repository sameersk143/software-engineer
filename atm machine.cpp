#include<iostream>
using namespace std;
int main()
{
	int option;
	double balance=1000;
	double amount;
	cout<<"options available in menu are\n";
	cout<<"1.check balance \n2.deposit money\n3.withdraw money\n4.exit";
	do{
	cout<<"\nenter the option u need ";
    cin>>option;
	switch(option)
	{
	 case 1:
	    cout<<"balance in ur account is "<<balance<<"rs";
	    break;
   	 case 2:
     	cout<<"deposit money";
    	cin>>amount;
	    balance+=amount;
	    cout<<"after adding money ur balance is "<<balance;
    	break;
	 case 3:
	     cout<<"enter withdraw amount";
       	 cin>>amount;
	      if(amount>balance)
     	     cout<<"cant withdraw amount";
	      else
	         cout<<"remaining balance is"<<balance;
	         balance-=amount;
    	      break;
    }
    }while(option!=4);
	return 0;
}
