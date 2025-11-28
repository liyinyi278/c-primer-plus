/* 
    给定复习题3中的程序和文件,下面哪一条是有效的命令? 
        a. essayct <essay 
        b. count essay 
        c. essay >count
*/

/* 
    b. count essay 
        含义：运行 count程序，参数为 essay（即让 count处理 essay文件）。
        合理性：
            若 count程序设计为接收文件名参数（读取该文件内容并统计字符数），
                此命令会让 count统计 essay的字符数（结果默认输出到屏幕）。
            虽未显式重定向到 essayct（题目要求的保存结果），
                但语法正确且能执行（可手动添加 > essayct补全，如 count essay > essayct）。
        结论：有效（最接近题目需求的命令）。
*/

// 复习题3的程序<参考>：
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