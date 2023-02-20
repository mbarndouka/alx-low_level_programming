#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Determine if a random number is positive, negative or zero.
(*
 * Return: 0 on success
 */
int main(void){
  
  int n;
  
  srand(time(0));
  n = rand() - RAND_MAX / 2;
  /* your code goes there */
  if(n > 5){
    printf("Last digit of %d is %s\n",n,"and is greater than 5");
  }
  else if(n < 6 && n != 0){
    printf("Last digit of %d is %s\n",n,"and is less than 6 and not 0");
  }
  else{
    printf("Last digit %d is %s\n", n, "zero");
  }
  return(0);
 }
