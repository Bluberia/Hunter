/*
** EPITECH PROJECT, 2017
** my hunter
** File description:
** fillind mir, duck and backg
*/

#include <stdlib.h>
#include "proto.h"

void fill_backg(hunter_t *hunter)
{
	hunter->objects[0].texture = sfTexture_createFromFile("ressources/\
background.png", NULL);
	hunter->objects[0].sprite = sfSprite_create();
	sfSprite_setTexture(hunter->objects[0].sprite, \
hunter->objects[0].texture, sfTrue);
	hunter->objects[1].texture = sfTexture_createFromFile("ressources/\
hearts.png", NULL);
	hunter->objects[1].sprite = sfSprite_create();
	sfSprite_setTexture(hunter->objects[1].sprite, \
hunter->objects[1].texture, sfTrue);
	hunter->objects[5].texture = sfTexture_createFromFile("ressources/\
exit.png", NULL);
	hunter->objects[5].sprite = sfSprite_create();
	sfSprite_setTexture(hunter->objects[5].sprite, \
hunter->objects[5].texture, sfTrue);
	hunter->objects[0].rect.top = 0;
	hunter->objects[0].rect.left = 0;
	hunter->objects[0].rect.width = 200;
	hunter->objects[0].rect.height = 63;
}

void fill_duck(hunter_t *hunter)
{
	hunter->objects[3].rect.top = 0;
	hunter->objects[3].rect.left = 0;
	hunter->objects[3].rect.width = 110;
	hunter->objects[3].rect.height = 110;
	hunter->objects[3].texture= sfTexture_createFromFile("ressources/\
spritesheet.png", NULL);
	hunter->objects[3].sprite = sfSprite_create();
	sfSprite_setTexture(hunter->objects[3].sprite, \
hunter->objects[3].texture, sfTrue);
	set_pos(hunter);
	hunter->objects[2].texture = sfTexture_createFromFile("ressources/\
mir.png", NULL);
	hunter->objects[2].sprite = sfSprite_create();
	sfSprite_setTexture(hunter->objects[2].sprite, \
hunter->objects[2].texture, sfTrue);
	hunter->objects[4].texture = sfTexture_createFromFile("ressources/\
dog.png", NULL);
	hunter->objects[4].sprite = sfSprite_create();
	sfSprite_setTexture(hunter->objects[4].sprite, \
hunter->objects[4].texture, sfTrue);
}

hunter_t *filling_struct(void)
{
	hunter_t *hunter = malloc(sizeof(hunter_t));

	if (hunter == NULL)
		return (NULL);
	hunter->music = malloc(sizeof(sfMusic*) * 3);
	hunter->objects = malloc(sizeof(data_t) * 6);
	if (hunter->music == NULL || hunter->objects == NULL)
		return (NULL);
	hunter->music[0] = sfMusic_createFromFile("ressources/tir.ogg");
	hunter->music[1] = sfMusic_createFromFile("ressources/music.ogg");
	hunter->music[2] = sfMusic_createFromFile("ressources/game_over.ogg");
	fill_backg(hunter);
	fill_duck(hunter);
	hunter->shoot = 0;
	hunter->check = false;
	if (fill_text(hunter) == ERROR)
		return (NULL);
	if (check_struct(hunter) == ERROR)
		return (NULL);
	return (hunter);
}
