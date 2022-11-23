/*
 * Fibonacci numbers defined recursively
 */
#include "fib.h"

#include <assert.h>		/* assert */
#include <stdio.h>		/* printf */

/* Fibonacci function definition */
int fib(int n, int p, int pp) {    // p=0, pp=1. You sadly can't do default arguments in C.
  assert(n>=1);
  
  if (n == 1)
    return p;
  if (n==2)
    return pp;
  return fib(n-1,pp,p+pp);
}