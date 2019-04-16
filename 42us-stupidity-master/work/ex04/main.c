
					#include <stdio.h>
					#include <stdlib.h>
					#include <string.h>

					#define TEST(EXP, RES) printf(#EXP " (" #RES " vs %d) -> %d\n", (EXP), ((EXP)) == (RES))
					#define TEST_STR(EXP, RES) printf(#EXP " (" #RES " vs \"%s\") -> %d\n", (EXP), strcmp(((EXP)), (RES)) == 0)

					int	ft_count_if(char **tab, int (*f)(char*));
				int starts_with_z(char* str)
{
	return str[0] == 'z';
}
int main(int argc, char** argv)
{
	printf("%d", ft_count_if(argv + 1, starts_with_z));
	if (argc < 2)
		return 0;
}


