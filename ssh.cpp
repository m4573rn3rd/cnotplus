#include <stdio.h>
int main() {
    FILE * fp = popen( "ssh -t -t root@192.168.1.2", "r" );
    if ( !fp ) {
        fprintf( stderr, "Could not execute command \n" );
        return 1;
    }
    const int BUFSIZE = 1000;
    char buff[ BUFSIZE ];
    while( fgets( buf, sizeof( buff ),  fp ) ) {
        fprintf( stdout, "%s", buff  );
    }
    pclose( fp );
    fp=NULL;
    return 0;
}