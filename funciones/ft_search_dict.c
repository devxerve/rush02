#include "numbers.h"

char	*ft_search_dict(t_dict *dict, int total_elements, char *key)
{
	int	i;
	int	j;

	i = 0;
	while (i < total_elements)
	{
		if (ft_strcmp(dict[i].key, key) == 0)
		{
			j = i + 1;
			while (j < total_elements)
			{
				if (ft_strcmp(dict[j].key, key) == 0)
				{
					write(1, "ERROR: INVALID DICTIONARY\n",
						sizeof("ERROR: INVALID DICTIONARY\n"));
					return (NULL);
				}
			}
			return (dict[i].value);
		}
		i++;
	}
	return (NULL);
}
