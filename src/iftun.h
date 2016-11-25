#ifndef ___IFTUN___
#define ___IFTUN___

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <sys/socket.h> 
#include <sys/stat.h>
#include <sys/ioctl.h>

#include <unistd.h>
#include <fcntl.h>
#include <linux/if.h>
#include <linux/if_tun.h>

//Création de l'interface IPv4 virtuel
int tun_alloc(char *);

#endif
