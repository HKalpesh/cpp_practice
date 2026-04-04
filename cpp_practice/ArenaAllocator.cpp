#include <stddef.h>
#include <stdint.h>

// Note: This allocator is not thread-safe. Concurrent calls to allocate or reset may cause data races.
// If thread safety is required, protect allocate/reset/getUsedMemory with a mutex.
class ArenaAllocator {
private:
    static constexpr size_t ARENA_SIZE = 1024 * 1024; // 1 MB
    uint8_t* arena = nullptr;
    size_t offset = 0;
 /* Limitations: The arena size is fixed at construction (1 MB by default). Allocations beyond this size will fail.
 * Thread-safety: This class is NOT thread-safe. External synchronization is required for concurrent use.
 */
class ArenaAllocator {
private:
    static constexpr size_t ARENA_SIZE = 1024 * 1024; // 1 MB
    uint8_t* arena = nullptr;
    size_t offset = 0;

public:
    // Allocates 'bytes' bytes of memory aligned to 'alignment' bytes.
    // The returned pointer is guaranteed to be aligned to the specified alignment,
    // or nullptr is returned if there is not enough space in the arena.
    void* allocate(size_t bytes, size_t alignment = alignof(std::max_align_t)) {
        arena = new uint8_t[ARENA_SIZE];
    }

    ~ArenaAllocator() {
        delete[] arena;
    }

    void* allocate(size_t bytes) {
        if (offset + bytes > ARENA_SIZE) {
            return nullptr; // Arena full
        }
        
        void* ptr = &arena[offset];
        offset += bytes;
        return ptr;
    }
    
    void reset() {
        offset = 0;
    }
    
    size_t getUsedMemory() const {
        return offset;
    }
};  
    size_t getUsedMemory() const {
        return offset;
    }
};