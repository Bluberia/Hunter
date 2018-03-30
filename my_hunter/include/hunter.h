/*
** EPITECH PROJECT, 2018
** my hunter
** File description:
** struct for my hunter
*/

#include <stdbool.h>
#include "proto.h"

#ifndef __HUNTER_H_
#define __HUNTER_H_

typedef struct s_data
{
	sfIntRect rect;
	sfTexture* texture;
	sfSprite* sprite;
} data_t;

typedef struct s_text_game
{
	sfFont* font;
	sfText* text;
	sfVector2f position;
	sfVector2f origin;
	int data;
} text_game_t;

typedef struct s_hunter
{
	sfMusic** music;
	text_game_t *text;
	data_t *objects;
	int shoot;
	bool check;
} hunter_t;

#endif
