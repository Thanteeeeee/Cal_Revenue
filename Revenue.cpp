#include<iostream>
#include<string>
using namespace std;
int main()
{ 
   
	string Name;
	int   SLR  ;
	int   SL   ;
	float COM  ;
	cout << "Enter Name       : "         ;
	cin  >> Name                          ;
	cout << "Enter Salary     : "         ;
	cin  >> SLR                           ;
	cout << "Enter Sale       : "         ;
	cin  >> SL                            ;
	cout << "Enter Commission : "         ;
	cin  >> COM                           ;
	cout << "-----Output-----\n"          ;
	cout << "Your name        : " << Name << endl                        ;  
	cout << "Total Revenue    : " << SLR+(SL*(COM/100)) << "Bath "<< endl ;
	cout << "-----------------"   << endl ;



	system ("pause");
	return(0);
}
 
