/*
** EPITECH PROJECT, 2018
** my hunter
** File description:
** reset all the structure for restart
*/

#include "proto.h"

void reset_struct(hunter_t *hunter)
{
	hunter->objects[0].rect.top = 0;
	hunter->objects[0].rect.left = 0;
	hunter->objects[0].rect.width = 200;
	hunter->objects[0].rect.height = 63;
	hunter->objects[3].rect.top = 0;
	hunter->objects[3].rect.left = 0;
	hunter->objects[3].rect.width = 110;
	hunter->objects[3].rect.height = 110;
	set_pos(hunter);
	hunter->shoot = 0;
	hunter->check = false;
	hunter->text[3].data = 0;
	hunter->text[6].data = 1;
}
