#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int* twoSum(int* nums, int numsSize, int target, int* returnSize) {
	int i = 0;
	for (i = 0; i < numsSize - 1; i++)
	{
		int j = 0;
		for (j = 0; j < numsSize - 1; j++)
		{
			if ((*(nums + i) + *(nums + j) == target) && (i != j))
			{
				*returnSize = j;
				return i;
			}
		}
	}
}

int main()
{
	int arr[] = { 1,2,3,4,5,6,7 };
	int a;
	int b = 0;
	a = twoSum(arr, 7, 10, &b);
	printf("%d %d\n", a, b);
}

//int main()
//{
//	int a = 0;
//	//~a 是按位取反，按二进制位取反
//	// 源码取反+1得到补码
//	// 补码-1取反得到源码
//	// 二进制存储时符号位不变，其他取反（反码）
//	//00000000000000000000000000000000 - 补码
//	//11111111111111111111111111111111 - 补码
//	int c = ~a;
//	printf("%d", c);
//	return 0;
//}
//int main()
//{
//	int a;
//	int i;
//	int count = 0;
//	//求a存在内存中里有多少个1
//	printf("enter a number>:");
//	scanf("%d", &a);
//	for (i = 0; i < 32; i++)
//	{
//		if (((a >> i) & 1) == 1)
//			//内存内存的是二进制补码，32位。
//			// 二进制  正数的源码反码补码是一样的
//			//按位与：计算二进制内里 有0为0 全1为1
//			//向右移动操作符。符号位不变 丢弃最右
//			count++;
//	}
//	printf("补码内有%d个1.\n", count);
//	return 0;
//}

//int main()
//{
//	int a = 5;
//	int i = 0;
//	int c = a & 1;
//	printf("%d", c);
//}

//float calculate(int num)
//
//{
//	if (num < 5)
//		return num * 599.99;
//	if (num <= 20)
//		return num * 569.99;
//
//	return num * 519.99;
//}
//int main()
//{
//	int num = 0;
//	scanf("%d", &num);
//	float c = calculate(num);
//	printf("%0.2f\n", c);
//	return 0;
//}

//int main()
//{
//	int num = 0;
//	int highest = 0;
//	int lowest;
//	printf("Please enter a value, -999 to quit.");
//	scanf("%d", &num);
//	lowest = num;
//	while (num != -999)
//	{
//		if (num > highest)
//		{
//			highest = num;
//		}
//		if (num < lowest)
//		{
//			lowest = num;
//		}
//		printf("Please enter a value, -999 to quit.");
//		scanf("%d", &num);
//
//
//	}
//	printf("%d %d",lowest,highest);
//
//	return 0;
//}

//int main()
//{
//
//	int i = 0;
//	int score = 0;
//	int excellent = 0;
//	int fair = 0;
//	int poor = 0;
//	for (i = 0; i < 20; i++)
//	{
//		printf("Please enter the test scores.\n");
//		scanf(" %d", &score);
//		if (score > 80)
//		{
//			excellent++;
//		}
//		else if (score >= 50)
//		{
//			fair++;
//		}
//		else
//		{
//			poor++;
//		}
//	}
//	printf(" %d are excellent. % d are fair. % d are poor.\n", excellent, fair, poor);
//
//	return 0;
//}
//int main()
//{
//	int ROW = 3;
//	int COL = 3;
//	char arr[3][3] = {0};
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < 3; i++)
//	{
//		for (j = 0; j < 3; j++)
//		{
//			arr[i][j] = ' ';
//		}
//	}
//	for (i = 0; i < 5; i++)
//	{
//		if (i % 2 == 0)
//		{
//			for (j = 0; j < 3; j++)
//			{
//				int i = 0;
//				if (j == 2)
//				{
//					printf(" %c ", arr[i][j]);
//					break;
//				}
//				printf(" %c |", arr[i][j]);
//				i += 1;
//			}
//			printf("\n");
//		}
//		else
//		{
//			for (j = 0; j < 3; j++)
//			{
//				if (j == 2)
//				{
//					printf("---");
//					break;
//				}
//				printf("---|");
//			}
//		printf("\n");
//		}
//
//	}
//	return 0;
//}

//void sort(int arr[], int sz)
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < sz; i++)
//	{
//		int flag = 1;
//		for (j = 0; j < sz-i; j++)
//		{
//			if (arr[j] < arr[j + 1])
//			{
//				int t = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = t;
//				flag = 0;
//			}
//		}
//		if (flag == 1)
//			break;
//	}
//}
//
//int main()
//{
//	int arr[] = {1,3,4,5,7,5,4,6,8,10};
//	int sz = sizeof(arr) / sizeof(arr[0]) - 1;
//	sort(arr, sz);//将arr从大到小排序
//	int i = 0;
//	for (i = 0; i <= sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}

//int main()
//{
//	int arr[9][9] = { {1,2,3,4,5,9,7,8,9} ,{2}, {3}, {4}, {5}, {6}, {7}, {8}, {9} };
//	int i = 0;
//	int j = 0;
//	for (i = 1; i < 9; i++)
//	{
//		for (j = 1; j < 9; j++)
//		{
//			arr[i][j] = arr[0][j] * arr[i][0];
//		}
//
//	}
//	for (i = 0; i < 9; i++)
//	{
//		for (j = 0; j < 9; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}
//int main()
//{
//
//	int a = b = c = d = 0;
//	printf("%d", a);
//	return 0;
//}

//int fib(int a)
//{
//	int x = 0;
//	int y = 1;
//	int z = 0;
//	int i = 1;
//	if (a == 1)
//	{
//		return 1;
//	}
//	else 
//	{
//		for (i = 1; i < a; i++)
//		{
//			z = x + y;
//			x = y;
//			y = z;
//		}
//	}
//	return z;
//}
//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	int b = fib(a);
//	printf("\n%d\n", b);
//	return 0;
//}
//int Cal2(int x)
//{
//	if (x > 1)
//	 return	x* Cal2(x - 1);
//	
//}
//int Cal1(int x)
//{
//	int a = 1;
//	int b = 1;
//	for (a = 1; a <= x; a++)
//	{
//		b *= a;
//	}
//	return b;
//}
//int main()
//{
//	int x = 0;
//	int y = 0;
//	scanf("%d", &x);
//	y = Cal2(x);
//	printf("%d", y);
//	return 0;
//}
//int my_strlen(char* a)
//{
//	int count = 0;
//	while (*a != '\0')
//	{
//		count++;
//		a++;
//	}
//	return count;
//}
//int my_strlen(char* str)
//{
//	if (*str != '\0')
//		return 1+my_strlen(str + 1);
//	else 
//		return 0;
//}
//int main()
//{
//	char arr[] = "didi";
//	printf("%d",my_strlen(arr));
//	return 0;
//}

