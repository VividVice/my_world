/*
** EPITECH PROJECT, 2022
** my_world
** File description:
** event_menu
*/

#include "../../include/my.h"

int ver_sound(window_t *w)
{
    int k = 0;

    if ((*w).event.type == sfEvtMouseButtonPressed)
        k += 1;
    if ((*w).event.mouseButton.button == sfMouseLeft)
        k += 1;
    if ((*w).event.mouseButton.x >= 476)
        k += 1;
    if ((*w).event.mouseButton.x <= 507)
        k += 1;
    if ((*w).event.mouseButton.y >= 239)
        k += 1;
    if ((*w).event.mouseButton.y <= 270)
        k += 1;
    return k;
}

int check_bis_help(window_t *w)
{
    int k = 0;

    if ((*w).event.type == sfEvtKeyPressed)
        k += 1;
    if ((*w).event.mouseButton.button == sfMouseLeft)
        k += 1;
    if ((*w).h_up == 1)
        k += 1;
    return k;
}

int check_reset(window_t *w)
{
    int k = 0;

    if ((*w).event.type == sfEvtMouseButtonPressed)
        k += 1;
    if ((*w).event.mouseButton.button == sfMouseLeft)
        k += 1;
    if ((*w).event.mouseButton.x >= 275)
        k += 1;
    if ((*w).event.mouseButton.x <= 525)
        k += 1;
    if ((*w).event.mouseButton.y >= 300)
        k += 1;
    if ((*w).event.mouseButton.y <= 353)
        k += 1;
    return k;
}

int verify_to_menu(window_t *w)
{
    int k = 0;

    if ((*w).event.type == sfEvtMouseButtonPressed)
        k += 1;
    if ((*w).event.mouseButton.button == sfMouseLeft)
        k += 1;
    if ((*w).event.mouseButton.x >= 275)
        k += 1;
    if ((*w).event.mouseButton.x <= 525)
        k += 1;
    if ((*w).event.mouseButton.y >= 357)
        k += 1;
    if ((*w).event.mouseButton.y <= 410)
        k += 1;
    return k;
}

int check_to_close(window_t *w)
{
    int k = 0;

    if ((*w).event.type == sfEvtMouseButtonPressed)
        k += 1;
    if ((*w).event.mouseButton.button == sfMouseLeft)
        k += 1;
    if ((*w).event.mouseButton.x >= 547)
        k += 1;
    if ((*w).event.mouseButton.x <= 579)
        k += 1;
    if ((*w).event.mouseButton.y >= 170)
        k += 1;
    if ((*w).event.mouseButton.y <= 203)
        k += 1;
    if((*w).options == 1)
        k += 1;
    return k;
}