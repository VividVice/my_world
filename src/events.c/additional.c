/*
** EPITECH PROJECT, 2022
** my_world
** File description:
** event_menu
*/

#include "../../include/my.h"

int ver_menu_bis(window_t *w)
{
    int k = 0;

    if ((*w).event.type == sfEvtMouseButtonPressed)
        k += 1;
    if ((*w).event.mouseButton.button == sfMouseLeft)
        k += 1;
    if ((*w).event.mouseButton.x >= 763)
        k += 1;
    if ((*w).event.mouseButton.x <= 795)
        k += 1;
    if ((*w).event.mouseButton.y >= 81)
        k += 1;
    if ((*w).event.mouseButton.y <= 113)
        k += 1;
    if ((*w).menu == 1)
        k += 1;
    return k;
}

int ver_help(window_t *w)
{
    int k = 0;

    if ((*w).event.type == sfEvtMouseButtonPressed)
        k += 1;
    if ((*w).event.mouseButton.button == sfMouseLeft)
        k += 1;
    if ((*w).event.mouseButton.x >= 763)
        k += 1;
    if ((*w).event.mouseButton.x <= 795)
        k += 1;
    if ((*w).event.mouseButton.y >= 118)
        k += 1;
    if ((*w).event.mouseButton.y <= 150)
        k += 1;
    if ((*w).menu == 1)
        k += 1;
    return k;
}

int ver_op(window_t *w)
{
    int k = 0;

    if ((*w).event.type == sfEvtMouseButtonPressed)
        k += 1;
    if ((*w).event.mouseButton.button == sfMouseLeft)
        k += 1;
    if ((*w).event.mouseButton.x >= 763)
        k += 1;
    if ((*w).event.mouseButton.x <= 795)
        k += 1;
    if ((*w).event.mouseButton.y >= 155)
        k += 1;
    if ((*w).event.mouseButton.y <= 187)
        k += 1;
    if((*w).menu == 1)
        k += 1;
    return k;
}

int ver_key(window_t *w)
{
    int k = 0;

    if ((*w).event.type == sfEvtKeyPressed)
        k += 1;
    if ((*w).event.key.code == sfKeyP)
        k += 1;
    if ((*w).options == 0)
        k += 1;
    return k;
}

int ver_vol(window_t *w)
{
    int k = 0;

    if ((*w).event.type == sfEvtMouseButtonPressed)
        k += 1;
    if ((*w).event.mouseButton.button == sfMouseLeft)
        k += 1;
    if ((*w).event.mouseButton.x >= 294)
        k += 1;
    if ((*w).event.mouseButton.x <= 325)
        k += 1;
    if ((*w).event.mouseButton.y >= 239)
        k += 1;
    if ((*w).event.mouseButton.y <= 270)
        k += 1;
    return k;
}