//void print(int n)
//{
//
//	if (n>9)
//	{
//		print(n/10);
//	}
//	printf("%d ", n % 10);
//}
//int main()
//{
//	int num = 123456;
//	print(num);
//	return 0;
//}

//void compare(int* a, int* b, int* c, int* d)
//{
//	int t;
//	if (*a< *b)
//	{
//		t = *a;
//		*a = *b;
//		*b = t;
//	}
//	if (*a < *c)
//	{
//		t = *a;
//		*a = *c;
//		*c = t;
//
//	}
//	if (*a < *d)
//	{
//		t = *a;
//		*a = *d;
//		*d = t;
//	}
//	if (*b < *c)
//	{
//		t = *b;
//		*b = *c;
//		*c = t;
//	}
//	if (*b < *d)
//	{
//		t = *b;
//		*b = *d;
//		*d = t;
//	}
//	if (*c < *d)
//	{
//		t = *c;
//		*c = *d;
//		*d = t;
//	}
//}
//
//int main()
//{
//	int a, b, c, d;
//	printf("please enter four numbers.>:");
//	scanf("%d%d%d%d", &a, &b, &c, &d);
//	printf("Those four numbers are: %d %d %d %d.", a, b, c, d);
//	compare(&a, &b, &c, &d);
//	printf("Those four numbers are: %d %d %d %d.", a, b, c, d);
//	return 0;
//}

//int main()
//{
//	printf("%d",printf("%d", printf("43")));
//	return 0;
//}

//int ADD1(int* num)
//{
//	(*num)++;
//}
//
//int main()
//{
//	int num = 0;
//	ADD1(&num);
//	printf("%d\n", num);
//	ADD1(&num);
//	printf("%d\n", num);
//
//	return 0;
//}

//int search(int x, int arr[], int sz)
//{
//	int left = 0;
//	int right = sz-1;
//	int mid = 0;
//	while (left<=right)
//	{
//		mid = (left+right)/2;
//		if (x < arr[mid])
//		{
//			right = mid -1;
//		}
//		else if (x > arr[mid])
//		{
//			left = mid +1;
//		}
//		else if (x == arr[mid])
//		{
//			return mid;
//		}
//		
//		if (left>right)	
//			return -1;
//	}
//
//}
//int main()
//{
//	int arr[] = {1,2,3,4,5,6,7,8,9,11,13,15,17,18};
//	int x = 0;
//	scanf("%d", &x);
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int y = search(x, arr,sz);
//	if (y == -1)
//		printf("nothing");
//	else
//		printf("%d",y);
//	return 0;
//}
//int runnian(int i)
//{
//	if (i % 4 == 0 && i % 100 != 0)
//	{
//		return 0;
//	}
//	else if (i % 400 == 0)
//	{
//		return 0;
//	}
//	else
//		return 1;
//}
//int main()
//{
//	int i = 2000;
//	int count = 0;
//	for (i = 2000; i <= 3000; i++)
//	{
//		if (runnian(i) == 0)
//		{
//			printf("%d\n", i);
//			count++;
//		}
//	}
//	printf("%d", count);
//	return 0;
//}
//void calc(int share, float pp, float cp, float* cv, float* pc, float* profit)
//{
//	*pc = share * pp;
//	*cv = share * cp;
//	*profit = *cv - *pc;
//}
//int main()
//{
//	int share = 3;
//	float pp = 100;
//	float cp = 150;
//	float cv = 0;
//	float pc = 0;
//	float profit = 0;
//	printf("share = %d\n purchase price = %0.2f\n current price = %0.2f\n",share,pp,cp);
//	printf("current value = %0.2f\n purchase cost = %0.2f\n profit = %0.2f\n", cv, pc, profit);
//	calc(share, pp, cp, &cv, &pc, &profit);
//	printf("current value = %0.2f\n purchase cost = %0.2f\n profit = %0.2f\n", cv, pc, profit);
//
//
//
//	return 0;
//}
//int main()
//{
//	int m=0;
//	scanf("%d", &m);
//	if (m > 48)
//	{
//		printf("invalid data");
//	}
//	else if (m > 34)
//	{
//		printf("very tired");
//	}
//	else if (m > 9)
//	{
//		printf("little tired");
//	}
//	else if (m > 0)
//	{
//		printf("played at least");
//	}
//	else if (m == 0)
//	{
//		printf("bench warmer");
//	}
//	return 0;
//}

//int main()
//{
//	char code;
//	printf("enter a letter code");
//	scanf("%c", &code);
//
//	switch (code)
//	{
//	case'L':
//	case'l':
//		printf("Lakers");
//		break;
//	case'C':
//	case'c':
//		printf("Clippers");
//		break;
//	case'W':
//	case'w':
//		printf("Warriors");
//		break;
//	default:
//		printf("invalid code");
//		break;
//	}
//}
//int is_prime(int i)
//{
//	int a = 2;
//	while (a < i)
//	{
//		if (i % a == 0)
//		{
//			return 0;
//			break;
//		}
//		a++;
//	}
//	if (a = i)
//	{
//		return 1;
//	}
//}
//
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		if (is_prime(i) == 1)
//		{
//			count++;
//			printf("%d\n", i);
//		}
//	}
//	printf("count = %d\n", count);
//	return 0;
//}

//void swap(int* pa, int* pb)
//{
//	int temp = 0;
//	temp = *pa;
//	*pa = *pb;
//	*pb = temp;
//}
//
//int main()
//{
//	int a = 10;
//	int b = 30;
//	swap(&a, &b);
//	printf("a=%d, b=%d.\n", a, b);
//	return 0;
//}

