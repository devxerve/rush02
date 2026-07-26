#include "numbers.h"

int	ft_check_del(char c, char *charset)
{ 
	int	i;
	
	i = 0;
	while (charset[i] != '\0')
	{
		if (charset[i] == c)
			return (1);
		i++;
	}
	return (0);
}

int	ft_count_word(char *str, char *charset)
{
	char	*initial;

	initial = 0;
	while (str[i] != '\0')
	{
		if (ft_check_del(str[i], charset) == 1)
		{
			ft_copy_word(&str[i - 1], initial);
			i++;
			initial = &str[i];
		}
		else if (check == 0)
			i++;    
	}
	return (0);
}

char	*ft_copy_word(char *position, char *initial)
{
	char **str_split;
	

	while (&initial <= &postion)
	{
		str_split[i] = initial;
		initial++;
	}	
}

char	**ft_split(char *str, char *charset)
{
	char	**str_split;
	int	i;

	i = 0;
	ft_count_word(str, charset);
}

