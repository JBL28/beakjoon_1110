#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int before, after;
	int cycle = 0;
	scanf("%d", &before);
	after = before;

	cycle++;
	after = (after / 10 + after % 10) % 10 + 10 * (after % 10);
	while (before != after) {
		cycle++;
		after = (after / 10 + after % 10) % 10 + 10 * (after % 10);
	}
	printf("%d", cycle);
	return 0;
}