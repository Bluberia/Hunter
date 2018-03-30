/*
** EPITECH PROJECT, 2017
** my hunter
** File description:
** manage_move
*/

#include "proto.h"

void manage_move_two(sfVector2f scale, sfVector2f *move)
{
	if (scale.x == -1 && move->x > 0)
		move->x -= (-3);
	else if (scale.x == -1 && move->x < 0)
		move->x -= (-3);
}

void manage_move(hunter_t *hunter, sfVector2f *move)
{
	sfVector2f scale = sfSprite_getScale(hunter->objects[3].sprite);

	if (scale.x == 1 && move->x > 0)
		move->x += 3;
	else if (scale.x == 1 && move->x < 0)
		move->x += 3;
	manage_move_two(scale, move);
}
