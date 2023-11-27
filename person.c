#include "person.h"

#include <memory.h>
#include <string.h>

int person_init(struct person *self, const char *name, const uint8_t age) {
    memset(self, 0, sizeof(*self));
    strncpy(self->name, name, 32);
    self->name[32] = 0;  // Ensure null-termination.
    self->age      = age;
    return 0;
}

int person_deinit(struct person *self) {
    return 0;
}