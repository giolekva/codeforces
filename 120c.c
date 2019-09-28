// We need to read how much honey is present in each just and give
// Winnie-the-Pooh maximum 3 * k amount of honey and rest goes to pig.

#include <stdio.h>

int main() {
  int n, k;
  // Unline to previous problems we need to read input data from the input.txt
  // file instead of the standard input stream.
  // To achieve that first we need to open file using fopen function from stdio
  // library. fopen takes two arguments: path to the file and a mode in which to
  // open it. So we pass "input.txt" as a first argument and "r" representing
  // read as a second  one. It returns file descriptor type FILE* which later
  // can be used to retrieve data from.
  FILE* inp = fopen("input.txt", "r");
  // To read from a file descriptor we use fscanf function instead of scanf.
  // It acts exactly same way as scanf except as a first additional argument it
  // takes file descriptor to read from.
  fscanf(inp, "%d %d", &n, &k);
  int pig = 0;
  for (int i = 0; i < n; ++i) {
    int a;
    // Same here, we read from previously open file.
    fscanf(inp, "%d", &a);
    // For each jar we iterated maximum three times and until honey present
    // there is not less than |k|.
    // Note that we use for loop inside a for loop. Such concept is called
    // nested loop or nested cycle.
    for (int j = 0; j < 3 && a >= k; ++j) {
      a -= k;
    }
    // Remainder goes to a pig.
    pig += a;    
  }
  // Once done withe processing the file we need toc lose it's file descriptor
  // using fclose function.
  fclose(inp);
  // Same way we need to write in output.txt file. We pass "w" as a second
  // argument to fopen which stands for write.
  FILE* out = fopen("output.txt", "w");
  // Note that we use fprintf instead of printf.
  fprintf(out, "%d\n", pig);
  // And close output file as well.
  fclose(out);
  return 0;
}
