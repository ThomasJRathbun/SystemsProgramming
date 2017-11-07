#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>



int main( int argc, char** argv )
{


  return 0;
}


/*
Synchronization:

mutex: Mutual Exclusion Device
lock(mutexA);
shared +=2
unlock(mutex)

shared = 1;

Who locks?

USER:
-Has no control of Scheduler
-Can always be interupted

SYS:
-Slow to context switch 2x( into SYS then back to USER)

//BOTH SUCK                                                                
Special Hardware Instruction
implementing synchronization: (synchronization primitives)
-test-and-set

-compare-and-swap

-fetch-and-increment

TA              TB
lock(mutexA)    lock(mutexA)    
shared +=2      share -=2
                unlock(mutexA)
thing =12

stuff- thing+shared

mcguffin = 42
unlock(mutexA)
pthread_exit(0)

--global ordering
--rising phase falling phase

Qualities of Deadlock:
1. Mutual Exclusion
2. hold and wait
3. no preemption
4. circular wait

**Compiler Directives:
anything with "__" in front is usually a gcc compiler directive

__FILE__ gives current file as string
__LINE__ gives integer of current line
**
*/
