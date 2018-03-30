/*
** EPITECH PROJECT, 2017
** my hunter
** File description:
** check create of the structure
*/

#include <stdlib.h>
#include "proto.h"

int check_all(hunter_t *hunter)
{
	for (int i = 0; i < 3; i++) {
		if (hunter->music[i] == NULL)
			return (ERROR);
	}
	for (int i = 0; i < 6; i++) {
		if (hunter->objects[i].texture == NULL)
			return (ERROR);
	}
	return (OK);
}

int check_struct(hunter_t *hunter)
{
	if (check_all(hunter) == ERROR)
		return (ERROR);
	return (OK);
}
