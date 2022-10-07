void	ft_putchar(char c);

int		main(int ac, char **av)
{
	int arg;
	int	i;

	arg = 1;
	while (arg < ac)
	{
		i = 0;
		while (av[arg][i])
			ft_putchar(av[arg][i++]);
		ft_putchar('\n');
		arg++;
	}
	return (0);
}
