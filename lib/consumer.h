#pragma once

#include "rtipc.h"
#include "shm.h"

typedef struct ri_consumer_queue ri_consumer_queue_t;

ri_consumer_queue_t* ri_consumer_queue_new(const ri_channel_param_t *param, ri_shm_t *shm, size_t shm_offset);

void ri_consumer_queue_shm_init(ri_consumer_queue_t *consumer);

void ri_consumer_queue_delete(ri_consumer_queue_t *consumer);

unsigned ri_consumer_queue_len(const ri_consumer_queue_t *consumer);

size_t ri_consumer_queue_msg_size(const ri_consumer_queue_t *consumer);

const void* ri_consumer_queue_msg(const ri_consumer_queue_t *consumer);

ri_consume_result_t ri_consumer_queue_pop(ri_consumer_queue_t *consumer);

ri_consume_result_t ri_consumer_queue_flush(ri_consumer_queue_t *consumer);
