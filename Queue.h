#ifndef QUEUE_DS
#define QUEUE_DS
#define QUEUE_MAX 7
#include <stdio.h>
#include "STD_TYPES.h"



typedef enum{
		QUEUE_EMPTY,
		QUEUE_NOTEMPTY,
		QUEUE_FULL,
		QUEUE_NOTFULL
		}Queuestate_t;

		
		
		typedef enum{
			RET_OK,
			RET_NOK,
			RET_NULL_PTR,
			RET_OUT_RANGE
		}status_t;
		
		
		
		
static Queuestate_t QueueFull(void);
static Queuestate_t QueueEmpty(void);
status_t EnqueueData (u32 *Queue , u32 value );
status_t DisplayQueue (u32 *Queue);
status_t DequeueData (u32 Queue[],u32 *element);



#endif