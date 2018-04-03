/*
** EPITECH PROJECT, 2017
** proto
** File description:
** all proto of program
*/

#ifndef __PROTO_H_
#define __PROTO_H_

extern const int ERROR;
extern const int OK;
extern const int WIN_HEIGHT;
extern const int WIN_WIDTH;
extern const int SIZE_DUCK;

#include <SFML/Audio.h>
#include <SFML/Graphics.h>
#include "hunter.h"

/* GAME */

int prepare_gameplay(void);
int my_hunter(sfRenderWindow*, hunter_t *);

/* EVENT */

void analyse_events(sfRenderWindow*, sfEvent *, hunter_t *);
void change_scale_neg(hunter_t *);
void change_scale_pos(hunter_t *);
void check_position(hunter_t *, sfVector2f *);
void init_move(sfVector2f *);
void manage_move(hunter_t *, sfVector2f *);
void manage_time(sfClock *, hunter_t *, sfVector2f);
void move_rect(int, int, hunter_t *);
void move_hearts(int, int, hunter_t *);
void manage_end(sfRenderWindow*, hunter_t *);

/* UTILS */

int check_env(char **);
void display_man_hunter(void);
int check_create_window(sfRenderWindow*);
sfRenderWindow* create_window(void);
hunter_t *filling_struct(void);
void set_pos(hunter_t *);
int check_struct(hunter_t *);
void destroy_struct(hunter_t *);
void display_game(sfRenderWindow*, hunter_t *);
int fill_text(hunter_t *);
void set_pos_mir(hunter_t *, sfRenderWindow*);
char *int_to_string(int);
int fill_end(hunter_t *);
int fill_level(hunter_t *);
int fill_int_level(hunter_t *);
void reset_struct(hunter_t *);

#endif
