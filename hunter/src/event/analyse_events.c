/*
** EPITECH PROJECT, 2017
** my hunter
** File description:
** analyse event
*/

#include <stdio.h>
#include "proto.h"

void analyse_value_shoot(hunter_t *hunter)
{
	if (hunter->shoot == 2) {
		hunter->text[6].data += 1;
		hunter->shoot = 0;
		hunter->check = true;
	} else
		hunter->shoot += 1;
}

int check_click_exit(sfVector2i tmp, hunter_t *hunter, sfRenderWindow* window)
{
	sfVector2f pos = sfSprite_getPosition(hunter->objects[5].sprite);

	if ((pos.x <= tmp.x && tmp.x <= pos.x + 50) && \
(pos.y <= tmp.y && tmp.y <= pos.y + 50)) {
		sfRenderWindow_close(window);
		return (1);
	}
	return (OK);
}

int manage_mouse_click(sfVector2i tmp, hunter_t *hunter)
{
	sfVector2f scale = sfSprite_getScale(hunter->objects[3].sprite);
	sfVector2f pos = sfSprite_getPosition(hunter->objects[3].sprite);

	if (scale.x == 1 && (pos.x <= tmp.x && tmp.x <= \
pos.x + SIZE_DUCK) && (pos.y <= tmp.y && tmp.y <= pos.y + SIZE_DUCK)) {
		hunter->text[3].data += 10;
		set_pos(hunter);
		return (1);
	} else if (scale.x == -1 && (pos.x - SIZE_DUCK <= tmp.x && \
tmp.x <= pos.x) && (pos.y <= tmp.y && tmp.y <= pos.y + SIZE_DUCK)) {
		hunter->text[3].data += 10;
		set_pos(hunter);
		return (1);
	} else
		move_hearts(200, 1200, hunter);
	return (OK);
}

void analyse_mouse(sfRenderWindow* window, hunter_t *hunter)
{
	sfVector2i mouse = sfMouse_getPosition(NULL);
	sfVector2i tmp = sfRenderWindow_getPosition(window);

	if (sfMouse_isButtonPressed(sfMouseLeft) == sfTrue) {
		tmp.x = mouse.x - tmp.x;
		tmp.y = (mouse.y - tmp.y) - 30;
		sfMusic_play(hunter->music[0]);
		if (check_click_exit(tmp, hunter, window) != 1 && \
manage_mouse_click(tmp, hunter) == 1) {
			analyse_value_shoot(hunter);
		}
	}
}

void analyse_events(sfRenderWindow *window, sfEvent *event, hunter_t *hunter)
{
	while (sfRenderWindow_pollEvent(window, event)) {
		if (event->type == sfEvtClosed)
			sfRenderWindow_close(window);
		if (hunter->objects[0].rect.left == 1200 && \
event->type == sfEvtMouseButtonReleased)
			manage_end(window, hunter);
		if (event->type != sfEvtMouseMoved)
			analyse_mouse(window, hunter);
	}
}
