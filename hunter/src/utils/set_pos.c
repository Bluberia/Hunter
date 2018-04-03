/*
** EPITECH PROJECT, 2017
** my hunter
** File description:
** set a random pos
*/

#include <stdlib.h>
#include "proto.h"

int rand_interval(int a, int b)
{
	return (rand() % (b - a) + a);
}

void set_pos(hunter_t *hunter)
{
	sfVector2f position;

	position.x = -150;
	position.y = rand_interval(0, 550);
	sfSprite_setPosition(hunter->objects[3].sprite, position);
}
