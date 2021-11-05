#include "bankAccount.h"
#include <iostream> 
#include <string>
using namespace std;




int main(){
bankAccount jackAccount("jack smith",50);
bankAccount jillAccount("Jill Brian",100);
bankAccount bankArray[3] = { bankAccount("Ralph Kramden",10),bankAccount("Alice Kramden",20),bankAccount("Ed Norton",30) };


//depositing thirty dollars
jackAccount.deposit(30);
jillAccount.deposit(30);
for (int i=0; i<=3;i++){
	bankArray[i].deposit(30);
	}

//withdrawing twenty dollars
jackAccount.withdraw(20);
jillAccount.withdraw(20);
for (int i=0; i<=3;i++){
	bankArray[i].withdraw(20);
	}	

//Printing out accounts
jackAccount.getName();
jackAccount.getBalance();
cout << "Account =" << jackAccount.getName() << endl; 
cout <<  "Balance =" << jackAccount.getBalance() << endl;

jillAccount.getName();
jillAccount.getBalance();
cout << "Account =" << jillAccount.getName() << endl; 
cout << "Balance =" << jillAccount.getBalance() << endl;

for(int n = 0; n<=3; n++){
	bankArray[n].getName();
	bankArray[n].getBalance();
	cout << "Account =" << bankArray[n].getName() << endl; 
	cout << "Balance =" << bankArray[n].getBalance() << endl;
	}
return 0;
}
