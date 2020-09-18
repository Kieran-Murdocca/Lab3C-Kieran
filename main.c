// Author: Kieran Murdocca kkm5754@psu.edu
// Collaborator: Augustus Perseghin agp5191@psu.edu
// Collaborator: Zehao Liu zql5426@psu.edu
// Collaborator: Nidhi Swamy nms6241@psu.edu
// Collaborator: Peter Schulman pks5481@psu.edu
// Section: 004
// Breakout: 15
// Part 1: lab3-c

#include <stdio.h>
#include <readline/readline.h>
#include <stdlib.h>

int sum_n(int n) {
  if (n == 0) {
    return 0;}
    else {
      return(n+ sum_n(n-1));
    }
}

void print_n(const char *s, int n) {
  if (n>0) {
    printf("%s\n", s);
    print_n(s, n-1);
  }
}

int main(void) {
  int n = atof(readline("Enter an int: "));
  printf("sum is %d.\n", sum_n(n));

  char *s = readline("Enter a string: ");
  print_n(s, n); 
return 0; 
}