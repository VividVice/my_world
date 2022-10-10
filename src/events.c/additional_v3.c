/*
** EPITECH PROJECT, 2022
** my_world
** File description:
** event_menu
*/

#include "../../include/my.h"

int check_size_of_brush(window_t *w)
{
    int k = 0;

    if ((*w).event.type == sfEvtMouseButtonPressed)
        k += 1;
    if ((*w).event.mouseButton.button == sfMouseLeft)
        k += 1;
    if ((*w).event.mouseButton.x >= 619)
        k += 1;
    if ((*w).event.mouseButton.x <= 651)
        k += 1;
    if ((*w).event.mouseButton.y >= 81)
        k += 1;
    if ((*w).event.mouseButton.y <= 113)
        k += 1;
    if((*w).brush == 1)
        k += 1;
    if((*w).menu == 1)
        k += 1;
    return k;
}

int verify_for_safe(window_t *w)
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
    if ((*w).event.mouseButton.y >= 192)
        k += 1;
    if ((*w).event.mouseButton.y <= 224)
        k += 1;
    return k;
}

int verify_load(window_t *w)
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
    if ((*w).event.mouseButton.y >= 229)
        k += 1;
    if ((*w).event.mouseButton.y <= 261)
        k += 1;
    return k;
}

int check_snd(window_t *w)
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
    if ((*w).event.mouseButton.y >= 42)
        k += 1;
    if ((*w).event.mouseButton.y <= 74)
        k += 1;
    return k;
}

int check_br(window_t *w)
{
    int k = 0;

    if ((*w).event.type == sfEvtMouseButtonPressed)
        k += 1;
    if ((*w).event.mouseButton.button == sfMouseLeft)
        k += 1;
    if ((*w).event.mouseButton.x >= 726)
        k += 1;
    if ((*w).event.mouseButton.x <= 758)
        k += 1;
    if ((*w).event.mouseButton.y >= 81)
        k += 1;
    if ((*w).event.mouseButton.y <= 113)
        k += 1;
    if((*w).brush == 1)
        k += 1;
    if((*w).menu == 1)
        k += 1;
    return k;
}