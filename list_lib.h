#ifndef LIST_LIB_H
# define LIST_LIB_H

# include <stdlib.h>
# include "malloc_lib/malloc_lib.h"

# define INITIAL_CAPACITY 2

enum types{
	INT,
	CHAR,
	LONG,
	U_INT,
	U_CHAR,
	U_LONG,
};

typedef struct s_list
{
	void		**data;
	size_t		size;
	size_t		capacity;
	enum types	type;
}			t_list;

size_t	ft_sizeof(enum types type);
int		init_list(t_list *list, enum types type, t_node *node);
int		append(t_list *list, void *element, t_node *node);
int		free_list(t_list *list, t_node *node);

#endif
