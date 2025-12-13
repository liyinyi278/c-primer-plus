#include <stdio.h>

void print_chars(char c, int times);
void menu(void);
void get_float(float *num);
void add(void);
void subtract(void);
void multiply(void);
void divide(void);

int main(void) {
  char choice;
  int ch;

  do {
    menu();

    printf("Enter the operation of your choice: ");
    if (scanf(" %c", &choice) != 1) {
      while ((ch = getchar()) != '\n' && ch != EOF) {
      }
      printf("Invalid input\n");
      break;
    }

    while ((ch = getchar()) != '\n' && ch != EOF) {
    }

    switch (choice) {
    case 'a':
    case 'A':
      add();
      break;
    case 's':
    case 'S':
      subtract();
      break;
    case 'm':
    case 'M':
      multiply();
      break;
    case 'd':
    case 'D':
      divide();
      break;
    case 'q':
    case 'Q':
      printf("Goodbye!\n");
      break;
    default:
      printf("Invalid input.\n");
    }
  } while (choice != 'q' && choice != 'Q');

  return 0;
}

void print_chars(char c, int times) {
  for (int i = 0; i < times; i++) {
    putchar(c);
  }
  putchar('\n');
}

void menu(void) {
  const int CHARS = 50;
  const char CHAR = '-';

  print_chars(CHAR, CHARS);
  printf("Enter the operation of your choice:\n");
  printf("a. add\t\ts. subtract\n");
  printf("m. multiply\td. divide\n");
  printf("q. quit\n");
  print_chars(CHAR, CHARS);
}

void get_float(float *num) {
  while (scanf("%f", num) != 1) {
    while (getchar() != '\n')
      ;
    printf("one is not a number.\n");
    printf("Please enter a number, such as 2.5, -1.78E8, or 3: ");
  }
}

void add(void) {
  float num1, num2;

  printf("Enter first number: ");
  get_float(&num1);
  printf("Enter second number: ");
  get_float(&num2);

  printf("%.2f + %.2f = %.2f\n", num1, num2, num1 + num2);
}

void subtract(void) {
  float num1, num2;

  printf("Enter first number: ");
  get_float(&num1);
  printf("Enter second number: ");
  get_float(&num2);

  printf("%.2f - %.2f = %.2f\n", num1, num2, num1 - num2);
}

void multiply(void) {
  float num1, num2;

  printf("Enter first number: ");
  get_float(&num1);
  printf("Enter second number: ");
  get_float(&num2);

  printf("%.2f * %.2f = %.2f\n", num1, num2, num1 * num2);
}

void divide(void) {
  float num1, num2;

  printf("Enter first number: ");
  get_float(&num1);
  do {
    printf("Enter second number: ");
    get_float(&num2);
    if (num2 == 0)
      printf("Cannot divide by zero.\n");
  } while (num2 == 0);

  printf("%.2f / %.2f = %.2f\n", num1, num2, num1 / num2);
}