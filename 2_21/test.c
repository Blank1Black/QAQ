 #define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int main()
//{
//	int	arr[5] = { 1,2,3,4,5 };
//	int arr0[5] = { 6,7,8,9,10 };
//	int tmp = 0;
//	int i = 0;
//	int sz = sizeof(arr)/sizeof(arr[0]);
//	for (i = 0; i < sz; i++)
//	{
//		tmp = arr[i];
//		arr[i] = arr0[i];
//		arr0[i] = tmp;
//	}
//
//		return 0;
//}
int DigitSum( unsigned int n)
{	
	
	if (n > 9)
	{
		return DigitSum(n / 10) + n % 10;
	}
	else
	{
		return n;
	}
}
int main()
{
	unsigned int n = 0;
	int sum = 0;
	scanf("%d",&n);
	sum = DigitSum(n);
	printf("sum=%d\n", sum);
	return 0;
}