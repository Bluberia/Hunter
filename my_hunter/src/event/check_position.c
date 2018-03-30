/*
** EPITECH PROJECT, 2017
** my hunter
** File description:
** check position of duck
*/

#include "proto.h"

void check_position(hunter_t *hunter, sfVector2f *move)
{
	sfVector2f position = sfSprite_getPosition(hunter->objects[3].sprite);

	if (position.x > WIN_WIDTH) {
		change_scale_neg(hunter);
		move->x *= (-1);
	} else if (position.x <= 0 && move->x < 0) {
		change_scale_pos(hunter);
		move->x *= (-1);
	} else if (position.x <= 0 && move->x > 0)
		change_scale_pos(hunter);
}
