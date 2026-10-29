#include "picture.h"
#include <stdio.h>
#include <stddef.h>
#include <ctype.h>

void print_team(const char name[]) {
    if (name != NULL) {
        printf("%s", name);
    }
}

int team_len(const char name[]) {
    if (name == NULL) {
        return 0;
    }
    int len = 0;
    while (name[len] != '\0') {
        len++;
    }
    return len;
}

void team_copy(char dest[], int dest_size, const char src[]) {
    if (dest == NULL || dest_size <= 0) {
       return;
    } else if (src == NULL && dest_size > 0) {
        dest[0] = '\0';
        return;
    }

    int index = 0;
    while (index < dest_size - 1 && src[index] != '\0') {
        dest[index] = src[index];
        index++;
    }
    dest[index] = '\0';
}

int team_same(const char a[], const char b[]) {
    if (a == NULL || b == NULL) {
        return 0;
    }
    int index = 0;
    while (1) {
        if (a[index] != b[index]) {
            return 0;
        }
        if (a[index] == '\0') {
            return 1;
        }
        index++;
    }
}

void shout(char name[]) {
    if (name == NULL) {
        return;
    }
    
    for (int i = 0; name[i] != '\0'; i++) {
        if (islower(name[i])) {
            char upper = toupper(name[i]);
            name[i] = upper;
        }
    }
}