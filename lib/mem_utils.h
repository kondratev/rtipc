#pragma once

#include <stddef.h>
#include <stdint.h>

static inline size_t mem_align(size_t size, size_t alignment)
{
  return (size + alignment - 1) & ~(alignment - 1);
}

static inline void* mem_offset(void *p, size_t offset)
{
  return (void*)((uintptr_t)p + offset);
}

size_t cacheline_size(void);

static inline size_t cacheline_aligned(size_t size)
{
  return mem_align(size, cacheline_size());
}
