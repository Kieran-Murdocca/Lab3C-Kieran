// Author: Kieran Murdocca kkm5754@psu.edu
// Collaborator: Augustus Perseghin agp5191@psu.edu
// Collaborator: Zehao Liu zql5426@psu.edu
// Collaborator: Nidhi Swamy nms6241@psu.edu
// Section: 004
// Breakout: 15
// Part 1: lab3-c

#include <stdio.h>
#include <readline/readline.h>
#include <stdlib.h>

int sum_n(int n);
void print_n(const char *s, int n);

int main(void) {
  int num=0;
  char str[50];
  printf("Enter an int: ");
  // processing sum
  scanf("%d", &num);
  printf("%d\nsum is %d.", num, sum_n(num));
  // processing string
  printf("\nEnter a string: ");
  scanf("%s", str);
  print_n(str, num);
}

int sum_n(int n) {
  if (n>0) {
    return n + sum_n(n-1);
  }
   else {
    return 0;
  }
}

void print_n(const char *s, int n){
  if (n>0) {
    printf("\n%s", s);
    print_n(s, n-1);
  }
  else {
    return; 
  }
}