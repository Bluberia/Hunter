/*
** EPITECH PROJECT, 2018
** my hunter
** File description:
** main
*/

#include <time.h>
#include "my.h"
#include "proto.h"

int main(int ac, char **av, char **env)
{
	if (check_env(env) == ERROR)
		return (ERROR);
	if (ac == 2 && my_strcmp(av[1], "-h") == 0) {
		display_man_hunter();
		return (OK);
	} else if (ac != 1) {
		my_putstr("Do './my_hunter -h' to see how to use my_hunter.\n");
		return (ERROR);
	}
	srand(time(NULL));
	if (prepare_gameplay() == ERROR)
		return (ERROR);
	return (OK);
}
