#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void query_fri();

struct Info {
	char name[10];
	char birth[8];
	char number[17];
};

void query_fri()
{
	int N = 0;
	scanf("%d", &N);
	struct Info *info = (struct Info *)malloc(N * sizeof(struct Info));
	for (int i = 0; i < N; i++)
	{
		scanf("%s %s %s", info[i].name, info[i].birth, info[i].number);
	}
	for (int j = 0; j < N-1; j++)
	{
		for (int i = 0; i < N - 1; i++) {
			int y = strcmp(info[i].birth, info[i + 1].birth);
			if (y==1) {
				struct Info info_temp = info[i]; info[i] = info[i + 1]; info[i + 1] = info_temp;
			}
		}
	}
	for (int i = 0; i < N; i++)
	{
		printf("%s,%s,%s\n", info[i].name, info[i].birth, info[i].number);
	}
	


}
int main()
{
	//query_fri();

	return 0;
}