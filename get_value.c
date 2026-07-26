#include <unistd.h>
#include <stdio.h>

int	get_value(char *str)
{
	int	t;
	t = 0;
	while(t <= 2 || str[t] == '\0' )
	{
		t++;
	}
	if (t == 2)
	{
		return (2);
	}
	while(t <= 1 || str[t] == '\0')
	{
		t++;
	}
	if (t == 1)
	{
		return (1);
	}

	if(t == 0)
	{
		return (0);
	}

}

int	retour_get_value(char *str)
{
	int	i;

	i = 2;
	if (get_value(str) == 3)
	{
		if(str[i] > 1)
		{
			write(1, &str[i], 1);
			write(1, "100", 3);
			i--;
		}
		if(str[i] > 0)
		{
			write(1, &str[i], 1);
			write(1,"0", 1);
			i--;
		}
		write(1, &str[i], 1);
	}
}
int	main(void)
{
	char	c[] = "999";
	get_value(c);
	retour_get_value(c);
}
