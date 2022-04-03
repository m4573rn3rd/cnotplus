#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <fstream>
#include <string>
#include "other.h"
#include <unistd.h>
#include <sqlite3.h>
// Set color of the program
#define NC "\033[0m"
#define RED "\033[0;31m"
#define GRN "\033[0;32m"
#define CYN "\033[0;36m"
#define REDB "\033[41m"

using namespace std;

int exit_status;
int main(void){
string line;
char selection;

time_t my_time = time(NULL);

system("clear");
cout<< RED "\n======================================\n"NC;
cout<<                       "Menu";
cout<< RED "\n======================================\n"NC;

cout<<"\n A - Pring Constant";

cout<<"\n B - Print The Time";

cout<<"\n C - Run Commands";

cout<<"\n D - Check OS";

cout<<"\n E - Question True or False";

cout<<"\n F - Backup System Files";

cout<<"\n G - Clear Screen";

cout<<"\n X - Exit";

cout<< RED "\n======================================\n"NC;
cout<<"Enter selection:";



// read the input

cin>>selection;

switch(selection)

{

case 'A' :
case 'a' :{
		  MyTime();
	  }

break;

case 'B' :

case 'b' :{

		  MyHost();
	  }

break;

case 'C' :

case 'c' :{
			  cout<<"\nSomething\n";	
	          cout<< RED "\n===================\n"NC;
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
	          system("./mainprogram");
	  
	  }

break;

case 'D' :

case 'd' :{
		 cout<<"\n Found OS\n";
		 system("./mainprogram");
}

break;

case 'E' :

case 'e' :{

        cout<< RED "\n===================\n"NC;
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
            system("./mainprogram");
         	}
          }

case 'F' :
case 'f' :{
       BackUp(); 
          }

case 'G' :
case 'g' :{
       ClearScreen(); 
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
