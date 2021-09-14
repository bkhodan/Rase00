void mx_printchar(char c);
void mx_cube(int n);

char dash[] = "-";
char pl[] = "+";
char palka[] = "|";
char slash[] = "/";
char space[] = " ";
char perevod[] = "\n";

void mx_cube(int n) {

  int plusik = 1;
  int x = n * 2 + 3 * plusik + n / 2;
  if (n > 1) {
    for (int i = 0; i < n / 2 + 1; i++) {
      mx_printchar(*space);
    }
    for (int j = n / 2 + 1; j < x; j++) {
      if (j == (n / 2 + 1) ||
        j == (x - 1)) {
        mx_printchar(*pl);
      } else {
        mx_printchar(*dash);
      }
    }
    mx_printchar(*perevod);
    int hor = (n / 2);
    int flaq = 0;
    for (int i = 1; i < (n / 2) + 1; i++)
    {
      for (int j = 0; j < hor; j++) {
        mx_printchar(*space);
      }
      mx_printchar(*slash);
      for (int i = 0; i < n * 2; i++) {
        mx_printchar(*space);
      }
      mx_printchar(*slash);
      for (int i = 0; i < flaq; i++) {
        mx_printchar(*space);
      }
      flaq++;
      mx_printchar(*palka);
      hor--;
      mx_printchar(*perevod);
    }
    for (int j = n / 2 + 1; j < x; j++) {
      if (j == (n / 2 + 1) ||
        j == (x - 1)) {
        mx_printchar(*pl);
      } else {
        mx_printchar(*dash);
      }
    }
    for (int i = 0; i < flaq; i++) {
      mx_printchar(*space);
    }
    mx_printchar(*palka);
    mx_printchar(*perevod);
    for (int i = 0; i < n - n / 2 - 1; i++) {
      mx_printchar(*palka);
      for (int j = 0; j < n * 2; j++) {
        mx_printchar(*space);
      }
      mx_printchar(*palka);
      for (int j = 0; j < n / 2; j++) {
        mx_printchar(*space);
      }
      mx_printchar(*palka);
      mx_printchar(*perevod);
    }
    mx_printchar(*palka);
    for (int j = 0; j < n * 2; j++) {
      mx_printchar(*space);
    }
    mx_printchar(*palka);
    for (int j = 0; j < n / 2; j++) {
      mx_printchar(*space);
    }
    mx_printchar(*pl);
    mx_printchar(*perevod);
    int horz = n / 2 - 1;
    for (int i = 0; i < n / 2; i++) {
      mx_printchar(*palka);
      for (int j = 0; j < n * 2; j++) {
        mx_printchar(*space);
      }
      mx_printchar(*palka);

      for (int j = 0; j < horz; j++) {
        mx_printchar(*space);
      }
      horz--;
      mx_printchar(*slash);
      mx_printchar(*perevod);
    }
    for (int j = n / 2 + 1; j < x; j++) {
      if (j == (n / 2 + 1) ||
        j == (x - 1)) {
        mx_printchar(*pl);
      } else {
        mx_printchar(*dash);
      }
    }
    mx_printchar(*perevod);
  }
}
