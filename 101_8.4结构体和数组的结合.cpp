// 101_8.4结构体和数组的结合.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct Student
{
	int num;
	char name[32];
	char sex;
	int age;
	double score;
	char addr[32];
};



int main()
{

	int i;
	int len;


	struct Student stu[3] = { 
		{2,"张三",'g',17,97.7,"北京"} ,
		{3,"李四",'g',18,98.5,"上海"} ,
		{4,"王五",'g',19,99.5,"广州"} 
	};
	len = sizeof(stu) / sizeof(stu[0]);
	
	
	for (i = 0; i < len; i++) 
	{
		printf("学号：%d,年龄：%d,分数：%lf,名字：%s,地址:%s\n",
			stu[i].num, stu[i].age, stu[i].score, stu[i].name, stu[i].addr);
	}
		
	return 0;
}
