/*Program that counts from 1 to 100 and prints only the even numbers */

#include <stdio.h>

int main(void) {
  for (int i = 1; i <= 100; i++){
    if (i % 2 == 0) {
      printf("Number is: %d\n", i);
    }
  }
  return 0;
}
