/*
** EPITECH PROJECT, 2017
** my hunter
** File description:
** fillind all text of the structure
*/

#include <stdlib.h>
#include "proto.h"

int fill_score(hunter_t *hunter)
{
	hunter->text[1].font = sfFont_createFromFile("ressources/arial.ttf");
	hunter->text[1].text = sfText_create();
	if (hunter->text[1].font == NULL || hunter->text[1].text == NULL)
		return (ERROR);
	hunter->text[1].position.x = (WIN_WIDTH / 2) + 50;
	hunter->text[1].position.y = WIN_HEIGHT - 50;
	sfText_setString(hunter->text[1].text, "SCORE :");
	sfText_setFont(hunter->text[1].text, hunter->text[1].font);
	sfText_setCharacterSize(hunter->text[1].text, 30);
	sfText_setPosition(hunter->text[1].text, hunter->text[1].position);
	return (OK);
}

int fill_int_score(hunter_t *hunter)
{
	hunter->text[3].font = sfFont_createFromFile("ressources/arial.ttf");
	hunter->text[3].text = sfText_create();
	if (hunter->text[3].font == NULL || hunter->text[3].font == NULL)
		return (ERROR);
	hunter->text[3].position.x = (WIN_WIDTH / 2) + 180;
	hunter->text[3].position.y = WIN_HEIGHT - 50;
	hunter->text[3].data = 0;
	sfText_setFont(hunter->text[3].text, hunter->text[3].font);
	sfText_setCharacterSize(hunter->text[3].text, 30);
	sfText_setPosition(hunter->text[3].text, hunter->text[3].position);
	return (OK);
}

int fill_highscore(hunter_t *hunter)
{
	hunter->text[2].font = sfFont_createFromFile("ressources/arial.ttf");
	hunter->text[2].text = sfText_create();
	if (hunter->text[2].font == NULL || hunter->text[2].text == NULL)
		return (ERROR);
	hunter->text[2].position.x = WIN_WIDTH / 4;
	hunter->text[2].position.y = WIN_HEIGHT - 50;
	sfText_setString(hunter->text[2].text, "HIGHSCORE :");
	sfText_setFont(hunter->text[2].text, hunter->text[2].font);
	sfText_setCharacterSize(hunter->text[2].text, 30);
	sfText_setPosition(hunter->text[2].text, hunter->text[2].position);
	return (OK);
}

int fill_int_highscore(hunter_t *hunter)
{
	hunter->text[4].font = sfFont_createFromFile("ressources/\
arial.ttf");
	hunter->text[4].text = sfText_create();
	if (hunter->text[4].font == NULL || \
hunter->text[4].font == NULL)
		return (ERROR);
	hunter->text[4].position.x = (WIN_WIDTH / 4) + 200;
	hunter->text[4].position.y = WIN_HEIGHT - 50;
	hunter->text[4].data = 0;
	sfText_setFont(hunter->text[4].text, hunter->text[4].font);
	sfText_setCharacterSize(hunter->text[4].text, 30);
	sfText_setPosition(hunter->text[4].text, \
hunter->text[4].position);
	return (OK);
}

int fill_text(hunter_t *hunter)
{
	hunter->text = malloc(sizeof(text_game_t) * 7);
	if (hunter->text == NULL)
		return (ERROR);
	if (fill_end(hunter) == ERROR)
		return (ERROR);
	if (fill_score(hunter) == ERROR)
		return (ERROR);
	if (fill_highscore(hunter) == ERROR)
		return (ERROR);
	if (fill_int_score(hunter) == ERROR)
		return (ERROR);
	if (fill_int_highscore(hunter) == ERROR)
		return (ERROR);
	if (fill_level(hunter) == ERROR)
		return (ERROR);
	if (fill_int_level(hunter) == ERROR)
		return (ERROR);
	return (OK);
}
