#include <stdio.h>
#include <stdlib.h>
#include<string.h>

int main()
{
	int year;
	char name[40];
	char line[100];
	FILE* fp = fopen("file.txt", "r");
	fgets(line, sizeof(line), fp);
	sscanf(line, "%d\t%s\n", &year,name);
	printf("%d , %s", year, name );
	return 0;

}