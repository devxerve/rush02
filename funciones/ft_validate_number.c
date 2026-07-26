int	ft_validate_number(char *str)
{
	while (str)
	{
		if ('0' <= str || str >= '9')
			str++;
		else
			return (0);
	}
	return (1);
}
