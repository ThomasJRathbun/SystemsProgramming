#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main( int argc, char** argv)
{

  return 0;
}


/*
 1% incidence

 %98 of chance test is accurate

 d nnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnn

--

Synchronization
'atomic' hardware instruction for synch primitives

SW::
System:
    -Can turn off interupts
    -takes forever to do context switches
User:
    -Can not turn off interupts
    -User synch can be interupted causeing the same problem that shared data has

mutual exclusion:
mutex - lock/unlock
    -protects memory using the scheduler (Does not return until lock is unlocker)
    
Possible Issues using Mutexes::
-deadlock
    1. mutual exclusion
    2. no preemption
    3. hold and wait
    4. circular wait

*Rules to avoid circular wait
    1. Global Ordering (Ensure  that Mutexes are locked and unlocked in same order)
    2. Rising Falling Permission Phase (Don't Lock after calling an Unlock)

Mutexes - synch on code block (critical section)
(data)
stop threads while data is in use

-----------------------------------------------------------------

barrier - synch on max value of counter (code segmented/region/area in code)
(computation)
stop threads at a barrier (when each thread completes, continue)

operation: increment counter and reset counter
- all threads to hit barrier increment it
- Last thread to increment it to the max/target value resets the barrier
- Once barrier is reset, intrement call returns and all get to continue
primitive: fetch-and-increment

-----------------------------------------------------------------

condition variables - synch on an event(detect when some value is set)
man pthread_cond_timedwait
    - pthread_signal()
    - pthread_broadcast()

operation: wait until somethin occurs
- all threads calling wait block until condition
- condition is signalled by a detector thread calling singal()(to wake upone) or broadcast()(to wake up all)

primitive: compare-and-swap

-----------------------------------------------------------------

Synchronization plus Logic::
Monitor (often a que)
    - Object-Oriented synch supervisor
    - Monitor is given all primites and controls access to them
    - if a thread wants access to a resource, ask monitor

-----------------------------------------------------------------

Edsger Dijkstra - Semaphores
p() - decrement - consumer/wait
v() - increment - producer/notify

sem_wait()   - decrement shared counder (blocks if counter is 0)
sem_notify() - increment shared counter (blocks if counter is maxed)

asynchronous threadsafe

 */
