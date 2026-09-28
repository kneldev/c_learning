
#include <stdio.h>

int main(void) {
  int row;
  int column;
  int ascii_value;

  for (column = 0; column < 4; column++) {
    printf(" %3s  %3s  %3s  %2s  ", "Dec", "Oct", "Hex", "C");
  }

  putchar('\n');

  for (row = 0; row < 32; row++) {
    // four to a row
    for (column = 0; column < 4; column++) {
      ascii_value = row + column * 32;

      printf(" %3d  %3o  %3x  ", ascii_value, ascii_value, ascii_value);

      // pop a caret at the end of legacy ctrl chars

      if (ascii_value < 32) {
        printf("^%c ", ascii_value + 64);
      }

      // 127 is del

      else if (ascii_value == 127) {
        printf("^? ");
      }

      // %c is the actual ascii formatter

      else {
        printf(" %c ", ascii_value);
      }

      if (column < 3) {
        putchar('|');
      }
    }

    putchar('\n');
  }

  return 0;
}
