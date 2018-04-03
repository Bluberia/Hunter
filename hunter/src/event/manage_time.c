/*
** EPITECH PROJECT, 2017
** my hunter
** File description:
** manage time for the deplacement of the duck
*/

#include "proto.h"

void manage_time(sfClock *clock, hunter_t *hunter, sfVector2f move)
{
	sfTime time;
	float seconds;
	sfVector2f pos = sfSprite_getPosition(hunter->objects[3].sprite);

	pos.x += move.x;
	pos.y += move.y;
	time = sfClock_getElapsedTime(clock);
	seconds = time.microseconds / 300000.0;
	sfSprite_setPosition(hunter->objects[3].sprite, pos);
	if (seconds > 1.0) {
		move_rect(110, 220, hunter);
		sfClock_restart(clock);
	}
}
