#include "other.h"
#include <iostream>
#include <streambuf>
#include <istream>
#include <ostream>
#include <unistd.h>
#include <sqlite3.h>

// Set color of the program
#define NC "\033[0m"
#define RED "\033[0;31m"
#define BLUE "\033[0;34m"
#define PURPLE "\033[0;35m"
#define GRN "\033[0;32m"
#define CYN "\033[0;36m"
#define REDB "\033[41m"

using namespace std;
time_t my_time = time(NULL);
char greeting[] = "Program Is Now Running.";

void MyTime() {
system("clear");
//cout << BLUE "Some Blue colored text"NC<< endl;
//cout<<"Hi there, how are you?"<<endl;
//usleep(3000000);
cout<< RED "\n======================================\n"NC;
cout<<"Program Started";
cout<< RED "\n======================================\n"NC;
cout << "Program Started\n";
cout << greeting << endl;
cout << "\033[1;31mbold red text\033[0m\n";
cout << CYN "Some cyan colored text" << endl;
cout << GRN "Some green colored text" << endl;
cout << REDB "Add red background" NC << endl;
cout << "reset to default colors with NC" << endl;
usleep(5000000);
system("./mainprogram"); 
}

void MyHost() {
system("clear");
cout<< RED "\n======================================\n"NC;
cout<<"Host Info";
cout<< RED "\n======================================\n"NC;
printf("%s", ctime(&my_time));
system("hostname");
// Print the system ip address.
system("ls");
usleep(3000000);
system("./mainprogram");
}

void BackUp() {
system("clear");
cout<< RED "\n======================================\n"NC;
cout<<"\n Backup";
cout<< RED "\n======================================\n"NC;
cout<<"Starting in a few second"<<endl;
usleep(3000000);
cout<<"Backing up the system"<<endl;
usleep(3000000);
cout<<"Done going back to main."<<endl;
system("./mainprogram");         	
}

void ClearScreen() {

system("clear");
}
