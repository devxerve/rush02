int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while ((s1[i] != '\0') && (s1[i] == s2[i]))
	{
		i++;
	}
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}

int	ft_len(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_strcat(char *dest, char *src)
{
	int	length;
	int	i;

	length = 0;
	while (dest[length] != '\0')
	{
		length++;
	}
	i = 0;
	while (src[i] != '\0')
	{
		dest[i + length] = src[i];
		i++;
	}
	dest[i + length] = '\0';
	return (dest);
}
