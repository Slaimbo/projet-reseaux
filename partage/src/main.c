#include "iftun.h"
#include <stdio.h>

int main(int argc, char ** argv)
{

	int virtual_socket = tun_alloc( argv[1] );
	printf("File descriptor : %d\n", virtual_socket);
	transfert(virtual_socket, 1);
	return 0;
}
