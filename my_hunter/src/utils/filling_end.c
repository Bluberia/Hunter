/*
** EPITECH PROJECT, 2017
** my hunter
** File description:
** fillind all text of the structure
*/

#include <stdlib.h>
#include "proto.h"

int fill_end(hunter_t *hunter)
{
	hunter->text[0].font = sfFont_createFromFile("ressources/arial.ttf");
	hunter->text[0].text = sfText_create();
	if (hunter->text[0].font == NULL || hunter->text[0].text == NULL)
		return (ERROR);
	hunter->text[0].position.x = (WIN_WIDTH / 2) - 225;
	hunter->text[0].position.y = (WIN_HEIGHT / 4) - 100;
	sfText_setString(hunter->text[0].text, "GAME OVER");
	sfText_setColor(hunter->text[0].text, sfBlack);
	sfText_setStyle(hunter->text[0].text, sfTextBold);
	sfText_setFont(hunter->text[0].text, hunter->text[0].font);
	sfText_setCharacterSize(hunter->text[0].text, 75);
	sfText_setPosition(hunter->text[0].text, hunter->text[0].position);
	return (OK);
}

int fill_level(hunter_t *hunter)
{
	hunter->text[5].font = sfFont_createFromFile("ressources/arial.ttf");
	hunter->text[5].text = sfText_create();
	if (hunter->text[5].font == NULL || hunter->text[5].text == NULL)
		return (ERROR);
	hunter->text[5].position.x = 75;
	hunter->text[5].position.y = WIN_HEIGHT - 50;
	sfText_setString(hunter->text[5].text, "LEVEL :");
	sfText_setFont(hunter->text[5].text, hunter->text[5].font);
	sfText_setCharacterSize(hunter->text[5].text, 30);
	sfText_setPosition(hunter->text[5].text, hunter->text[5].position);
	return (OK);
}

int fill_int_level(hunter_t *hunter)
{
	hunter->text[6].font = sfFont_createFromFile("ressources/arial.ttf");
	hunter->text[6].text = sfText_create();
	if (hunter->text[6].font == NULL || hunter->text[6].font == NULL)
		return (ERROR);
	hunter->text[6].position.x = 180;
	hunter->text[6].position.y = WIN_HEIGHT - 50;
	hunter->text[6].data = 1;
	sfText_setFont(hunter->text[6].text, hunter->text[6].font);
	sfText_setCharacterSize(hunter->text[6].text, 30);
	sfText_setPosition(hunter->text[6].text, hunter->text[6].position);
	return (OK);
}
