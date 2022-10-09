#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	range;
	int	i;
	int	*ret;

	if (min >= max)
	{
		ret = NULL;
		return (ret);
	}
	range = ((max--) - min);
	ret = (int*)malloc(sizeof(*ret) * range);
	i = 0;
	while (i < range)
	{
		ret[i] = min++;
		i++;
	}
	return (ret);
}