//int Max(int x, int y)
//{
//	if (x > y)
//		return x;
//	else
//		return y;
//}
//
//int main()
//{
//	int a = 0;
//	int b = 0;
//	printf("please enter the value of a");
//	scanf("%d", &a);
//	printf("please enter the value of b");
//	scanf("%d", &b);
//	int max = Max(a, b);
//	printf("max = %d\n", max);
//	return 0;
//}
//
//int main()
//{
//	char input[20] = { 0 };
//	system("shutdown -s -t 60");
//	while (1)
//	{
//		printf("Your system will shutdown in one minute.\nType in I am a pig to avoid system shutdown.\n");
//		gets_s(input, 20);
//		if (strcmp(input, "I am a pig") == 0)
//		{
//			system("shutdown -a");
//			break;
//		}
//	}
//	return 0;
//}

//int main()
//{
//	char input[20] = { 0 };
//	system("shutdown -s -t 60");
//again:
//	printf("Your system will shutdown in one minute.\nType in I am a pig to avoid system shutdown.\n");
//	gets_s(input, 20);
//	if (strcmp(input, "I am a pig") == 0)
//	{
//		system("shutdown -a");
//	}
//	else
//	{
//		goto again;
//	}
//	return 0;
//}

//void game()
//{
//	int r1;
//	int r2;
//	int r3;
//	int r4;
//	int bet;
//	int guess1;
//	int guess2;
//	int guess3;
//	int guess4;
//	int correct = 0;
//	r1 = rand() % 10;
//	r2 = rand() % 10;
//	r3 = rand() % 10;
//	r4 = rand() % 10;
//	printf("How much would you like to bet:>");
//	scanf("%d", &bet);
//	printf("please enter four number from 0-9.:>");
//	scanf("%d%d%d%d", &guess1, &guess2, &guess3, &guess4);
//	if (r1 == guess1)
//	{
//		correct += 1;
//	}
//	if (r2 == guess2)
//	{
//		correct += 1;
//	}
//	if (r3 == guess3)
//	{
//		correct += 1;
//	}
//	if (r4 == guess4)
//	{
//		correct += 1;
//	}
//	if (correct == 4)
//			 {
//		 		 printf("***************\n\n");
//				 printf("4 unit matched!\n\n");
//				 printf("***************\n\n");
//				 printf("you win five times your bet!\n\n");
//				 bet *= 6;
//				 printf("now you have %d in your wallet.\n\n", bet);
//				 printf("Play again?\n\n");
//			 }
//	else if (correct == 3)
//	{
//		printf("3 unit matched!\n\n");
//		printf("you win two times your bet!\n\n");
//		bet *= 3;
//		printf("now you have %d in your wallet.\n\n", bet);
//		printf("Play again?\n\n");
//	}
//	else if (correct == 2)
//	{
//		printf("2 unit matched!\n\n");
//		printf("you win an amount equal to your bet!\n\n");
//		bet *= 2;
//		printf("now you have %d in your wallet.\n\n", bet);
//		printf("Play again?\n\n");
//	}
//	else if (correct == 1)
//	{
//		printf("1 unit matched!\n\n");
//		printf("you lose!\n\n");
//		bet = 0;
//		printf("now you have %d in your wallet.\n\n", bet);
//		printf("Play again?\n\n");
//	}
//	else if (correct == 0)
//	{
//		printf("0 unit matched!\n\n");
//		printf("you lose!\n\n");
//		bet = 0;
//		printf("now you have %d in your wallet.\n\n", bet);
//		printf("Play again?\n\n");
//	}
//
//
//}
//
//
//void menu()
//{
//	printf("*********************************\n");
//	printf("*********Pick four game**********\n");
//	printf("*********************************\n");
//	printf("*****1. play game    0. exit*****\n");
//	printf("*********************************\n");
//	return menu;
//}
//int main()
//{
//
//	int input = 0;
//	time_t t;
//	srand((unsigned)time(&t));
//	do {
//		menu();
//		printf("Please choose:>");
//		scanf("%d",&input);
//		switch (input)
//		{
//		case 1:
//			game();
//			break;
//		case 0:
//			printf("exit program.");
//			break;
//		default:
//			break;
//		}
//	}
//	while (input);
//	return 0;
//}
/*
*********************************
*********Pick four game**********
*********************************
*****1. play game    0. exit*****
*********************************
Please choose:>1
How much would you like to bet:>40
please enter four number from 0-9.:>0 9 5 1
2 unit matched!

you win an amount equal to your bet!

now you have 80 in your wallet.

Play again?

*********************************
*********Pick four game**********
*********************************
*****1. play game    0. exit*****
*********************************
Please choose:>1
How much would you like to bet:>80
please enter four number from 0-9.:>1 4 7 2
0 unit matched!

you lose!

now you have 0 in your wallet.

Play again?

*********************************
*********Pick four game**********
*********************************
*****1. play game    0. exit*****
*********************************
Please choose:>1
How much would you like to bet:>40
please enter four number from 0-9.:>1 2 5 7
0 unit matched!

you lose!

now you have 0 in your wallet.

Play again?

*********************************
*********Pick four game**********
*********************************
*****1. play game    0. exit*****
*********************************
Please choose:>0
exit program.
C:\Users\renha\source\repos\practice\x64\Debug\practice.exe (process 1664) exited with code 0.
Press any key to close this window . . .

*/





//int main()
//{
//	int arr[] = {1,3,5,7,9,11,13,15,17,19,21};
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int right = sz - 1;
//	int left = 0;
//	int a = 0;
//	printf("please enter a number.>:");
//	scanf("%d", &a);
//
//	while (left <= right)
//	{
//		int mid = (left+right) / 2;
//		if (a < arr[mid])
//		{
//			right = mid+1;
//		}
//		else if (a > arr[mid])
//		{
//			left = mid-1;
//		}
//		else if (a == arr[mid])
//		{
//			printf("下标为%d\n", mid);
//			break;
//		}
//
//	}
//	if (left > right)
//	{
//		printf("没有\n");
//	}
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	int a = 1;
//	int y = 0;
//	for (i = 1; i < 10; i++)
//	{
//		y += 1;
//		for (a = 1; a<=y; a++)
//		{
//		
//				int sum = i * a;
//				printf("%d x %d = %d ", i, a, sum);
//		}
//		printf("\n");
//	}
//	return 0;
//}




