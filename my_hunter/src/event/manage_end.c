/*
** EPITECH PROJECT, 2017
** my hunter
** File description:
** manage end of the game
*/

#include "proto.h"

void set_pos_dog(hunter_t *hunter)
{
	sfVector2f position;

	position.x = 600;
	position.y = 450;
	sfSprite_setPosition(hunter->objects[4].sprite, position);
}

void manage_end(sfRenderWindow* window, hunter_t *hunter)
{
	if (hunter->text[3].data > hunter->text[4].data)
		hunter->text[4].data = hunter->text[3].data;
	sfRenderWindow_clear(window, sfBlack);
	sfMusic_stop(hunter->music[1]);
	sfMusic_play(hunter->music[2]);
	set_pos_dog(hunter);
	sfSprite_setTextureRect(hunter->objects[3].sprite, \
hunter->objects[3].rect);
	sfRenderWindow_drawSprite(window, hunter->objects[0].sprite, NULL);
	sfRenderWindow_drawSprite(window, hunter->objects[4].sprite, NULL);
	sfRenderWindow_drawText(window, hunter->text[0].text, NULL);
	sfRenderWindow_setMouseCursorVisible(window, sfFalse);
	sfRenderWindow_display(window);
	sfSleep((sfTime){1500000});
	sfMusic_stop(hunter->music[2]);
	reset_struct(hunter);
	my_hunter(window, hunter);
}
