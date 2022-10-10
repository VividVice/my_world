/*
** EPITECH PROJECT, 2022
** my_world
** File description:
** event_menu
*/

#include "../../include/my.h"

int check_imput(window_t *w)
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

int check_menu_exit(window_t *w)
{
    int k = 0;

    if ((*w).menu_ev.type == sfEvtMouseButtonPressed)
        k += 1;
    if ((*w).menu_ev.mouseButton.button == sfMouseLeft)
        k += 1;
    if ((*w).exit_b == 0)
        k += 1;
    return k;
}

int check_menu_back(window_t *w)
{
    int k = 0;

    if ((*w).menu_ev.type == sfEvtMouseButtonPressed)
        k += 1;
    if ((*w).menu_ev.mouseButton.button == sfMouseLeft)
        k += 1;
    if ((*w).back_b == 0)
        k += 1;
    return k;
}

int check_menu_wait(window_t *w)
{
    int k = 0;

    if ((*w).menu_ev.type == sfEvtMouseButtonPressed)
        k += 1;
    if ((*w).menu_ev.mouseButton.button == sfMouseLeft)
        k += 1;
    if ((*w).text_wait_y == 0)
        k += 1;
    return k;
}

int check_menu_start(window_t *w)
{
    int k = 0;

    if ((*w).menu_ev.type == sfEvtMouseButtonPressed)
        k += 1;
    if ((*w).menu_ev.mouseButton.button == sfMouseLeft)
        k += 1;
    if ((*w).start_b == 0)
        k += 1;
    return k;
}