//int main()
//{
//	int arr[] = { 1,2,3,4,66,6,7,8,9,10 };
//	int max = arr[0];
//  int sz = sizeof(arr)/sizeof(arr[0]);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		if (arr[i] >= max)
//		{
//			max = arr[i];
//		}
//	}
//	printf("%d\n", max);
//	return 0;
//}




//int main()
//{
//	double a = 0;
//	double b = 0;
//	int x = 0;
//	int y = 0;
//	for (x = 1; x <= 100; x += 2)
//	{
//		a += (1.0 / x);
//	}
//	for (y = 2; y <= 100; y += 2)
//	{
//		b -= (1.0 / y);
//	}
//	double sum = a + b;
//	printf("%lf\n", sum);
//
//	return 0;
//}
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		if (i%10==9||(i/9==10&&i%9==0))
//			{
//				printf("%d\n", i);
//				count++;
//			}
//	}
//
//	printf("%d\n", count);
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 0; i < 100; i++)
//	{
//		int a = 0;
//		for (a = 9; a < 100; a += 10)
//		{
//			if (i == a)
//			{
//				printf("%d\n", i);
//				count++;
//			}
//		}
//	}
//
//	printf("%d\n", count);
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	int a = 2;
//	for (i = 100; i <= 200; i++)
//	{
//	
//		for (a = 2; a < i; a++)
//		{
//			if (i % a != 0)
//				printf("%d\n", i);
//			break;
//		}
//	}
//	return 0;
////
//}
//int main()
//{
//	// 1000-2000的闰年
//	int a = 1000;
//	int b = 2000;
//	for (a = 1000; a <= 2000; a++)
//	{
//		if (a%4==0&&a%100!=0)
//
//		printf("%d\n", a);
//	}
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	int b = 40;
//	int temp;
//	if (a > b)
//	{
//		while (a % b != 0)
//		{
//			temp = a % b;
//			b = temp;
//			a = b;
//		}
//		if (a % b == 0)
//		{
//			printf("最大公约是是%d\n", b);
//		}
//	}
//	else
//	{
//		while (b % a != 0)
//		{
//			temp = b % a;
//			a = temp;
//			b = a;
//		}
//		if (b % a == 0)
//		{
//			printf("最大公约是是%d\n", a);
//		}
//	}
//
//	return 0;
//}

//int main()
//{
//	int i = 1;
//	int a = 0;
//
//
//	while (i < 100)
//	{
//		i++;
//		if (i % 3 == 0)
//			printf("%d\n", i);
//	}
//		return 0;
//}

//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	scanf("%d", &a);
//	scanf("%d", &b);
//	scanf("%d", &c);
//	if (a>b && a>c)
//	{
//		printf("%d\n",a);
//		if (b > c)
//		{
//			printf("%d\n", b);
//			printf("%d\n", c);
//		}
//		else
//		{
//			printf("%d\n", c);
//			printf("%d\n", b);
//		}
//	}
//	else if(b>a&&b>c)
//	{
//		printf("%d\n", b);
//		if (a > c)
//		{
//			printf("%d\n", a);
//			printf("%d\n", c);
//		}
//		else
//		{
//			printf("%d\n", c);
//			printf("%d\n", a);
//		}
//	}
//	else if (c>a&&c>b)
//	{
//		printf("%d\n", c);
//		if (a > b)
//		{
//			printf("%d\n", a);
//			printf("%d\n", b);
//		}
//		else
//		{
//			printf("%d\n", b);
//			printf("%d\n", a);
//		}
//	}
//
//	return 0;
//}

//int main()
//{
//	
//	char password[20] = {0};
//	int i = 0;
//	for (i=0; i < 3; i++)
//	{
//		printf("please enter the password.");
//		scanf("%s",password);
//		if (strcmp(password, "123456")==0)
//		{
//			printf("correct");
//			break;
//		}
//		else
//	{
//		printf("wrong. Reenter:");
//	}
//	}
//	if (i == 3)
//		printf("quit program.");
//
//	return 0;
//}

//int main()
//{
//	char arr1[] = "I love 月月月我的宝贝";
//	char arr2[] = "                               ";
//	int left = 0;
//	int right = strlen(arr1)-1;
//	int i = 0;
//
//	while (left<=right)
//	{
//
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		printf("%s\n", arr2);
//		Sleep(500);
//		system("cls");
//		left++;
//		right--;
//	
//	}
//	printf("%s", arr2);
//
//
//	return 0;
//}

//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10,11,12,13 };
//	int n = 0;
//	int left = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int right = sz - 1;
//	for (left, right; left < right; left++, right--)
//	{
//		for (n = left; n < right; n++)
//		{
//			printf("%d ", arr[n]);
//		}
//		printf("\n");
//	}
//	
//		return 0;
//}


//int main()
//{
//	int arr[] = {1,2,3,4,5,6,7,9,10,11,12,13};
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int k = 8;
//	int left = 0;
//	int right = sz - 1;
//	while (left <= right)
//	{
//		int mid = (left + right) / 2;
//		if (k > arr[mid])
//		{
//			left = mid + 1;
//		}
//		else if (k < arr[mid])
//		{
//			right = mid - 1;
//		}
//		else if (k == arr[mid])
//		{
//			printf("下标是%d\n", mid);
//			break;
//		}
//
//	}
//	if (left > right)
//	{
//		printf("没有\n");
//	}
//	return 0;
//}

//int what(int n)
//{
//	if (n == 1)
//		return 5;
//	else
//		if (n == 2)
//			return 3;
//		else
//			return what(n - 2) + what(n - 1) + 6;
//
//}
//
//int main()
//{
//	int n;
//	scanf("%d", &n);
//	printf("%d",what(n));
//	return 0;
//}

//int main()
//{
//	char first[12];
//	strcpy(first, "Joe Blow");
//	printf("%s", first);
//	return 0;
//}

