int	ft_get_valueline(int pos)
{
	int x;

	if (pos >= 0 && pos < 4)
		x = 0;
	else if (pos >= 4 && pos < 8)
		x = 4;
	else if (pos >= 8 && pos < 12)
		x = 8;
	else
		x = 12;
	return (x);
}
