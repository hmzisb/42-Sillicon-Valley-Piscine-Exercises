
					#include <stdio.h>
					#include <stdlib.h>
					#include <string.h>

					#define TEST(EXP, RES) printf(#EXP " (" #RES " vs %d) -> %d\n", (EXP), ((EXP)) == (RES))
					#define TEST_STR(EXP, RES) printf(#EXP " (" #RES " vs \"%s\") -> %d\n", (EXP), strcmp(((EXP)), (RES)) == 0)

					int	*ft_map(int *tab, int length, int (*f)(int));
				int inc_num(int n)
{
	return n + 5;
}
int main()
{
	int test1[] = {1,2,3,4,5};
	int* res = ft_map(test1, 5, inc_num);
	for (int i = 0; i < 5; i++)
		printf("%d,", res[i]);
	printf("\n");
	free(res);
	int test2[] = {-25,0,20,45};
	res = ft_map(test2, 3, inc_num);
	for (int i = 0; i < 3; i++)
		printf("%d,", res[i]);
	printf("\n");
	free(res);
	int test3[] = {5};
	res = ft_map(test3, 0, inc_num);
	for (int i = 0; i < 0; i++)
		printf("%d,", res[i]);
	printf("\n");
	
	free(res);
}