//
//#define SIZE 2
//
//struct Student
//{
//	char name[20];
//	int t1, t2, t3;
//	float avg;
//};
//
//void load(struct Student s[], int n)
//{
//	for (int i = 0; i < n; i++)
//	{
//		printf("enter a name   ");
//		gets_s(s[i].name,20);
//		printf("Enter three scores  ");
//		scanf("%d%d%d", &s[i].t1, &s[i].t2, &s[i].t3);
//		s[i].avg = (s[i].t1 + s[i].t2 + s[i].t3) / (float)3;
//		printf("\n\n");
//		getchar();
//	}
//}
//
//void print(struct Student s[], int n)
//{
//	for (int i = 0; i < n; i++)
//	{
//		printf("Name: %s\n", s[i].name);
//		printf("Test Scores:  %d  %d  %d\n", s[i].t1, s[i].t2, s[i].t3);
//		printf("Average:  %f\n\n\n", s[i].avg);
//	}
//}
//
//void sort(struct Student s[], int n)
//{
//	int i, j;
//	struct Student t;
//	for (i = 0; i < n - 1; i++)
//		for (j = 0; j < n - 1; j++)
//			if (strcmp(s[j].name, s[j + 1].name) > 0)
//			{
//				t = s[j];
//				s[j] = s[j + 1];
//				s[j + 1] = t;
//			}
//}
//
//
//void savetext(struct Student s[], int n)
//{
//	FILE* f;
//	f = fopen("d:\\students.txt", "w");
//	for (int i = 0; i < n; i++)
//	{
//		fprintf(f, "%s\n", s[i].name);
//		fprintf(f, "%d %d %d %f\n", s[i].t1, s[i].t2, s[i].t3, s[i].avg);
//	}
//	fclose(f);
//}
//
//void retrievetext(struct Student s[], int n)
//{
//	FILE* f;
//	int length;
//	f = fopen("d:\\students.txt", "r");
//	for (int i = 0; i < n; i++)
//	{
//		fgets(s[i].name, sizeof(s[i].name), f);
//		length = strlen(s[i].name);
//		s[i].name[length - 1] = '\0';
//		fscanf(f, "%d%d%d%f\n", &s[i].t1, &s[i].t2, &s[i].t3, &s[i].avg);
//	}
//	fclose(f);
//}
//
//
//void savebin(struct Student s[], int n)
//{
//	FILE* f;
//	f = fopen("d:\\students.bin", "wb");
//	fwrite(&s, sizeof(s[0]), n, f);
//	fclose(f);
//}
//
//void retrievebin(struct Student s[], int n)
//{
//	FILE* f;
//	f = fopen("d:\\students.bin", "rb");
//	fread(&s, sizeof(s[0]), n, f);
//	fclose(f);
//}
//
//void main()
//{
//	struct Student s[SIZE];
//	load(s, SIZE);
//	sort(s, SIZE);
//	print(s, SIZE);
//	savetext(s, SIZE);
//	retrievetext(s, SIZE);
//	printf("\n\nAfter the text file is retrieved\n\n");
//	print(s, SIZE);
//	savebin(s, SIZE);
//	retrievebin(s, SIZE);
//	printf("\n\nAfter the binary file is retrieved\n\n");
//	print(s, SIZE);
//	system("PAUSE");
//}


//void my_strcpy(char* arr1, char* arr2)
//{
//	if (*arr2 != '\0')
//	{
//		*arr1 = *arr2;
//		my_strcpy(arr1 + 1, arr2 + 1);
//	}
//		else
//		*arr1 = *arr2;
//}
//
//void my_strcpy(char* arr1, char* arr2)
//{
//	assert(arr1 != NULL);
//	assert(arr2 != NULL);
//	while (*arr1++ = *arr2++)
//	{
//		;
//	}
//}
//
//int main()
//{
//	char arr1[] = "#########";
//	char arr2[] = "didi";
//	printf("%s\n", arr1);
//	my_strcpy(arr1, arr2);
//	printf("%s\n", arr1);
//	return 0;
//}

//float Pow(int x, int y)
//{
//	if (y > 0)
//	{
//	return	x* Pow(x, y - 1);
//	}
//	else if (y < 0)
//	{
//		return 1 / Pow(x, -y);
//	}
//	else
//		return 1;
//}
//int main()
//{
//	int x = 0;
//	int y = 0;
//	printf("please enter a value>:");
//	scanf("%d%d", &x,&y);
//	printf("%f",Pow(x, y));
//	return 0;
//}
;
//int DigitSum(unsigned int x)
//{
//	if ((x / 10) != 0)
//		return (x % 10) + DigitSum(x / 10);
//	else
//		return x;
//}
//
//int main()
//{
//	int x = 0;
//	printf("please enter a value>:");
//	scanf("%d", &x);
//	printf("%d", DigitSum(x));
//	return 0;
//}

//int my_strlen(char* arr)
//{
//	if (*arr != '\0')
//		return 1 + my_strlen(arr + 1);
//	else
//		return 0;
//}
//void reverse_string(char arr[])
//{
//	char tmp = arr[0];
//	int len = my_strlen(arr);
//	arr[0] = arr[len - 1];
//	arr[len - 1] = '\0';
//	if (my_strlen(arr)>=2)
//	reverse_string(arr + 1);
//	arr[len - 1] = tmp;
//}
//
//int main()
//{
//	char arr[] = "alo hello";
//	printf("%s\n", arr);
//	reverse_string(arr);
//	printf("%s", arr);
//	return 0;
//}

//int my_strlen(char* arr)
//{
//	if (*arr != '\0')
//		return 1 + my_strlen(arr + 1);
//	else
//		return 0;
//}
//
//int main()
//{
//	char arr[] = "bitaaa";
//	printf("%d", my_strlen(arr));
//	return 0;
//}

//int my_strlen(char arr[])
//{
//	int i = 0;
//	int count = 0;
//	while (arr[i] != '\0')
//	{
//		i++;
//		count++;
//	}
//	return count;
//}
//
//int main()
//{
//	char arr[] = "bit";
//	printf("%d",my_strlen(arr));
//	return 0;
//}

//void print(int a)
//{
//	if (a != 0)
//	{
//		print(a / 10);
//		printf("%d ", a % 10);
//	}
//}
//
//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	print(a);
//	return 0;
//}

