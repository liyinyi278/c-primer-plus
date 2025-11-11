#include <ctype.h>
#include <stdbool.h>
#include <stdio.h>

int main(void) {
  const char STOP = '|';
  char c;
  char prev;

  long n_chars = 0L;
  int n_lines = 0;
  int n_words = 0;
  int p_lines = 0;

  bool in_word = false;

  printf("Enter text to be analyzed (| to terminate):\n");
  prev = '\n';
  while ((c = getchar()) != STOP) {
    n_chars++;
    if (c == '\n') {
      n_lines++;
    }
    if (!isspace(c) && !in_word) {
      in_word = true;
      n_words++;
    }

    if (isspace(c) && in_word) {
      in_word = false;
    }
    prev = c;
  }

  if (prev != '\n') {
    p_lines = 1;
  }

  printf("characters = %ld\n", n_chars);
  printf("lines      = %d\n", n_lines);
  printf("words      = %d\n", n_words);
  printf("preliminary lines = %d\n", p_lines);

  return 0;
}