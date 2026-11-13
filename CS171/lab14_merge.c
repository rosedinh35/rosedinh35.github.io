/*
  Rose Dinh
  CS-171
  11/6/26
  lab14_merge.c
  
  Read two -1-terminated sequences, each already sorted from
  smallest to largest, and print them merged into one
  combined sorted sequence.
  
  Compile with:
  cc lab14_merge.c
  
  Run with:
  ./a.out
  
  Test case:
  first: 10 20 30 60 80 120 -1
  second: 5 6 7 41 43 71 132 145 173 -1
  output: 5 6 7 10 20 30 41 43 60 71 80 120 132 145 173
*/

#include <stdio.h>
int main()
{
  // Declare Variables and Initialize
  int seq1[100];
  int len1 = 0;
  int seq2[100];
  int len2 = 0;
  int combine[200];
  int x = 0;
  int y = 0;
  int i = 0;
  int j = 0;
  int k = 0; // realizing i need a third for the combine 
  
  // Initializing both arrays
  while (i < 100) {
    seq1[i] = 0;
    ++i;
  }

  while (j < 100) {
    seq2[j] = 0;
    ++j;
  }

  // Getting user input for first set of sequence
  printf("Enter positive values from smallest to largest, terminating with -1: ");
  scanf("%d", &x);

  // While loop to put the seq into an array and end it with -1
  i = 0;
  while (x != -1 && i < 100) {
    seq1[i] = x;
    ++i;
    ++len1;
    
    printf("Enter positive values from smallest to largest, terminating with -1: ");
    scanf("%d", &x);
  }

  // Getting user input for second set of sequences
  printf("Enter another sequence from smallest to largest, terminating with -1: ");
  scanf("%d", &y);

  // While loop to put seq into separate array and end it with -1
   j = 0;
   while (y != -1 && j < 100) {
     seq2[j] = y;
     ++j;
     ++len2;
    
     printf("Enter another sequence from smallest to largest, terminating with -1: ");
     scanf("%d", &y);
   }

   // Combining both sequences
   i = 0;
   j = 0;
   
   while (i < len1 && j < len2 ) {
     if (seq1[i] < seq2[j]) {
       combine[k] = seq1[i];
       ++i;
     } else {
       combine[k] = seq2[j];
       ++j;
     }
     ++k;
   }

   // Adding the leftover of whatever sequence is left
   while (i < len1) {
     combine[k] = seq1[i];
     ++i;
     ++k;
   }

   while (j < len2) {
     combine[k] = seq2[j];
     ++j;
     ++k;
   }
     

   // Print the combined sequence
   i = 0;

   while (i < k) {
     printf("%d ", combine[i]);
     ++i;
   }

   printf("\n");
   
  return 0;
}
