/*
  Rose Dinh
  CS-171
  10/30/26
  dictionary_order.c

  Goal: read two words and decide which one comes first in the
  dictionary. Compare them one box at a time and stop at the first
  box where they differ. Letters compare by their ASCII codes, and
  the null character '\0' has code 0, which is smaller than every
  letter. So a word that runs out first (a prefix, like "app" in
  "apple") comes first, with no special case.

  TODO:
    1. Declare two char arrays w1 and w2 of 100, and an int i.
    2. Read both words with scanf("%s %s", w1, w2).
    3. Set i to 0. While w1[i] equals w2[i] AND w1[i] is not '\0',
       add 1 to i.
    4. Now w1[i] and w2[i] are the first place the words differ
       (or both are '\0'). If they are equal, print that the words
       are the same.
    5. Otherwise, if w1[i] is smaller, print that w1 comes first.
       Otherwise print that w2 comes first.

  Compile with:
      cc dictionary_order.c
  Run with:
      ./a.out

  Test cases:
      apple banana  ->  apple comes first
      apple apply   ->  apple comes first    (differ at 'e' and 'y')
      app apple     ->  app comes first      (a prefix of the other)
      apple app     ->  app comes first
      same same     ->  the words are the same
*/

#include <stdio.h>
int main()
{
  // TODO:
  // 1. Declare two char arrays w1 and w2 of 100, and an int i.
  char w1[100];
  char w2[100];
  int i = 0;
  
  // 2. Read both words with scanf("%s %s", w1, w2).
  printf("Enter two words: ");
  scanf("%s %s", w1, w2);
  
  // 3. Set i to 0. While w1[i] equals w2[i] AND w1[i] is not '\0',
  //    add 1 to i.
  i = 0;

  while (w1[i] == w2[i] && w1[i] != '\0') {
    ++i;
  }
  
  // 4. Now w1[i] and w2[i] are the first place the words differ
  //    (or both are '\0'). If they are equal, print that the words
  //    are the same.
  if (w1[i] == w2[i]) {
    printf("The words are the same: %s %s\n", w1, w2);
  }
  
  // 5. Otherwise, if w1[i] is smaller, print that w1 comes first.
  //    Otherwise print that w2 comes first.
  if (w1[i] < w2[i]) {
    printf("%s comes first, then %s\n", w1, w2);
  } else {
    printf("%s comes first, then %s\n", w2, w1);
  }
  return 0;
}
