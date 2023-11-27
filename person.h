#pragma once

#include <stdint.h>

struct person {
    char name[32];
    uint8_t age;
};

int person_init(struct person *self, const char *name, const uint8_t age);
int person_deinit(struct person *self);