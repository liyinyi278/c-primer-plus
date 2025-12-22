/*
    虽然字符串数组和字符串指针使用有很多方面是相同的，但是它们的类型并不相同。

    字符串数组的字符串长度必须相同，而且必须能储存最长字符串的大小。
    同时，字符串的数组保存了字符串的副本，而不是字符串的地址。
    这造成字符串的数组在内存中占据的空间比字符串指针大。

    因此，从效率角度来说，字符串指针比字符串数组更优。

    但是，字符串指针不能修改字符串的内容，而字符串数组可以。
        所以，如果需要修改字符串，那么字符串数组是更好的选择。
*/

#include <stdio.h>

#define SLEN 40
#define LIM 5

int main(void) {
  const char *mytalents[LIM] = {
      "Adding numbers swiftly.", "Multiplying accurately.", "Stashing data",
      "Following instructions to the letter.", "Understanding the C language."};

  char yourtalents[LIM][SLEN] = {"Walking in a straight line.", "Sleeping",
                                 "Watching television", "Mailing letters",
                                 "Reading email"};

  int i;

  puts("Let's compare talents.\n");
  printf("%-40s %-25s\n", "My Talents", "Your Talents");
  for (i = 0; i < LIM; i++) {
    printf("%-40s %-25s\n", mytalents[i], yourtalents[i]);
  }

  printf("\nsizeof mytalents: %zd, sizeof yourtalents: %zd\n",
         sizeof(mytalents), sizeof(yourtalents));

  return 0;
}