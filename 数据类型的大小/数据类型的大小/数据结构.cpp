#if 0
#include <stdio.h>
int main() {
	printf(" int size :%zd\n", sizeof(int));
	printf("char size :%zd\n", sizeof(char));
	printf("short size :%zd\n", sizeof(short));
	printf("long int size :%zd\n", sizeof(long int));
	printf("long long size :%zd\n", sizeof(long long));
	printf("float size :%zd\n", sizeof(float));
	printf("double size:%zd\n", sizeof(double));
	printf("long double size: %zd\n", sizeof(long double));
	printf("bool size:  %zd\n", sizeof(bool));
}
#endif
 


#if 0
#include <stdio.h>
int g_sum = 10;
int main()          
{
	float ft = 12.23f;
	int a = 10;
	int g_sum = 0;

	a = g_sum;
	printf("a=%d", a);
	return 0;
}   
#endif

#if 0
#include <stdio.h>  //标准输入输出头文件
#include <math.h>   //数学函数头文件

int main()			//用海伦公式求三角形面积
{
	float a, b, c, s, area;

	printf("Enter the sides of triangle: ");
	scanf("%f%f%f", &a, &b, &c);

	s = (a + b + c) / 2;
	area = sqrt(s * (s - a) * (s - b) * (s - c));

	printf("Area of Triangle is: %2.2f", area);

	return 0;
}
#endif
#if 0
#include <stdio.h>
int main() {
	int a = 10;   //10进制
	int b = 010;  //8进制
	int c = 0x10;  //16进制
	int d=0b10;    //2进制
	printf("a=%d b=%d c=%d d=%d\n", a, b, c,d);
	return 0;
}
#endif

#if 0
#include <stdio.h>
int main()
{
	int age;
	printf("请输入你的年龄：\n");
	scanf("%d", &age);
	while(age > 0)
	{
		if (age >= 18)
			printf("你已经成年呢！\n");
		else
			printf("你还未成年！\n");
		scanf("%d", &age);
	}
	
	return 0;
}
#endif

#if 0
#include <stdio.h> //统计字符数
int main()
{
	int num = 0;
	printf("Input a string:");
	while (getchar() != '\n')
	{
		num++;
	}
	printf("Number of characters: %d\n", num);
	return 0;
}
#endif

#if 0
#include <stdio.h>//作用域，针对编译
int g_max = 100;//全局作用域
int main() {
	int g_max = 20;//局部作用域
	int a = ::g_max;  // ::作用域,针对全局量
	printf("a=%d\n", a);
	{                        //块作用域
		int a = 50;
		printf("a=%d\n", a);
	}
	printf("a=%d\n", a);
}
#endif

#if 0
int main() {
	int ar[] = {
#include "xyh.txt"
	};
	return 0;
}
#endif

#if 0
int main()
{
	const int len = 10;
	int ar[len] = { 1,2,3,4 };  //.cpp就把const当常量处理
	return 0;
}
#endif

#if 0
#include <stdio.h>
int main()
{
	char cha = 'a';
	for (int i = 0; i < 26; ++i)
	{
		printf("cha => %d cha =%c \n", cha + i, cha + i);
	}
	return 0;
}
#endif

#if 0
#include <stdio.h>
int main()
{
	char cha = '0';
	char chb = 0;
	char chc = '\0';
}
#endif

#if 0
#include <stdio.h>
int main()
{
	printf("%d \n", sizeof('a'));
	printf("%d \n", sizeof("a"));
	printf("%d \n", sizeof("a\0"));
	char stra[] = "a";
	char strb[] = "a\0";

	return 0;
}
#endif

#if 0
#include <stdio.h>
int main()
{
	const int n = 10;
	for (int i = 0; i < n; ++i)
	{
		printf("i = %d \n", i);
	}
}
#endif
//
//#include <stdio.h>
//int main() {
//	int line = 0;
//	printf("加入比特\n");
//	while (line < 20000)
//	{
//		printf(" 唐例如是猪：%d\n", line);
//		line++;
//	}
//	if (line >= 20000) {
//		printf("得到offer\n");
//	}
//	return 0;
//}

#include <stdio.h>
#include <string.h>
int main()
	{
		int a = 10;
        printf("%d\n", a);
        printf("%d\n", sizeof(a));  //sizeof计算的是变量/类型所占空间的大小，单位是字节
		printf("%d\n", sizeof a);
		printf("%d\n", sizeof(int));
		printf("%d\n", sizeof int);   //括号不能省略0
 	}