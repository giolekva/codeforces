// Any even number can be represented as a sum of two non-zero even numbers.

// Here we include standard input/output library which implements functions
// for reading from standard input and writing to standard output streams.
#include <stdio.h>

// Every C program must have a |main| function defined with return type of int.
int main() {
  // Here we declare new variable called |w| with type of int.
  int w;
  // scanf function as a first argument takes template of the information to
  // read and rest of the arguments are addresses of variables onto which data
  // from read information will be extracted.
  // In this case we ask scanf to read a single integer (%d) and write it's
  // value into |w|.
  scanf("%d", &w);
  // Here we check if value of variable |w| is divisible by two and if it is
  // greater than 2.
  if (w % 2 == 0 && w > 2) {
    // If so we print YES and new line (\n).
    printf("YES\n");
  } else {
    // Otherwise NO and new line.
    printf("NO\n");
  }
  // Upon success our program must return 0.
  // Non-0 value means error.
  return 0;
}
