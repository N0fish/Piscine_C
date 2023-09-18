#ifndef FT_STOCK_STR_H
# define FT_STOCK_STR_H

# include <unistd.h>
# include <stdlib.h>

// void	ft_show_tab(struct s_stock_str *par);
struct s_stock_str *ft_strs_to_tab(int ac, char **av);

typedef struct s_stock_str
{
int size;
char *str;
char *copy;
} t_stock_str;

#endif