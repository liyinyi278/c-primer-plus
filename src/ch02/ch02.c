#include <stdio.h>
#include <string.h>
#include <windows.h>  // 添加 Windows API 支持
#include <wchar.h>

int string_cn_output() {
	// 设置控制台编码为 UTF-8
	SetConsoleOutputCP(65001);  // 设置输出编码为 UTF-8
	SetConsoleCP(65001);        // 设置输入编码为 UTF-8
    
	wchar_t name[50];
	wchar_t address[100];

	wprintf(L"欢迎使用C语言程序！\n");
	wprintf(L"当前使用的C语言标准版本是：C11\n");

	wprintf(L"请输入您的姓名：");
	fgets(name, sizeof(name), stdin);
	// 移除换行符
	name[strcspn(name, "\n")] = '\0';

	wprintf(L"请输入您的地址：");
	fgets(address, sizeof(address), stdin);
	address[strcspn(address, "\n")] = '\0';

	wprintf(L"您的姓名是：%ls\n", name);
	wprintf(L"您的地址是：%ls\n", address);
    
	// 等待用户按回车键退出
	wprintf(L"\n按回车键退出...");
	getchar();
    
	return 0;
}