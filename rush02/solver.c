#include "numbers.h"

char *ft_block(void)
{
	char *block;

	block = malloc(4 * sizeof(char));
	return (block);
}


char ** ft_solve_number(char *num_str, int total_elements)
{
	char	**blocks;
	int	total_blocks;
	int	i;
	int	 position;
	int	 j;

	total_blocks = (total_elements + 2) / 3;
	blocks = malloc((total_blocks + 1) * sizeof(char *));
	if (!blocks)
		return (NULL);
	i = 0;
	position = 0;
	while (i < total_blocks)
	{
		j = 0;
		blocks[i] = ft_block();
		if (!blocks[i])
			return (NULL);
		while (position < total_elements && j < 3)
			blocks[i][j++] = num_str[position++];
		blocks[i++][j] = '\0';
	}
	blocks[total_blocks] = NULL;
	return (blocks);
}
#include <stdio.h>
int main(){

	char **blocks;
	int i;

	blocks = ft_solve_number("12345678904", 11);

	if (blocks == NULL)
		return (1);

	i = 0;
	while (blocks[i] != NULL)
	{
		printf("Bloque %d: %s\n", i, blocks[i]);
		i++;
	}

	return (0);
}