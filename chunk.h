#ifndef liminal_chunk_h
#define liminal_chunk_h

#include "common.h"

// Controls what kind of instruction 
typedef enum {
    OP_RETURN,
} OpCode;

typedef struct { 
    int count;
    int capacity;
    uint8_t* code;
} Chunk;

void initChunk(Chunk* chunk);

#endif