/*
** EPITECH PROJECT, 2022
** my_world
** File description:
** event_menu
*/

#include "../../include/my.h"

int check_imp_y(window_t *w)
{
    int k = 0;

    if ((*w).menu_ev.type == sfEvtMouseButtonPressed)
        k += 1;
    if ((*w).menu_ev.mouseButton.button == sfMouseLeft)
        k += 1;
    if ((*w).menu_ev.mouseButton.x >= 300)
        k += 1;
    if ((*w).menu_ev.mouseButton.x <= 500)
        k += 1;
    if ((*w).menu_ev.mouseButton.y >= 210)
        k += 1;
    if ((*w).menu_ev.mouseButton.y <= 260)
        k += 1;
    return k;
}

int check_back_b(window_t *w)
{
    int k = 0;

    if ((*w).menu_ev.type == sfEvtMouseButtonPressed)
        k += 1;
    if ((*w).menu_ev.mouseButton.button == sfMouseLeft)
        k += 1;
    if ((*w).menu_ev.mouseButton.x >= 300)
        k += 1;
    if ((*w).menu_ev.mouseButton.x <= 500)
        k += 1;
    if ((*w).menu_ev.mouseButton.y >= 350)
        k += 1;
    if ((*w).menu_ev.mouseButton.y <= 400)
        k += 1;
    return k;
}

int ver_start(window_t *w)
{
    int k = 0;

    if ((*w).menu_ev.type == sfEvtMouseButtonPressed)
        k += 1;
    if ((*w).menu_ev.mouseButton.button == sfMouseLeft)
        k += 1;
    if ((*w).menu_ev.mouseButton.x >= 300)
        k += 1;
    if ((*w).menu_ev.mouseButton.x <= 500)
        k += 1;
    if ((*w).menu_ev.mouseButton.y >= 270)
        k += 1;
    if ((*w).menu_ev.mouseButton.y <= 310)
        k += 1;
    return k;
}

int verify_ex(window_t *w)
{
    int k = 0;

    if ((*w).menu_ev.type == sfEvtMouseButtonPressed)
        k += 1;
    if ((*w).menu_ev.mouseButton.button == sfMouseLeft)
        k += 1;
    if ((*w).menu_ev.mouseButton.x >= 300)
        k += 1;
    if ((*w).menu_ev.mouseButton.x <= 500)
        k += 1;
    if ((*w).menu_ev.mouseButton.y >= 350)
        k += 1;
    if ((*w).menu_ev.mouseButton.y <= 400)
        k += 1;
    return k;
}

int check_cr_map(window_t *w)
{
    int k = 0;

    if ((*w).menu_ev.type == sfEvtMouseButtonPressed)
        k += 1;
    if ((*w).menu_ev.mouseButton.button == sfMouseLeft)
        k += 1;
    if ((*w).menu_ev.mouseButton.x >= 300)
        k += 1;
    if ((*w).menu_ev.mouseButton.x <= 500)
        k += 1;
    if ((*w).menu_ev.mouseButton.y >= 150)
        k += 1;
    if ((*w).menu_ev.mouseButton.y <= 210)
        k += 1;
    return k;
}


