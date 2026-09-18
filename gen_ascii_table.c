
#include <stdio.h>

int main(void) {
  int row;
  int column;
  int ascii_value;

  /* Print the four headings. */
  for (column = 0; column < 4; column++) {
    printf(" %3s  %3s  %3s  %2s  ", "Dec", "Oct", "Hex", "C");
  }

  putchar('\n');

  /* Print 32 rows. */
  for (row = 0; row < 32; row++) {
    /* Print four ASCII values on each row. */
    for (column = 0; column < 4; column++) {
      ascii_value = row + column * 32;

      printf(" %3d  %3o  %3x  ", ascii_value, ascii_value, ascii_value);

      /*
       * ASCII values 0 through 31 are control characters.
       * Display them using caret notation, such as ^A.
       */
      if (ascii_value < 32) {
        printf("^%c ", ascii_value + 64);
      }
      /*
       * ASCII value 127 is DEL, another control character.
       */
      else if (ascii_value == 127) {
        printf("^? ");
      }
      /*
       * ASCII values 32 through 126 are printable characters.
       */
      else {
        printf(" %c ", ascii_value);
      }

      /* Print a separator between sections. */
      if (column < 3) {
        putchar('|');
      }
    }

    putchar('\n');
  }

  return 0;
}
