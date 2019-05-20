// https://stackoverflow.com/questions/2310483/purpose-of-unions-in-c-and-c
// The purpose of unions is rather obvious, but for some reason people miss it quite often.
// The purpose of union is to "save memory" by using the same memory region for storing different objects at different times. 
// That's it.


// http://www.programmer-club.com.tw/ShowSameTitleN/c/16224.html
// 以記憶體的觀點來看的話
// struct佔用空間是struct成員中各個變數所佔記憶體大小相加，再加上邊界對齊(boundary alignment)
// union佔用空間是union成員中佔記憶體最大的值

// http://gundambox.github.io/2015/10/30/C%E8%AA%9E%E8%A8%80-struct%E3%80%81union%E3%80%81enum/
#include <stdio.h>
union Var{ 
	char ch;
	int num1;
	double num2;
}; 
int  main() 
{ 
    union Var var = {'x'}; // 初始化只能指定第一個成員
	// union Var var = {123}; 這句是不行的
	
	printf("var.ch = %c\n",var.ch); 
	printf("var.num1 = %d\n",var.num1); // 內容是無效的 
	printf("var.num2 = %.3f\n\n",var.num2); // 內容是無效的 
	
	var.num2 = 456.789; //double為 8bytes
	
	printf("var.ch = %c\n",var.ch); // 內容是無效的 
	printf("var.num1 = %d\n",var.num1); // 內容是無效的
	printf("var.num2 = %.3f\n\n",var.num2);
	
	return 0;
   
} 
