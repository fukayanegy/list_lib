#include "list_lib.h"

int	append(t_list *list, void *element, t_node *node)
{
	if (list->size >= list->capacity)
	{
		list->capacity *= 2;
		// list->data = realloc(list->data, list->capacity * sizeof(void*));
		list->data = ft_realloc(list->data, list->capacity * sizeof(void*), node);
		if (!list->data)
			return (1);
	}
	list->data[list->size++] = element;
	return (0);
}
