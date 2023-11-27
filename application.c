#include "application.h"

#include <stdio.h>

int application_init(struct application *self) {
    return person_init(&self->person, "Aristotle", 62);
}

int application_deinit(struct application *self) {
    return person_deinit(&self->person);
}

int application_run(struct application *self) {
    printf("%s is %u years old.",
           self->person.name,
           self->person.age);
    return 0;
}