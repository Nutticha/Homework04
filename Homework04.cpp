#include<iostream>
#include<string>
using namespace std;
int main()
{
    char  num1  ;
	int num2 , num3;
	string name1 , name2;
	cout << "//////////// MENU ///////////" << endl;
	cout << "1. Register" << endl;
	cout << "2. Login" << endl;
	cout << "Q  Exit"   << endl;
	do{
	  cout << "=========================" << endl;
	  cout << "Enter menu :";
	  cin  >> num1;
	  cout << "=========================" << endl;
	  if(num1 == '1')
	  {
		  cout << "********* REGISTER *********"<< endl;
		  cout <<"Input Username :";
		  cin  >> name1;
		  cout <<"Input Password :";
          cin >>  num2;
		 
	  }
	   else if(num1 == '2')
	  {
		  cout << "********** LOGIN **********" << endl;
		  cout <<"Input Username :";
		  cin  >> name2;
		  cout <<"Input Password :";
		  cin  >> num3; 
	  
	   if((name2 != name1) ||( num2 != num3))
		{
			cout << "!!!!!!!! Username or Password incorrect Please try again !!!!!!!!!!" << endl;
		}
		else cout << "Username or Password correct ^__^ " <<endl;
	  }
	 
	} while(num1 != 'Q' );
	   cout << "************ Exit *********** " << endl;
	  return(0);
}