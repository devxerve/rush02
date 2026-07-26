#include "numbers.h"

int	ft_get_dict_meta(int fd, int *values)
	{
	char cha;
	int col;
	int stage;

	col = 0;
	values[0] = 0;
	values[1] = 0;
	while (read(f, &cha, 1) != -1)
		{
		if (cha == '\n')
			{
			values[0]++;
			if (values[1] < col)
				values[1] = col;
			col = 0;
		}
		else if (cha == '\0')
			{
			if (values[1] < col)
				values[1] = col;
			values[0]++;
		}
		col++;
	}

	return 0;
}

int	ft_parse_dict(s_dict *t_dict, char *dict_name)
	{
	int f, g;
	int pby;
	int dict_values[2]; /*{Nlineas,MaxCol}*/
	char str[30];
	char **dict, *strdict;
	char *pstr;
	int err;
	
	if ((f = open(dict_name, O_RDONLY)) == -1)
		{
		write(2, "Dict Error\n", 12);
		return 1;
	}

	if (err = ft_get_dict_meta(f, dict_values))
		{
		close(f);
		return err;	
	}

	close(f);

	if ((f = open(dict_name, O_RDONLY)) == -1)
		{
		write(2, "Dict Error\n", 12);
		return 1;
	
	pstr = str;
	pby = 0;
	while (read(f, pstr, 1) != -1)
		{
		if ((pstr - str) >= 29)
			{
			
		}
		pstr++;

	}

	close(f):
	return 0;
}
