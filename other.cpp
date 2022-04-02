#include "other.h"
#include <iostream>
#include <streambuf>
#include <istream>
#include <ostream>
#include <unistd.h>

// Set color of the program
#define NC "\033[0m"
#define RED "\033[0;31m"
#define GRN "\033[0;32m"
#define CYN "\033[0;36m"
#define REDB "\033[41m"

using namespace std;
time_t my_time = time(NULL);


void MyTime() {
system("clear");
cout<<"Hi there, how are you?"<<endl;
}


void MyHost() {
system("clear");
cout<<"Host Info"<<endl;
cout<<"\n===================\n";
printf("%s", ctime(&my_time));
system("hostname");
// Print the system ip address.
system("ls");
usleep(3000000);
system("./mainprogram");
}

void BackUp() {
system("clear");
cout<<"Backing up the system"<<endl;
cout<<"\n===================\n";
cout<<"Starting in a few second"<<endl;
usleep(3000000);
cout<<"Backing up the system"<<endl;
usleep(3000000);
cout<<"Done going back to main."<<endl;
system("./mainprogram");         	

}