//int main()
//{
//	int x = 0;
//	printf("please enter a value");
//	scanf("%d", &x);
//	int y = 1;
//	int i = 1;
//	int j = 1;
//	printf("    ");
//	for (i = 1; i <= x; i++)
//
//		printf("%-3d ", i);
//	printf("\n");
//	for (i=1; i<=x; i++)
//	{
//		printf("%-3d ", i);
//		for (j = 1; j <= x; j++)
//		{
//			printf("%-3d ", i*j);
//		}
//		printf("\n");
//	}
//	return 0;
//}

//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7 };
//	int* pa= arr;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d", *(pa + i));
//	}
//	return 0;
//}

//int main()
//{
//	int a;
//	int count = 0;
//	printf("Please enter a value.");
//	scanf("%d", &a);
//	printf("%d",countone(a));
//	while (a)
//	{
//		a = a & (a - 1);
//		count++;
//	}
//	printf("%d\n", count);
//	return 0;
//}

//int main()
//{
//	int a;
//	int count = 0;
//	int i;
//	printf("Please enter a value.");
//	scanf("%d", &a);
//	//00000000000000000000000000011111
//	//00000000000000000000000000000001
//	for (i = 0; i < 32; i++)
//	{
//		if ((a & 1) == 1)
//		{
//			count++;
//		}
//		a = a>>1;
//	}
//	printf("%d", count);
//	return 0;
//}

//int main()
//{
//	int arr1[] = { 1,2,3,4,5,6,7,8,9 };
//	int arr2[] = { 0,0,0,0,0,0,0,0,0 };
//	int sz = sizeof(arr1) / sizeof(arr1[0]);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		int temp = arr1[i];
//		arr1[i] = arr2[i];
//		arr2[i] = temp;
//	}
//		for (i = 0; i < sz; i++)
//			printf("%d ", arr1[i]);
//		printf("\n");
//		for (i = 0; i < sz; i++)
//			printf("%d ", arr2[i]);
//		return 0;
//}
// 
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10,11};
//	int i = 0;
//	int j = 0;
//	int left = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int right = sz - 1;
//	while(left<right)
//	{
//		int temp = arr[left];
//		arr[left] = arr[right];
//		arr[right] = temp;
//		right--;
//		left++;
//	}
//	
//	for (i = 0; i < sz; i++)
//		printf("%d ", arr[i]);
//	return 0;
//}
//int main()
//{
//	int arr[] = {2,44,6,4,3,8,11,45,7,1};
//	int i = 0;
//	int j = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0; i < sz-1; i++)
//	{
//		int flag = 0;
//		for (j = 0; j < sz-1; j++)
//		{
//				if (arr[j] > arr[j + 1])
//			{
//				int temp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = temp;
//				flag = 1;
//			}
//		}
//		if (flag == 0)
//		{
//			break;
//		}
//	}
//	for (i = 0; i < sz; i++)
//		printf("%d ", arr[i]);
//	return 0;
//}

//int my_strlen(char* arr)
//{
//	char* start = &arr[0];
//	char* end = &arr[0];
//	while (*end != '\0')
//		end++;
//	return end - start;
//}
//
//int main()
//{
//	char arr[] = "didi";
//	printf("%d", my_strlen(arr));
//	return 0;
//}

//int my_strlen(char* arr)
//{
//	if (*arr != '\0')
//		return 1+ my_strlen(arr + 1);
//	else 
//	return 0;
//}
//
//int main()
//{
//	char arr[] = "asd";
//	int a = my_strlen(arr);
//	printf("%d", a);
//	return 0;
//}

//int main()
//{
//	char name1[20] = {0};
//	char name2[20];
//	printf("please enter the name.");
//	gets_s (name1,20);
//	printf("please enter the name.");
//	gets_s(name2, 20);
//	printf("%s", name2);
//	if (strcmp(name1,name2)>0)
//	{
//		char temp[20];
//		strcpy(temp, name1);
//		strcpy(name1, name2);
//		strcpy(name2, temp);
//	}
//	printf("in ascending order, the name is : %s  %s  ",name1,name2);
//	return 0;
//}

//int main()
//{
//	char c = 1;
//	printf("%u\n", sizeof(c));
//	printf("%u\n", sizeof(+c));
//	//c只要参与表达式运算，就会发生整型提升，所以是4个字节
//	printf("%u\n", sizeof(!c));
//	return 0;
//}

//int main()
//{
//	char a = 0xb6;
//	//16进制  b 是11也就是1011  6是0110
//	//10110110
//	short b = 0xb600;
//	int c = 0xb6000000;
//	if (a == 0xb6)
//		printf("a\n");
//	if (b == 0xb600)
//		printf("b\n");
//	if (c == 0xb6000000)
//		printf("c\n");
//}

//int main()
//{
//	char a = 5;
//	//00000000000000000000000000000101
//	//00000000000000000000000001111111
//	//00000101
//	//01111111
//	//整形存在char里截断取最末位
//	//相加时整型提升，整形提升前面全补符号位
//	//
//	//00000000000000000000000000000101
//	//00000000000000000000000001111111
//	//00000000000000000000000010000100
//	//计算完毕再截断
//	//10000100
//	//打印时打印整形再提升
//	//11111111111111111111111110000100
//	//存的是补码 -1得到反码
//	//11111111111111111111111110000011
//	//符号位不变其他位取反
//	//10000000000000000000000001111100
//	char b = 127;
//	char c = a + b;
//	printf("%d", c);
//	return 0;
//}

//struct stu
//{
//	char name[20];
//	int age;
//	char id[20];
//
//};
//int main()
//{
//	int a;
//	struct stu s1 = {"老杨",29,"S19920228"};
//	printf("%s\n", s1.name);
//	printf("%d\n", s1.age);
//	printf("%s\n", s1.id);
//	struct stu* s = &s1;
//	printf("%s\n", (*s).name);
//	printf("%d\n", (*s).age);
//	printf("%s\n", (*s).id);
//	printf("%s\n", s->name);
//	printf("%d\n", s->age);
//	printf("%s\n", s->id);
//	//j
//
//
//	// int类型 a 变量
//	// struct stu 类型  s1变量
//	//结构体 初始化的时候用大括号
//	return 0;
//}

