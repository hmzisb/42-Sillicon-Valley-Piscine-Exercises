
					#include <stdio.h>
					#include <stdlib.h>
					#include <string.h>

					#define TEST(EXP, RES) printf(#EXP " (" #RES " vs %d) -> %d\n", (EXP), ((EXP)) == (RES))
					#define TEST_STR(EXP, RES) printf(#EXP " (" #RES " vs \"%s\") -> %d\n", (EXP), strcmp(((EXP)), (RES)) == 0)

					void	ft_foreach(int *tab, int length, void (*f)(int));
				void putnbr(int n)
{
	printf("%d,", n);
}
int main()
{
	int test1[] = {1,2,3,4,5};
	int test2[] = {-25,0,20,45};
	int test3[] = {5};
	
	ft_foreach(test1, 5, putnbr);
	printf("\n");
	ft_foreach(test2, 3, putnbr);
	printf("\n");
	ft_foreach(test3, 0, putnbr);
	printf("\n");
}


