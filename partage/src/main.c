#include "iftun.h"
#include <stdio.h>
#include "extremite.h"

int main(int argc, char ** argv)
{

	int virtual_socket = tun_alloc( argv[1] );

	if (fork() != 0)
	{
		ext_out(argv[3], virtual_socket);
	}
	else
	{
		sleep(1);
		ext_in (argv[2], argv[3], virtual_socket);
	}

	return 0;
}
