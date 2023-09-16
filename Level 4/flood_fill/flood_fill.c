
static void	fill(char **tab, t_point size, t_point p, char zone)
{
	if (0 <= p.x && p.x < size.x && 0 <= p.y && p.y < size.y
		&& tab[p.y][p.x] == zone)
	{
		tab[p.y][p.x] = 'F';
		fill(tab, size, (t_point){p.x - 1, p.y}, zone);
		fill(tab, size, (t_point){p.x + 1, p.y}, zone);
		fill(tab, size, (t_point){p.x, p.y - 1}, zone);
		fill(tab, size, (t_point){p.x, p.y + 1}, zone);
	}
}

void  flood_fill(char **tab, t_point size, t_point begin)
{
	fill(tab, size, begin, tab[begin.y][begin.x]);
}
