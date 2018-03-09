/*
 * Title:  Rot13
 * Author: Richard Merry
 * Date:   09/03/2018
 *
 * A command line utility that reads a string of characters from
 * stdin and returns a rot13 version of that string to stdout.
 */
#include <stdio.h>

int main(int argc, char * argv[]) {
  int c;
  while ((c = fgetc(stdin)) != EOF) {
    if (c >= 97 && c <= 122) {
      c += 13;
      if (c > 122) {
        c = (c % 122) + 96;
      }
    } else if (c >= 65 && c <= 90) {
      c += 13;
      if (c > 90) {
        c = (c % 90) + 64;
      }
    }

    printf("%c", (char)c);
  }

  return 0;
}
