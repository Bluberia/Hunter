/*
** EPITECH PROJECT, 2017
** renderwindow
** File description:
** renderwindow
*/

#include "proto.h"

void set_pos_mir(hunter_t *hunter, sfRenderWindow* window)
{
	sfVector2f position;
	sfVector2f origin;

	position.x = (float)sfMouse_getPosition((sfWindow *)window).x;
	position.y = (float)sfMouse_getPosition((sfWindow *)window).y;
	sfSprite_setPosition(hunter->objects[2].sprite, position);
	origin.x = 64;
	origin.y = 64;
	sfSprite_setOrigin(hunter->objects[2].sprite, origin);
}

void set_pos_heart(hunter_t *hunter)
{
	sfVector2f position;

	position.x = 1050;
	position.y = 700;
	sfSprite_setPosition(hunter->objects[1].sprite, position);
}

void set_pos_exit(hunter_t *hunter)
{
	sfVector2f position;

	position.x = 0;
	position.y = WIN_HEIGHT - 55;
	sfSprite_setPosition(hunter->objects[5].sprite, position);
}

void draw_all(sfRenderWindow* window, hunter_t *hunter)
{
	sfRenderWindow_drawSprite(window, hunter->objects[0].sprite, NULL);
	sfRenderWindow_drawSprite(window, hunter->objects[3].sprite, NULL);
	sfRenderWindow_drawSprite(window, hunter->objects[2].sprite, NULL);
	sfRenderWindow_drawSprite(window, hunter->objects[5].sprite, NULL);
	sfRenderWindow_drawSprite(window, hunter->objects[1].sprite, NULL);
	sfRenderWindow_drawText(window, hunter->text[1].text, NULL);
	sfRenderWindow_drawText(window, hunter->text[2].text, NULL);
	sfRenderWindow_drawText(window, hunter->text[5].text, NULL);
	sfRenderWindow_drawText(window, hunter->text[3].text, NULL);
	sfRenderWindow_drawText(window, hunter->text[4].text, NULL);
	sfRenderWindow_drawText(window, hunter->text[6].text, NULL);
}

void display_game(sfRenderWindow* window, hunter_t *hunter)
{
	set_pos_mir(hunter, window);
	set_pos_heart(hunter);
	set_pos_exit(hunter);
	sfSprite_setTextureRect(hunter->objects[3].sprite, \
hunter->objects[3].rect);
	sfSprite_setTextureRect(hunter->objects[1].sprite, \
hunter->objects[0].rect);
	sfText_setString(hunter->text[3].text, \
int_to_string(hunter->text[3].data));
	sfText_setString(hunter->text[4].text, \
int_to_string(hunter->text[4].data));
	sfText_setString(hunter->text[6].text, \
int_to_string(hunter->text[6].data));
	draw_all(window, hunter);
	sfRenderWindow_setMouseCursorVisible(window, sfFalse);
}
