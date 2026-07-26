#include "numbers.h"



void    fill_chunk(char *dest, char *src, int *pos, int size)
{
    int i;

    i = 0;
    while (i < size)
    {
        dest[i++] = src[*pos];
        (*pos)++;
    }
    dest[i] = '\0';
}

static void fill_blocks(char **blocks, char *num_str,
    int total_blocks, int block_size)
{
    int i;
    int pos;

    i = 0;
    pos = 0;
    while (i < total_blocks)
    {
        blocks[i] = malloc(4 * sizeof(char));
        if (i == 0)
            fill_chunk(blocks[i], num_str, &pos, block_size);
        else
            fill_chunk(blocks[i], num_str, &pos, 3);
        i++;
    }
    blocks[i] = NULL;
}

char    **ft_solve_number(char *num_str, int total_elements)
{
    char    **blocks;
    int     total_blocks;
    int     block_size;

    total_blocks = (total_elements + 2) / 3;
    block_size = total_elements % 3;
    if (block_size == 0)
        block_size = 3;
    blocks = malloc((total_blocks + 1) * sizeof(char *)  );
    if (!blocks)
        return (NULL);
    fill_blocks(blocks, num_str, total_blocks, block_size);
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