/*
** EPITECH PROJECT, 2017
** my hunter
** File description:
** change scale
*/

#include "proto.h"

void change_scale_neg(hunter_t *hunter)
{
	sfVector2f scale;

	scale.x = -1;
	scale.y = 1;
	sfSprite_setScale(hunter->objects[3].sprite, scale);
}

void change_scale_pos(hunter_t *hunter)
{
	sfVector2f scale;

	scale.x = 1;
	scale.y = 1;
	sfSprite_setScale(hunter->objects[3].sprite, scale);
}
