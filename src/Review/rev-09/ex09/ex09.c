#include <stdio.h>

void menu(void);
int get_choice(void);

int main() {
  int choice;

  choice = get_choice();
  switch (choice) {
  case 1:
    printf("copy files\n");
    break;
  case 2:
    printf("move files\n");
    break;
  case 3:
    printf("remove files\n");
    break;
  case 4:
    printf("quit\n");
    break;
  default:
    printf("Invalid choice\n");
    break;
  }

  return 0;
}

void menu(void) {
  printf("Please choose one of the following:\n");
  printf("1) copy files\t\t\t2) move files\n");
  printf("3) remove files\t\t\t4) quit\n");
  printf("Enter the number of your choice: ");
}

int get_choice(void) {
  int choice;

  menu();
  while (scanf("%d", &choice) != 1) {
    printf("Invalid input. Please enter a number between 1 and 4:\n\n");
    while (getchar() != '\n') {
    }
    menu();
  }

  if (choice < 1 || choice > 4) {
    return 4;
  }

  return choice;
}