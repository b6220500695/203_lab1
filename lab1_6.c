#include <stdio.h>

int main() {

  int time;

  printf("Enter time (HHMM):");

  scanf("%d", &time);

  printf("%d:%d %s", (int)(time / 100), (time % 100), ((int(time/100))<(12)"AM":"PM"));

  return 0;

}
