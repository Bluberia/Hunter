/*
** EPITECH PROJECT, 2017
** my hunter
** File description:
** move rect
*/

#include "proto.h"

void move_rect(int offset, int max_value, hunter_t *hunter)
{
	if (hunter->objects[3].rect.left < max_value)
		hunter->objects[3].rect.left += offset;
	else
		hunter->objects[3].rect.left = 0;
}
