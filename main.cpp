#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <fstream>
#include <string>
#include "other.h"

#define NC "\e[0m"
#define RED "\e[0;31m"
#define GRN "\e[0;32m"
#define CYN "\e[0;36m"
#define REDB "\e[41m"



using namespace std;

int exit_status;

int main(void){
string line;
char selection;
char greeting[] = "Program Is Now Running.";
time_t my_time = time(NULL);


cout<<"\n Menu";

cout<<"\n===================\n";

cout<<"\n A - Pring Constant";

cout<<"\n B - Print The Time";

cout<<"\n C - Run Commands";

cout<<"\n D - Check OS";

cout<<"\n E - Question True or False";

cout<<"\n F - Backup System Files";

cout<<"\n X - Exit";

cout<<"\n Enter selection:";

// read the input

cin>>selection;

 

switch(selection)

{

case 'A' :
case 'a' :{
		  cout<<"\n===================\n";
		  cout << "Program Started\n";
	          cout << greeting << endl;
	  	  cout << "\033[1;31mbold red text\033[0m\n";
		  cout << CYN "Some cyan colored text" << endl;
		  cout << GRN "Some green colored text" << endl;
                  cout << REDB "Add red background" NC << endl;
                  cout << "reset to default colors with NC" << endl;
		  MyTime();
	  	  cout << '\a';
	  }

break;

case 'B' :

case 'b' :{

		  MyHost();
	  }

break;

case 'C' :

case 'c' :{
	          cout<<"\n===================";
		  // Append Log File Test.
                  std::ofstream outfile;
                  outfile.open("/tmp/rawlog/log.txt", std::ios_base::app);
                  outfile << ctime(&my_time);
		  cout<<"\n Running System Commands";
		  system("clear");
		  // Print The Host Name.
    		  system("hostname");
                  // Print the system ip address.
                  system("hostname -I | cut -f1 -d' '");
    		  // ctime() used to give the present time
    		  printf("%s", ctime(&my_time));
    		  // Create Log dir.
    		  printf ("%s \n", "Creating Log Dir");
    		  system("mkdir /tmp/rawlog");
    		  //Create log file.
    		  system("touch /tmp/rawlog/log.txt");
    		  system("echo start >>/tmp/rawlog/log.txt");
    		  system("cat /tmp/rawlog/log.txt");
	  
	  
	  }

break;



case 'D' :

case 'd' :{
		 cout<<"\n Found OS\n";
}

break;


case 'E' :

case 'e' :{

                cout<<"\n===================";
		cout << "enter 0 to exit and 1 to continue " << endl;
        	cin >> exit_status;
        	if (exit_status == 0)
        	{
		cout<<"\n Bye";	
               	break;
         	}
         	else
         	{
	       cout<<"\n No Bye";
               // continue;
	       //main ();
	      // cin>>selection;
         	}
          }



case 'F' :

case 'f' :{

       BackUp(); 
          }





case 'X' :

case 'x' :{cout<<"\n To exit the menu";}

break;

// other than A, M, D and X...

default : cout<<"\n Invalid selection";

// no break in the default case

}

cout<<"\n";

 

return 0;

}