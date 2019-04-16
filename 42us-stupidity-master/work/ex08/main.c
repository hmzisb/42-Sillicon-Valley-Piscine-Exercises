
					#include <stdio.h>
					#include <stdlib.h>
					#include <string.h>

					#define TEST(EXP, RES) printf(#EXP " (" #RES " vs %d) -> %d\n", (EXP), ((EXP)) == (RES))
					#define TEST_STR(EXP, RES) printf(#EXP " (" #RES " vs \"%s\") -> %d\n", (EXP), strcmp(((EXP)), (RES)) == 0)

					void	ft_advanced_sort_wordtab(char **tab, int (*cmp)(char *, char *));
				int my_reverse_strcmp(char* s1, char* s2)
{
	while (*s1 == *s2 && *s1 != 0)
	{
		s1++;
		s2++;
	}
	return *s2 - *s1;
}
int main(int argc, char** argv)
{
	if (argc < 1)
		return 1;
	ft_advanced_sort_wordtab(argv + 1, my_reverse_strcmp);
	
	for (char** iter = argv + 1; *iter != 0; iter++)
		printf("%s,", *iter);
}


