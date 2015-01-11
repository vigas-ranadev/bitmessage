#ifndef BITMESSAGE_POW_H
#define BITMESSAGE_POW_H

#define MAX_POOL_SIZE 1024
#define HASH_SIZE 64

int pow(size_t pool_size,
        uint64_t target,
        const uint8_t* initial_hash,
        uint64_t max_nonce,
        uint64_t* nonce);

#endif
