#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>



int main( int argc, char** argv)
{

  return 0 ;
}


/*
//wes tho hal\ Old English
whence thou  /
-----------------------------------------------------------

sempahores: 
- asynchronous threadsafe
block on "lock" and "unlock"

similar to: bariiers, mutexes, and condition variables

Mutexes - Sensitive to ordering and indentity


asynchronous: insensitive ordering of calls does not matter

threadsafe: insensitive to identity

Why is this good for signal hanlders?
Signal Hanlders can run in any context at any time.

-----------------------------------------------------------

Sockets: man socket

standard socket AF_INET - IPv4
SOCK_STREAM - TCP
together - TCPIP


returns socketFD socket(int domain, int type, int protocal);
can use read() write()
man netinet/in.h






primitive: 

-----------------------------------------------------------


Mutex: test-and-set
protects Data / critical Code Sections

barrier: fetch-and-increment
prfotect computation (finish some phase before next phase)

condition variables: compare-and-swamp
protect smeantics/operation of machine or software state







 */
/*

const:

const int x = 3;

const int * y = &x; // lock value 

int * const z = &x; // lock address

const int * const v = &x; // lock value and address

int const * w = &x; // lock value


static: all instnaces see the same variable, all instances change the same variable
exists before during and after code.


 */
