#ifndef IO_H
#define IO_H

#include <lime/api.h>

typedef struct {
    char *name;
    LimeFunction function;
} IOFunctionEntry;

LimeValue io_read(LimeStack stack);

LimeValue io_write(LimeStack stack);

#endif
