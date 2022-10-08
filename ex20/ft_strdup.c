#include <stdlib.h>

char	*ft_strdup(char *src)
{
	int		len;
	int		i;
	char	*str;

	len = 0;
	while (src[len] != '\0')
		len++;
	str = (char*)malloc(sizeof(*src) * (len + 1));
	i = 0;
	while (src[i] != '\0')
		str[i++] = src[i++];
	str[i] = '\0';
	return (str);
}
