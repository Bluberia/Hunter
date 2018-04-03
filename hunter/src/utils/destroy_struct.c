/*
** EPITECH PROJECT, 2018
** my hunter
** File description:
** destroy the structure
*/

#include "proto.h"

void destroy_sprite_and_texture(hunter_t *hunter)
{
	for (int i = 0; i < 6; i++) {
		sfSprite_destroy(hunter->objects[i].sprite);
		sfTexture_destroy(hunter->objects[i].texture);
	}
}

void destroy_text(hunter_t *hunter)
{
	for (int i = 0; i < 7; i++) {
		sfText_destroy(hunter->text[i].text);
		sfFont_destroy(hunter->text[i].font);
	}
}

void destroy_struct(hunter_t *hunter)
{
	for (int i = 0; i < 3; i++) {
		sfMusic_destroy(hunter->music[i]);
	}
	destroy_text(hunter);
	destroy_sprite_and_texture(hunter);
	hunter->shoot = 0;
}
