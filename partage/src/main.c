#include "iftun.h"
#include <stdio.h>
#include "extremite.h"

int main(int argc, char ** argv)
{

	int virtual_socket = tun_alloc( argv[1] );
	//printf("File descriptor : %d\n", virtual_socket);
	//transfert(virtual_socket, 1);
	if (fork() != 0)
	{
		ext_out(argv[3]);
	}
	else
	{
		printf("Fils\n");
		sleep(1);
		printf("Fils\n");
		ext_in (argv[2], argv[3], virtual_socket);
	}
	printf("C'est la fin\n");
	return 0;
}
