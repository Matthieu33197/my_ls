/*
** EPITECH PROJECT, 2020
** my_l
** File description:
** my_ls
*/

#include <stdio.h>
#include <sys/types.h>
#include <dirent.h>
#include "lib/my/my.h"

void normal_ls(void)
{
    struct dirent *read;
    DIR *fs;
    fs = opendir("./");
    while ((read = readdir(fs)) != 0) {
        if (read->d_name[0] != '.') {
            my_putstr(read->d_name);
            my_putchar('\n');
        }
    }
    closedir(fs);
}

int main(int ac, char **av)
{
    if (ac == 1) {
        normal_ls();
        return (0);
    } else if (ac == 2) {
        if (av[1][0] == '-')
            return (0);
    }
    else
        return (0);
}
