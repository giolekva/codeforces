// Given body is in equilibrium iff (if and only if) sum of all forces acting
// on each axis is 0.
// We will maintain three variables repersenting sum of forces on x, y and z
// axis. They will be initialized with zeros.

#include <stdio.h>

int main() {
  int n;
  scanf("%d", &n);
  // Stores total force along x, y and z axis respectively.
  int sum_x = 0, sum_y = 0, sum_z = 0;
  // Iterate over all acting forces.
  for (int i = 0; i < n; ++i) {
    int x, y, z;
    scanf("%d %d %d", &x, &y, &z);
    // Update total forces acting on each axis.
    // sum_x += x is equivalent to sum_x = sum_x + x
    sum_x += x;
    sum_y += y;
    sum_z += z;
  }
  if (sum_x == 0 && sum_y == 0 && sum_z == 0) {
    printf("YES\n");
  } else {
    printf("NO\n");
  }
  return 0;
}
