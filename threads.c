#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>


int main( int argv, char ** argc)
{
  


}

/*
Nonblocking IO
-returns even if the operation is not complete
-condition for return is often end of current timeslice
-often return a status value to indicate how much was completed

Blocking Calls
-do not return until operation is done

***************************************************************

PROS v CONS

NonBlocking (IO)
good:
   -if it break, you regain control
   -do not actively wait
bad:
   -complex code
   -harder to reason about

------------------------------------------

Blocking IO:
good:
   -simplier code
   -simplier to reason about
bad:
   -If it breaks, you are broken
   -You don't need to be scheduled to do IO (Actively watching for the IO to finish ie: watching a pot boil)


************************************************************************

How do you have a nonBlocking function call?

float sqrt(float num)

float (*keepComputing)(float) = sqrt;   //Use a function pointer, create another stack(MultiThreading)

Anything on the heap has GLOBAL scope for everything in the proccess, including all stack frames

thread_create( void* (*fn)(void*),  )             //thread is another context of execution   youtube:bisqwit
                          //^ void* parameter can be a struct containing the n parameters of the function required//

Cannot pass stack variables into a thread, pvariables must be in heap


REFS:
man pthread.h
man pthread_create
man pthread_exit
Compile and link with -pthread


pthread_attrib_setdeatchstate(&threadmAttr, PTHREAD_CREATE_JOINABLE)

pthread_create(&thread, &threadAttr, (*fnPointer), void * args);

pthread_exit(0); //instead of returning from function being threaded
           //^ 0 or address of return value


in main
exit_signal happens after return
atexit(void (*function)(void));
exit kills current context

void _exit //stops current proccess in its tracks
           //cannot catch exit_signal if _exit is called

Thread Flavors
PTHREAD_SCOPE_SYSTEM  \\kernel is aware and able to schedule threads
PTHREAD_SCOPE_PROCESS \\kernel is unaware \\USER THREAD no MULTICORE


 */