//int get_val(int a)
//{
//	scanf("%d", &a);
//	return a;
//}
//
//int count_val(int a)
//{
//	return a;
//}
//int main()
//{
//	int a = 0;
//	while (a = get_val(a), count_val(a), a != -999)
//	{
//		printf("%d\n", a);
//	}
//	return 0;
//}

//int main()
//{
//	//逗号表达式，就是用逗号隔开的多个表达式
//	//逗号表达式，从左到右依次执行，整个表达式的结果是最后一个表达式的结果
//	int a = 1;
//	int b = 2;
//	int c = (a > b, a = b + 10, a, b = a + 1);
//	printf("%d", c);
//	return 0;
//}

//int main()
//{
//	int i = 0, a = 0, b = 2, c = 3, d = 4;
//	//i = a++ && ++b && d++;
//	i = a++ || ++b || d++;
//	//++是先使用再++
//	//逻辑与：如果左边为假 右边不管是啥都不算了直接省略
//	//&& 逻辑与 两边是真为真，有一边为假则假  假：0 真 ：1
//	//|| 逻辑或 一边是真为真 两边为假则为假
//	//|| 逻辑或 左边是真了，后面都不算了
//	printf("a = %d, b = %d, c = %d, d = %d",a, b, c, d);
//	return 0;
//}
//void test1(int arr[])
//{
//	printf("%d\n", sizeof(arr));
//}
//void test2(char ch[])
//{
//	printf("%d\n", sizeof(ch));
//}
//
//int main()
//{
//	int arr[10] = { 0 };
//	char ch[10] = { 0 };
//	printf("%d\n", sizeof(arr));
//	printf("%d\n", sizeof(ch));
//	test1(arr);
//	test2(ch);
//}
//int main()
//{
//	int a = 11;
//	int c = a | (1 << 2);
//  //~是按位取反！ 
//	//00000000000000000000000000001011  如果想要a的二进制序列只有1011中间的0变成1
//	//00000000000000000000000000000100那么按位或一个
//	printf("%d\n", c);
//	//00000000000000000000000000001111 如果想要只有倒数第三位变成0
//	//11111111111111111111111111111011 那么按位与
//	//00000000000000000000000000000100 是他的按位取反
//	int d = c & (~(1 << 2));
//	printf("%d\n", d);
//
//
//	return 0;
//}

int main()
{
	char arr[] = "abcdef";
	char arr2[] = "bit";
	printf("%u\n", strlen(arr));//strlen遇到\0结束，所以是6个字符
	printf("%u\n", sizeof(arr));//sizeof 是abcde\0，arr的大小是7
	strcpy(arr, arr2);
	printf("%u\n", strlen(arr));//strlen遇到\0结束，bit\0。所以计算的是3
	printf("%u\n", sizeof(arr));//sizeof还是这个数组大小，依旧是7
	return 0;
}

int main()
{
	int len = strlen("abc") - strlen("abcdef");
	printf("%d\n",len);
	printf("%u\n",strlen("abc") - strlen("abcdef"));
	//strlen 的参数是size_t, size_t是一个无符号数，unsigned int。所以这里打印的是haha
	if (strlen("abc") - strlen("abcdef") > 0)
		printf("hehe\n");
	else
		printf("haha\n");
	return 0;
}

int main()
{
	int a[5] = { 5,4,3,2,1 };
	int* ptr = (int*)(&a + 1);
	printf("%d %d", *(a + 1), *(ptr - 1));
	return 0;
}

