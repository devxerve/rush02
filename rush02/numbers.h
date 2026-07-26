#ifndef NUMBERS_H
# define NUMBERS_H

# include <fcntl.h>
# include <stdlib.h>
# include <unistd.h>

typedef struct s_dict
{
	char	*key;
	char	*value;
}			t_dict;

int			ft_strcmp(char *s1, char *s2);

int			ft_len(char *str);

void		*ft_solve_number(char *num_str, t_dict *dict, int total_elements);

void		ft_parse_dict(s_dict *t_dict, char* dict_name);

void		ft_process_number(char *block, int scle, t_dict dict, int elements);

void		ft_print_scale(int scale, t_dict *dict, int total_elements);

char		*ft_search_dict(t_dict *dict, int total_elements, char *key);

void		ft_control_spaces(int reset);

void		ft_free_memory(t_dict *dict, int total_elements);

int			ft_validate_number(char *str);

size_t		ft_count_dict_bytes(char *dict_path);

char		*ft_store_dict(char *dict_path, size_t size);
// TODO: Definir aqui la funcion

t_dict		*ft_parse_dict(char *raw_buffer, int *total_elements);
// TODO: Definir aqui la funcion

#endif
