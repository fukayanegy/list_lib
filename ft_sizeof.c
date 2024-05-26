#include "list_lib.h"

size_t	ft_sizeof(enum types type)
{
	if (type == INT)
		return (sizeof(int));
	if (type == CHAR)
		return (sizeof(char));
	else
		return (sizeof(void*));
}
