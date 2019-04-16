
					#include <stdio.h>
					#include <stdlib.h>
					#include <string.h>

					#define TEST(EXP, RES) printf(#EXP " (" #RES " vs %d) -> %d\n", (EXP), ((EXP)) == (RES))
					#define TEST_STR(EXP, RES) printf(#EXP " (" #RES " vs \"%s\") -> %d\n", (EXP), strcmp(((EXP)), (RES)) == 0)

					void	ft_sort_wordtab(char **tab);
				int main(int argc, char** argv)
{
	if (argc < 1)
		return 0;
	ft_sort_wordtab(argv + 1);
	for (char** iter = argv + 1; *iter != 0; iter++)
		printf("%s,", *iter);
}


