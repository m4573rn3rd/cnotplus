#include "other.h"
#include <iostream>
#include <streambuf>
#include <istream>
#include <ostream>
#include <unistd.h>

using namespace std;
time_t my_time = time(NULL);


void MyTime() {
cout<<"Hi there, how are you?"<<endl;
}


void MyHost() {
cout<<"Do I care?"<<endl;
cout<<"\n===================\n";
printf("%s", ctime(&my_time));
system("hostname");
// Print the system ip address.
system("hostname -I | cut -f1 -d' '");

}

void BackUp() {
cout<<"Backing up the system"<<endl;
cout<<"\n===================\n";
cout<<"Starting in a few second"<<endl;
usleep(3000000);
cout<<"Backing up the system"<<endl;
usleep(3000000);
cout<<"Done going back to main."<<endl;
system("./mainprogram");         	

}