#include <stdio.h>
#include <string.h>

const int MAX_WORD_LENGTH = 80;

void word_inverted_order(const char *word, char *result_word, int max_size);

int main(void) {
  char word[MAX_WORD_LENGTH];
  char process_word[MAX_WORD_LENGTH];

  printf("Enter a word: ");
  if (NULL == fgets(word, MAX_WORD_LENGTH, stdin)) {
    printf("Invalid input\n");
    return 1;
  }
  size_t len = strlen(word);
  if (len > 0 && word[len - 1] == '\n') {
    word[len - 1] = '\0';
  }

  printf("The word is: %s\n", word);

  word_inverted_order(word, process_word, MAX_WORD_LENGTH);

  printf("The word in inverted order is: %s\n", process_word);

  return 0;
}

void word_inverted_order(const char *word, char *result_word, int max_size) {
  int len = strlen(word);

  int i = len - 1;
  int j = 0;

  while (i >= 0 && j < max_size - 1) {
    result_word[j] = word[i];
    i--;
    j++;
  }
  result_word[j] = '\0';
}