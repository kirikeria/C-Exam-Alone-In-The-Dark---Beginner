int	ft_list_size(t_list *begin_list)
{
	t_list	*list;
	int i;

	i = 0;
	list = begin_list;
	while (list)
	{
		list = list->next;
		i++;
	}
	return (i);
}
