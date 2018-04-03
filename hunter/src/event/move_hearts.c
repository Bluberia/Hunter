/*
** EPITECH PROJECT, 2017
** my hunter
** File description:
** move hearts
*/

#include "proto.h"

void move_hearts(int offset, int max_value, hunter_t *hunter)
{
	if (hunter->objects[0].rect.left < max_value)
		hunter->objects[0].rect.left += offset;
}
