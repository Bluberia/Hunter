/*
** EPITECH PROJECT, 2018
** tetris
** File description:
** prepare tetris
*/

#include "proto.h"

int prepare_gameplay(void)
{
	sfRenderWindow* window = create_window();
	hunter_t *hunter = filling_struct();

	if (check_create_window(window) == ERROR || hunter == NULL)
		return (ERROR);
	if (my_hunter(window, hunter) == ERROR) {
		destroy_struct(hunter);
		return (ERROR);
	}
	destroy_struct(hunter);
	sfRenderWindow_destroy(window);
	return (OK);
}
