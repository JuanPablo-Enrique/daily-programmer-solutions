#include <stdio.h>
#include <stdlib.h>
// NOT DONE
void concatenate(long *ptr, int size);

int main(int argc, char *argv[]) {
  char c;
  char num[10];
  int numIndex = 0;
  long numbers[20];
  int numbersIndex = 0;
  while((c = getchar()) != EOF) {
    printf("%c", c);
    if (c == '\n') {
      concatenate(numbers, numbersIndex);

      for (int i = 0; i < numIndex; i++) {
        num[i] = '\0';
      }
      numIndex = 0;
      for (int i = 0; i < numbersIndex; i++) {
        numbers[i] = '\0';
      }
      numIndex = 0;
      numbersIndex = 0;
    }
    if (c == ' ') {
      numbers[numbersIndex] = strtol(num, NULL, 10);
      ++numbersIndex;
      for (int i = 0; i < numIndex; i++) {
        num[i] = '\0';
      }
      numIndex = 0;
    }

    else {
      num[numIndex] = c;
      ++numIndex;
    }
  }
  return 0;
}
