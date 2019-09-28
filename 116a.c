#include <stdio.h>

int main() {
  int n;
  scanf("%d", &n);
  int current_passengers = 0;
  int max_passengers = 0;
  for (int i = 0; i < n; ++i) {
    int leave, enter;
    scanf("%d %d", &leave, &enter);
    current_passengers += - leave + enter;
    if (max_passengers < current_passengers) {
      max_passengers = current_passengers;
    }
  }
  printf("%d\n", max_passengers);
  return 0;
}
