// Author: Shakeb Siddiqui sms8508@psu.edu
// Collaborator:
// Collaborator:
// Collaborator:
// Section: 
// Breakout: 
#include <stdio.h>
#include <readline/readline.h>
#include <stdlib.h>

int sum_n(int n) {
  if (n <=0) {
    return 0;
  }
  return n + sum_n(n-1);
}

void print_n(const char *s, int n) {
  if (n <=0) {
    return;
  }
  printf("%s\n", s);
  print_n(s, n-1);
}


int main(void) {
  char *nums = readline("Enter an int: ");
  int num = atoi(nums);
  printf("sum is %i.\n", sum_n(num));
  char *word = readline("Enter a string: ");
  print_n(word, num);
  return 0;
}