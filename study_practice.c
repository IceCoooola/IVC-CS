#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

//int my_strlen(char* arr)
//{
//	if (*arr != '\0')
//		return 1 + my_strlen(arr + 1);
//	else
//		return 0;
//}

int my_strlen(char* arr)
{
	int i = 0;
	while (*arr != '\0')
	{
		arr++;
		i++;
	}
	return i;
}


int main()
{
	char arr[] = "abcdefg";
	my_strlen(arr);
	printf("%d", my_strlen(arr));
	return 0;
}

//int main()
//{
//	int i = 0;
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	for (i = 0; i <= 12; i++)
//	{
//		arr[i] = 0;
//		printf("hello.");
// //死循环是因为arr[12]被改成了0， arr[12] i变回了0
//	}
//	return 0;
//}

//int main()
//{
//	int money = 0;
//	int coke = 0;
//	int bottle = 0;
//	scanf("%d", &money);
//	coke = money / 1;
//	bottle = coke;
//	while (bottle>=2)
//	{
//		bottle -= 2;
//		coke += 1;
//		bottle += 1;
//	}
//	printf("%d", coke);
//	1元钱一瓶汽水，两个空瓶可以换一瓶，20块钱能买多少？
//	return 0;
//}
//int main()
//{
//	int i = 0;
//	int line = 0;
//	scanf("%d", &line);
//	for (i = 0; i < line; i++)
//	{
//		int j = 0;
//		for (j = 0; j < line-i-1; j++)
//		{
//			printf(" ");
//		}
//		for (j = 0; j < (2*i)+1; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	for (i = 0; i < line-1; i++)
//	{
//		int j = 0;
//		for (j = 0; j <=i; j++)
//		{
//			printf(" ");
//		}
//		for (j = 0; j < (line-1-i)*2 - 1; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
	//for (i = line-1; i >= 0; i--)
	//{
	//	int j = 0;
	//	for (j = 0; j < line-i; j++)
	//	{
	//		printf(" ");
	//	}
	//	for (j = 0; j < (2 * i) + 1; j++)
	//	{
	//		printf("*");
	//	}
	//	printf("\n");
	//}
	
	
	//      *
	//     ***
	//    *****
	//   *******
	//  *********
	// ***********
	//*************
//
//}

//int main()
//{
//	int i = 0;
//	for (i = 1; i < 100000; i++)
//	{
//		int ret = i;
//		int n = 0;
//		while (ret)
//		{
//			n++;
//			ret /= 10;
//		}
//		ret = i;
//		int sum = 0;
//		while (ret)
//		{
//			sum += pow(ret % 10,n);
//			ret /= 10;
//		}
//		if (sum == i)
//			printf("%d ", i);
//	}
//	
//	return 0;
//}

//int cal(int i)
//{
//	if (i != 0)
//		return 1 + cal(i / 10);
//	else return 0;
//}
//
//int main()
//{
//	int i = 12345;
//	printf("%d", cal(i));
//	//求位数
//}

//int main()
//{
//	int i = 100;
//	for (i = 100; i < 1000; i++)
//	{
//		if (pow(i / 100, 3) + pow(i % 10, 3) + pow(((i - i % 10) / 10) % 10, 3) == i)
//			printf("%d ", i);
//	}
//	return 0;
//}
//int main()
//{
//	int a = 0;
//	int n = 0;
//	int sum = 0;
//	scanf("%d%d", &a, &n);
//	int i = 0;
//	int ret = 0;
//	//2 22 222 2222 22222
//	for (i = 0; i < n; i++)
//	{
//		ret = ret*10+a;
//		sum += ret;
//	}
//	printf("%d", sum);
//	return 0;
//}
//int calc(int a, int i)
//{
//	if (i > 0)
//		return pow(10, (i-1)) * a + calc(a, i - 1);
//	else
//		return 0;
//}
//
//int main()
//{
//	int a = 0;
//	int n = 0;
//	scanf("%d%d", &a, &n);
//	int i = 0;
//	int c = 0;
//	for (i = 0; i < n; i++)
//	{
//		c += calc(a, i+1);
//	}
//	printf("%d", c);
//	return 0;
//}

//void rev(char* a)
//{
//	char* left = a;
//	char* right = a+ strlen(a)-1;
//	while(left<right)
//	{
//		char t = *left;
//		*left = *right;
//		*right = t;
//		left++;
//		right--;
//	}
//}
//
//int main()
//{
//	char arr[100];
//	gets_s(arr,100);
//	rev(arr);
//	printf("%s", arr);
//}

//int main()
//{
//	char* c[] = { "ENTER","NEW","POINT","FIRST" };
//	char** cp[] = { c + 3,c + 2,c + 1,c };
//	char*** cpp = cp;
//	printf("%s\n", **++cpp);
//	printf("%s\n", *-- * ++cpp + 3);
//	printf("%s\n", *cpp[-2] + 3);
//	printf("%s\n", cpp[-1][-1] + 1);
//	return 0;
//}

//int main()
//{
//	int arr[] = {1,2,3,4};
//	printf("%d ", sizeof(arr));
//	printf("%d ", sizeof(arr+0));
//	printf("%d ", sizeof(*arr));
//	printf("%d ", sizeof(arr+1));
//	printf("%d ", sizeof(arr[1]));
//	printf("%d ", sizeof(&arr));
//	printf("%d ", sizeof(*&arr));
//	printf("%d ", sizeof(&arr+1));
//	printf("%d ", sizeof(&arr[0]));
//	printf("%d ", sizeof(&arr[0]+1));
//	return 0;
//}
