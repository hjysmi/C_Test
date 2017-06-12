#include <stdio.h>
#include <string.h>
#define Contacts struct contructs
void query();
Contacts {
	char name[10];
	char birth[10];
	char sex[10];
	char landline_phone[10];//固定电话
	char mobilephone[10];//移动电话
} contacts[10];

void query()
{
	int a = 0;
	int i = 0;
	scanf("%d", &a);
	getchar();	
	while (i < a)
	{
		char str[10][10];
		int index = 0;
		int ch;
		while ((ch = fgetc(stdin)) != '\n') {
			if (ch == ' ' || ch == ',')
				continue;
			ungetc(ch, stdin);
			scanf("%s",str[index++]);
		}
		strcpy(contacts[i].name, str[0]);
		strcpy(contacts[i].birth, str[1]);
		strcpy(contacts[i].sex, str[2]);
		strcpy(contacts[i].landline_phone, str[3]);
		strcpy(contacts[i].mobilephone, str[4]);
		i++;
	}
	//查询
	int num[10];
	int index_2 = 0;
	int chx;
	while ((chx = fgetc(stdin)) != '\n') {
		if (chx == ' ' || chx == ',')
			continue;
		ungetc(chx, stdin);
		scanf("%d", &num[index_2++]);
	}
	for (int y = 1; y < index_2;y++) {
		int index_num = num[y] - 1;
		if (0 == strlen(contacts[index_num].name)) {
			printf("Not Found\n");
		}
		else {
			printf("%s %s %s %s %s\n", contacts[index_num].name, contacts[index_num].landline_phone
			, contacts[index_num].mobilephone, contacts[index_num].sex, contacts[index_num].birth);
		}

	}
}
//int main()
//{
//	query();	
//	return 0;
//}

