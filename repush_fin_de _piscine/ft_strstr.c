char	*ft_strstr(char *str, char *to_find)
{
	int i;
	int j;

	if (*to_find == '\0')
		return (str);
	i = 0;
	j = 0;
	while (str[i])
	{
		if (to_find[j] == '\0')
			return(&str[i]);
		if (str[i + j] == to_find[j])
			j++;
		else
		{
			j = 0;
			i++;
		}
	}
	return (0);
}
