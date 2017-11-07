#include <stdio.h>
#include <stdilib.h>
#include <stdio.h>

int main( int argc, char ** argv )
{

  return 0;
}



/*
man time(1)
    real %e
    user %U
    syst %S

compile and link with -pthread
threads:
-give a function its own stack in your Process
(new 'thread of execution'//thread)

-to recieve data from a thread, the thread must be joined
-No returning from pthread,  pthread_exit(void *retval)

-------------------------------------------------------

Thread:
int * returnValue = (int*)malloc(sizeof(int));
*returnValue = 1;
pthread_exit((void*)returnValue);


Thread Creator:
pthread_join(&thread, retval);
int returnValue = *( *((int*)retval));
free( *((int**)retval));

------------------------------------------------------

pthread_yield
-ask to schedule someone else


User Threads (OS is unaware)
+ your in charge of the scheduling
+ operating system doesnt have to be loaded//no context switching
//only need to change stack pointer, program counter, and registers
- cannot have true parallelism
- code-complexity (must write scheduler)
- can't do blocking IO without blocking the whole process


Thread A           |     Thread B
lock(mutexA);            lock(mutexA);
int val = *acct;         int val = *acct;
val+= credit;            val-=debit;
*acct=val;               *acct=val;
unlock(mutexA);          unlock(mutexB);



mutual exclusion device - mutex
lock 


//segmented paging

lock(aMutex )
{
   while(aMutex != 0 ){}
   aMutex = pid();

   retun 1;
}

unlock( aMutex )
{
   aMutex = 0;

   return 0;
}







 */
