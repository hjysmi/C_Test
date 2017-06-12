#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int Factorial(const int N);
int Count_digit(const int N, const int D);
int IsTheNumber(const int N);
//int main()
//{
//	//printf("result: %d\n", IsTheNumber(676));
//
//	int n1, n2, i, cnt;
//	scanf("%d %d", &n1, &n2);
//	cnt = 0;
//	for (i = n1; i < n2; i++)
//	{
//		if (IsTheNumber(i))
//		{
//			cnt++;
//		}
//	}
//	printf("cnt = %d\n", cnt);
//	return 0;
//}
int IsTheNumber(const int N)
{
	int count = 0;
	int temp = (int)sqrt(N);
	if (temp*temp == N) {//完全平方数
		//判断是否有两个相同的数
		int n = N;
		int yu[25];
		do {
			yu[count] = n % 10;
			n = n / 10;
			//printf("count=%d,yu[%d]=%d\n", count, count, yu[count]);
			count++;
		} while (n>0);
		
		if (count < 2)return 0;
		for (int i = 0; i <= count; i++)
		{
			
			for (int j = i + 1; j <= count; j++) {
				//printf("i=%d,j=%d,yu[%d]=%d,yu[%d]=%d\n", i, j, i, yu[i], j,yu[j]);
				if (yu[i] == yu[j]) {
					for (int x = 0; x<=count ; x++)
					{
						printf("yu[%d]=%d",x,yu[x]);
					}
					printf("\n");
					return 1;
				}
				
			}
		}
	}
	
	return 0;
}


int Count_digit(const int N, const int D)
{
	int i = 0;
	int result[25];
	int count = 0;
	int n = abs(N) ;
	int yu = 0;//余数

	while (n > 0)
	{
		yu = n % 10;
		result[i] = yu;
		n = n / 10;	
		i++;		
	}
	for (int j =  i-1; j >= 0; j--)
	{
		if (D == result[j]) {
			count++;
		}
	}
	
	return count;
}

int Factorial(const int N)
{
	int result = 1;
	if (N == 0 )
	{
		return 0;
	}
	else if (N < 0)
	{
		return 0;
	}
	else {
		if (N == 1) {
			result = 1;
		}
		
		for (int i = 1; i <= N; i++)
		{
			result *= i;
			printf("i=%d , result=%d\n" ,i,result);
		}
		return result;
	}

	return 0;
}