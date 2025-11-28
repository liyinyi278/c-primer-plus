/*
    假设有一个名为count的可执行程序,用于统计输入的字符数。
        设计一个使用count程序统计essay文件中字符数的命令行,
        并把统计结果保存在 essayct文件中。
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void count(char *stats_filename, char *result_filename);

int main(int argc, char *argv[]) {
  if (argc == 3) {
    char *stats_filename = argv[1];
    char *result_filename = argv[2];
    count(stats_filename, result_filename);
  } else if (argc == 4 && strcmp(argv[1], "count") == 0) {
    char *stats_filename = argv[2];
    char *result_filename = argv[3];
    count(stats_filename, result_filename);
  } else {
    fprintf(stderr, "Usage: %s count <stats_filename> <result_filename>\n",
            argv[0]);
    exit(EXIT_FAILURE);
  }
}

void count(char *stats_filename, char *result_filename) {
  FILE *in_fp = fopen(stats_filename, "r");
  if (in_fp == NULL) {
    perror("fopen");
    exit(EXIT_FAILURE);
  }

  int count = 0;

  while (fgetc(in_fp) != EOF){
    count++;
  }

  FILE *out_fp = fopen(result_filename, "w");
  if (out_fp == NULL) {
    perror("fopen");
    exit(EXIT_FAILURE);
  }
  fprintf(out_fp, "%d", count);

  fclose(in_fp);
  fclose(out_fp);
}

// 统计字符行数。
// #include <stdio.h>
// #include <stdlib.h>

// int main(int argc, char *argv[]) {
//   char command[256];

//   int ret =
//       snprintf(command, sizeof(command), "type essay | find /v /c \"\" >
//       essayct");
//   if (ret < 0 || ret >= (int)sizeof(command)) {
//     printf("错误：命令太长！\n");
//     return 1;
//   }

//   int result = system(command);

//   if(result != 0){
//     printf("错误：执行命令失败！可能原因：\n"
//             "1.essay 文件不存在\n"
//             "2.没有 wc 命令权限\n");
//     return 1;
//   }

//   printf("统计完成！结果保存在 essayct\n");
//   return 0;
// }