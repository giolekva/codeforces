// For each tram stop we will maintain current number of passengers present in
// the tram. We will do this using a counter variable which will be initialized
// with zero and on every stop we will decrement it by number of passengers
// leaving on that stop and increment by number of passengers entering.
// Similarly we will maintain a number of maximum passengers ever present
// in the tram and update it's value on every stop by comparing it to current
// number of passengers.

#include <stdio.h>

int main() {
  int n;
  scanf("%d", &n);
  // Store current number of passengers in the tram.
  int current_passengers = 0;
  // Stores maximum number of passengers ever present.
  int max_passengers = 0;
  // Iterate over all tram stops.
  for (int i = 0; i < n; ++i) {
    // For each stop read how many passengers leave and enter the tram.
    int leave, enter;
    scanf("%d %d", &leave, &enter);
    // Update current number of pessengers.
    current_passengers += - leave + enter;
    // Compare it to previously calculated maximum.
    if (max_passengers < current_passengers) {
      max_passengers = current_passengers;
    }
  }
  printf("%d\n", max_passengers);
  return 0;
}
