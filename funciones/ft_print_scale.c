#include "numbers.h"

void	ft_print_scale(int scale, t_dict *dict, int total_elements)
{
	char	*key;
	int		i;
	char	*scale_word;

	if (scale == 0)
		return ;
	key = malloc((scale * 3) + 2);
	if (key == NULL)
		return ;
	key[0] = '1';
	key[1] = '\0';
	i = 0;
	while (i < scale)
	{
		ft_strcat(key, "000");
		i++;
	}
	scale_word = ft_search_dict(dict, total_elements, key);
	ft_control_spaces(0);
	write(1, scale_word, ft_len(scale_word));
	free(key);
}
