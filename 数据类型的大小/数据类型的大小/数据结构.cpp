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
#include <stdio.h>  //��׼�������ͷ�ļ�
#include <math.h>   //��ѧ����ͷ�ļ�

int main()			//�ú��׹�ʽ�����������
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
	int a = 10;   //10����
	int b = 010;  //8����
	int c = 0x10;  //16����
	int d=0b10;    //2����
	printf("a=%d b=%d c=%d d=%d\n", a, b, c,d);
	return 0;
}
#endif

#if 0
#include <stdio.h>
int main()
{
	int age;
	printf("������������䣺\n");
	scanf("%d", &age);
	while(age > 0)
	{
		if (age >= 18)
			printf("���Ѿ������أ�\n");
		else
			printf("�㻹δ���꣡\n");
		scanf("%d", &age);
	}
	
	return 0;
}
#endif

#if 0
#include <stdio.h> //ͳ���ַ���
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
#include <stdio.h>//��������Ա���
int g_max = 100;//ȫ��������
int main() {
	int g_max = 20;//�ֲ�������
	int a = ::g_max;  // ::������,���ȫ����
	printf("a=%d\n", a);
	{                        //��������
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
	int ar[len] = { 1,2,3,4 };  //.cpp�Ͱ�const����������
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
//	printf("�������\n");
//	while (line < 20000)
//	{
//		printf(" ����������%d\n", line);
//		line++;
//	}
//	if (line >= 20000) {
//		printf("�õ�offer\n");
//	}
//	return 0;
//}

#include <stdio.h>
#include <string.h>
int main()
	{
		int a = 10;
        printf("%d\n", a);
        printf("%d\n", sizeof(a));  //sizeof������Ǳ���/������ռ�ռ�Ĵ�С����λ���ֽ�
		printf("%d\n", sizeof a);
		printf("%d\n", sizeof(int));
		printf("%d\n", sizeof int);   //���Ų���ʡ��0
 	}