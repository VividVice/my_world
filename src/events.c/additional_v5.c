/*
** EPITECH PROJECT, 2022
** my_world
** File description:
** event_menu
*/

#include "../../include/my.h"

int check_size_of_pencil(window_t *w)
{
    int k = 0;

    if ((*w).event.type == sfEvtMouseButtonPressed)
        k += 1;
    if ((*w).event.mouseButton.button == sfMouseLeft)
        k += 1;
    if((*w).pencil == 1)
        k += 1;
    if((*w).options == 0)
        k += 1;
    if((*w).menu == 0)
        k += 1;
    return k;
}

int check_pen(window_t *w)
{
    int k = 0;

    if ((*w).event.type == sfEvtMouseButtonPressed)
        k += 1;
    if ((*w).event.mouseButton.button == sfMouseRight)
        k += 1;
    if((*w).pencil == 1)
        k += 1;
    if((*w).options == 0)
        k += 1;
    if((*w).menu == 0)
        k += 1;
    return k;
}

int check_left_br(window_t *w)
{
    int k = 0;

    if ((*w).event.type == sfEvtMouseButtonPressed)
        k += 1;
    if ((*w).event.mouseButton.button == sfMouseLeft)
        k += 1;
    if((*w).brush == 1)
        k += 1;
    if((*w).options == 0)
        k += 1;
    if((*w).menu == 0)
        k += 1;
    return k;
}

int check_right_br(window_t *w)
{
    int k = 0;

    if ((*w).event.type == sfEvtMouseButtonPressed)
        k += 1;
    if ((*w).event.mouseButton.button == sfMouseRight)
        k += 1;
    if((*w).brush == 1)
        k += 1;
    if((*w).options == 0)
        k += 1;
    if((*w).menu == 0)
        k += 1;
    return k;
}

int check_menu_event(window_t *w)
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
    if ((*w).event.mouseButton.y >= 5)
        k += 1;
    if ((*w).event.mouseButton.y <= 37)
        k += 1;
    return k;
}