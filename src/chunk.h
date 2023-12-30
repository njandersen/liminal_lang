#ifndef liminal_chunk_h
#define liminal_chunk_h

#include "common.h"
#include "value.h"

// Controls what kind of instruction 
typedef enum {
    OP_CONSTANT,
    OP_RETURN,
} OpCode;

typedef struct { 
    int count;
    int capacity;
    uint8_t* code;
    ValueArray constants;
} Chunk;

void initChunk(Chunk* chunk);
void writeChunk(Chunk* chunk, uint8_t byte);
void freeChunk(Chunk* chunk);
int addConstant(Chunk* chunk, Value value);

#endif