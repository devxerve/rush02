#include "numbers.h"

int	ft_get_dict_meta(int fd, int *values)
	{
	char cha;
	int colkey, colval;
	int stage;

	stage = 0;
	colkey = 0;
	colval = 0;
	values[0] = 0;
	values[1] = 0;
	values[2] = 0;
	while (read(f, &cha, 1) != -1)
		{
		if (cha >= '0' && cha <= '9')
			colkey++;

		if (stage == 0 && cha == ':')
			stage = 1;

		if (stage == 1)
			colval++;

		if (cha == '\n')
			{
			values[0]++;
			if (values[1] < colval)
				values[1] = colval;
			if (values[2] < colkey)
				values[2] = colkey;
			colkey = 0;
			colval = 0;
			stage = 0;
		}
		else if (cha == '\0')
			{
			if (values[1] < colval)
				values[1] = colval;
			if (values[2] < colkey)
				values[2] = colkey;
			values[0]++;
		}
		
	}

	return 0;
}

int	ft_parse_dict(s_dict *t_dict, char *dict_name)
	{
	int f;/*file descriptor*/
	int dict_values[3]; /*{Nlineas,MaxColVal,MaxColKey}*/
	t_dict *dict; /*Dict*/
	char *pstr; /*pointer to actual working string*/
	int err; /*returned error*/
	
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

	if (dict = (t_dict *) malloc(sizeof(t_dict) * values[0]))
		return 2;

	if ((f = open(dict_name, O_RDONLY)) == -1)
		{
		write(2, "Dict Error\n", 12);
		return 1;
	
	pstr = str;
	pby = 0;
	while (read(f, pstr, 1) != -1)
		{

	}

	close(f):
	return 0;
}
