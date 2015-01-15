#ifndef __GLOBAL_HH__
#define __GLOBAL_HH__

#include <cstdint>
#include <iostream>

typedef uint64_t Addr;
typedef uint64_t Tick;

typedef enum : uint8_t {
    OpRead,
    OpWrite,
    OpUpdate,
} Operation;

struct Request {
    Operation op;
    uint64_t id;
    Addr address;
};

inline void cacheDesignError(std::string string){
    std::cerr<<"Cache Design Error:" << string <<std::endl;
}

#endif
