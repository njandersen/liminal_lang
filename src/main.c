#include "common.h"
#include "chunk.h"
#include "debug.h"


int main(int argc, const char* argv[]) {
    Chunk chunk;
    initChunk(&chunk);

    int constant = addConstant(&chunk, 1.2);
    writeChunk(&chunk, OP_CONSTANT, 111);
    writeChunk(&chunk, constant, 111);

    writeChunk(&chunk, OP_RETURN, 111);
    dissassembleChunk(&chunk, "test chunk");
    freeChunk(&chunk);
    return 0;
}