/*
** EPITECH PROJECT, 2018
** my hunter
** File description:
** launch game
*/

#include "proto.h"

void analyse_shoot(hunter_t *hunter, sfVector2f *move)
{
	if (hunter->shoot == 0 && hunter->check == true) {
		manage_move(hunter, move);
		hunter->check = false;
	}
}

int my_hunter(sfRenderWindow* window, hunter_t *hunter)
{
	sfEvent event;
	sfClock *clock = sfClock_create();
	sfVector2f move;

	if (clock == NULL)
		return (ERROR);
	init_move(&move);
	sfMusic_setLoop(hunter->music[1], sfTrue);
	sfMusic_play(hunter->music[1]);
	while (sfRenderWindow_isOpen(window)) {
		sfRenderWindow_clear(window, sfBlack);
		analyse_events(window, &event, hunter);
		analyse_shoot(hunter, &move);
		check_position(hunter, &move);
		manage_time(clock, hunter, move);
		display_game(window, hunter);
		sfRenderWindow_display(window);
	}
	return (OK);
}