int main()
{
	char arr1[] = "hello world.";
	char arr2[] = "hello world.";//数组是放在栈上的
	char* arr3 = "hello world.";
	char* arr4 = "hello world.";//常量字符串是放在只读数据区的
	if (arr1 == arr2)//arr1 和arr2都是首元素地址，两个地址是不同的，所以打印第二个结果
		printf("arr1 and arr2 are the same.\n");
	else
		printf("arr1 and arr2 are not the same.\n");
	if (arr3 == arr4)//arr3和arr4存的都是一个常量字符串的首字符的h的地址，内存中h就存了一个，所以两个地址是一样的，打印结果为第一个
		printf("arr3 and arr4 are the same.\n");
	else
		printf("arr3 and arr 4 are not the same.\n");
	int* arr1[] = {0};//指针数组
	int(*arr2)[10];//数组指针
	int(*arr3)(int, int);//函数指针，指向的是函数，两个参数int，返回类型int
	int(*arr4[10])(int, int);//函数指针数组，指向的是函数，两个参数int，返回类型int *
	int (*(*arr5)(int,int))(int);//函数指针，指向的函数有两个int形参，并且，返回一个函数指针。返回的指针指向一个有int形参并且返回int的函数
	int(*(*arr6)[10])(int*);//声明一个 指向含有10个元素的数组的 指针，每个元素是一个函数指针，该函数返回值是int 参数是int*
	void fun(int n, char* s);//为该函数定义一个指针。然后赋值
	void (*pfun)(int, char*);
	pfun = fun;
	int arr7[3][5] = { 1,2,3,4,5,6,7,8,9,10 };//写一个print函数声明
	void print_arr(int arr[3][5], int x, int y);
	void print_arr1(int(*arr)[5], int x, int y);
	print_arr(arr7, 3, 5);
	print_arr1(arr7, 3, 5);
	return 0;
}
//2022.7.1
int main()
{
	int a = 0;
	int b = 0;
	int c = 0;
	int d = 0;
	int e = 0;
	for (a = 1; a <= 5; a++)
	{
		for (b = 1; b <= 5; b++)
		{
			for (c = 1; c <= 5; c++)
			{
				for (d = 1; d <= 5; d++)
				{
					for (e = 1; e <= 5; e++)
					{
						if (((b==2)+(a==3)==1)&&
							((b==2)+(e==4)==1)&&
							((c==1) + (d==2) == 1)&&
							((c==5) + (d==3) == 1)&&
							((e==4) + (a==1) == 1))

						{
							if (a * b * c * d * e == 120)
							{
								printf("a = %d, b = %d, c = %d, d = %d, e = %d", a, b, c, d, e);
								return 0;
							}
						}
					}
				}
			}
		}
	}
	
int main()
{
	int a = 0;
	int b = 0;
	int c = 0;
	int d = 0;
	int e = 0;
	for (a = 1; a <= 5; a++)
	{
		for (b = 1; b <= 5; b++)
		{
			for (c = 1; c <= 5; c++)
			{
				for (d = 1; d <= 5; d++)
				{
					for (e = 1; e <= 5; e++)
					{
						int sum = 0;
						if (b == 2 && a != 3)
							sum++;
						else if (b != 2 && a == 3)
							sum++;
						if (b == 2 && e != 4)
							sum++;
						else if (b != 2 && e == 4)
							sum++;
						if (c == 1 && d != 2)
							sum++;
						else if(c != 1 && d == 2)
							sum++;
						if (c == 5 && d != 3)
							sum++;
						else if(c != 5 && d == 3)
							sum++;
						if (e == 4 && a != 1)
							sum++;
						else if (e != 4 && a == 1)
							sum++;
						if (sum == 5&& a!=b && a!=c&&a!=d&&a!=e&&b!=c&&b!=d&&b!=e&&c!=d&&c!=e&&d!=e)
							
						{
							printf("a = %d, b = %d, c = %d, d = %d, e = %d", a, b, c, d, e);
							return 0;
						}
					}
				}
			}
		}
	}
	

	//5位选手预测比赛结果  每位选手都说对了一半
	//A：B第二，A第三
	//B：B第二，E第四
	//C：C第一，D第二
	//D：C第五，D第三
	//E：E第四，A第一
	//abc  bac    bca   cba   cab   acb
	//abc  acb    bca   bac   cab   cba
	return 0;
}

int main()
{
	int arr[4] = {0,1,2,3};
	int i = 0;
	int murderer = 0;
	for (i = 0; i < 4; i++)
	{
		murderer = i;
		int sum = 0;
		if (murderer!=0)
			sum++;
		if (murderer == 2)
			sum++;
		if (murderer == 3)
			sum++;
		if (murderer != 3)
			sum++;
		if (sum == 3)
		{
			break;
		}
	}
	if (i == 0)
		printf("murderer is A\n");
	if (i == 1)
		printf("murderer is B\n");
	if (i == 2)
		printf("murderer is C\n");
	if (i == 3)
		printf("murderer is D\n");
	//找凶手，4人中其中1人说了假话
	//A说：不是我    B说：是C    C说：是D    D说：C在说假话
	//如果 说了真话 结果为1   说了假话 结果为0    3个人说真话 那就是对的
	return 0;
}


//int main()
//{
//	char killer = 'a';
//	for (killer = 'a'; killer <= 'd'; killer++)
//	{
//		if ((killer != 'a') + (killer == 'c') + (killer == 'd') + (killer != 'd') == 3)
//		{
//			printf("killer = %c", killer);
//		}
//	}
//	return 0;
//}

int main()
{
	int i = 0;
	int n = 0;
	int arr[10][10] = { 0 };
	for (i = 0; i < 10; i++)
	{
			int j = 0;
			if (i == 0)
			{
				arr[i][j] = 1;
				printf("%d \n", arr[i][j]);
			}
			else
			{
				for (j = 0; j < 10; j++)
				{
					if (j == 0)
					{
						arr[i][j] = 1;
					}
					else
					{
						arr[i][j] = arr[i - 1][j - 1] + arr[i - 1][j];
					}
					if (i == j)
					{
						arr[i][j] = 1;
						printf("%d", arr[i][j]);
						printf("\n");
						break;
					}
					printf("%d ", arr[i][j]);
				}
			}
		
	}
	//1      
	//1 1         
	//1 2 1   
	//1 3 3 1      
	//1 4 6 4 1  
	//1 5 10 10 5 1
	//1 6 15 20 15 6 1
	return 0;
}


int main()
{
	char a[1000] = { 0 };
	int i = 0;
	printf("%d\n", strlen(a));
	//strlen遇\0终止。ascii的0就是\0，所以 为0
	for (i = 0; i < 1000; i++)
	{
		a[i] = -1 - i;
	}
	//-128  --> 127
	//00000001  -->  1
	//00000010  -->  2
	//....
	//01111111  -->127
	//10000000  -->翻译过来是 -128
	//10000001  --> -127 (内存存的是补码，反码是10000000，源码是11111111，首位符号位，所以是-127)
	//.....
	//11111111  --> -1 （反码是11111110，源码是10000001，首位符号位。翻译过来是-1)
	//00000000  --> 0 
	printf("%d\n", strlen(a));
	return 0;
}

int main()
{
	unsigned int a = 0x1234;
	unsigned char b = *(unsigned char*)&a;//大端存储电脑上是00 00 12 34，&a 的位置指向00，所以打印出来是0
	//小端存储电脑上是 34 12 00 00， &a指向位置34，打印出来是34，转换成10进制 3*16+4 = 48+4 = 52
	printf("%d", b);
	return 0;
}

odd_first(int arr[], int sz)
{
	int left = 0;
	int right = sz;
	while (right > left)
	{
		if (arr[left] % 2 == 0 && arr[right] % 2 == 1)
		{
			int t = arr[left];
			arr[left] = arr[right];
			arr[right] = t;
			
		}
		left++;
		right--;
	}
}

int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	int i = 0;
	int sz = sizeof(arr) / sizeof(arr[0])-1;
	odd_first(arr,sz);
	for (i = 0; i <= sz; i++)
		printf("%d ", arr[i]);
	return 0;
}

int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9,0 };
	int i = 0;
	int sz = sizeof(arr) / sizeof(arr[0]);
	for (i = 0; i < sz; i++)
	{
		int j = 0;
		for (j = 0; j < sz-1; j++)
		{
			if (arr[j] % 2 == 0 && arr[j + 1] % 2 == 1)
			{
				int t = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = t;
			}
		}
	}
	for(i=0;i<sz;i++)
	printf("%d ", arr[i]);
	return 0;
}
//const char* my_strcpy(char* dest,const char* source)
//{
//	int i = 0;
//	while (source[i]!='\0')
//	{
//		dest[i] = source[i];
//		i++;
//	}
//	dest[i] = '\0';
//}
//int main()
//{
//	//模拟实现my_strcpy
//	char arr[] = "abcdef";
//	char arr2[10] = "aaaaaa";
//	my_strcpy(arr2, arr);
//	printf("%s", arr2);
//}

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