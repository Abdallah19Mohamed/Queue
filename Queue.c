#include "Queue.h"

s32 Head =-1;
s32 Tail =-1;

static Queuestate_t QueueFull(void) //check memory full or not    "function"
{
	Queuestate_t ReturnValue = QUEUE_EMPTY;
	if (Tail == QUEUE_MAX-1)
	{
		 ReturnValue = QUEUE_FULL;
	}
	else
	{ 
		ReturnValue = QUEUE_NOTFULL;
   	}
	return ReturnValue;
}


static Queuestate_t QueueEmpty(void) //check memory empty or not "function"
{
	Queuestate_t ReturnValue = QUEUE_EMPTY;
	if ((Tail==-1)&&(Head==-1)||(Head>Tail))
	{
	ReturnValue=QUEUE_EMPTY;
	}
	else
	{
	ReturnValue=QUEUE_NOTEMPTY;
	}
	return ReturnValue;
}


status_t EnqueueData (u32 Queue[] , u32 value )          // inserting data in queue  
{
	
	if (QueueFull() == QUEUE_FULL)
	{
		printf("SORRY !! THE QUEUE MEMORY IS FULL \n");
		return RET_NOK;
	}
	else if (QueueEmpty() == QUEUE_EMPTY)
	{
		Head=0;
		Tail=0;
		Queue[Tail]=value;
		printf("The New Data '%i' Enqueued successfully \n",value);
		return RET_OK;
	}
	else 
	{
		Tail ++;
		Queue[Tail]= value;
		printf("The New Data '%i' Enqueued successfully \n",value);
		return RET_OK;
	}
	return 0;
}

status_t DisplayQueue (u32 *Queue)    //DISPLAY "Function "
{
	Queuestate_t ReturnValue =RET_OK;
	u32 count =0;
	
	if ( NULL == Queue )
	{
		printf (" ERROR NULL POINTER");
		ReturnValue = RET_NULL_PTR;
	}
	else
	{
		if (QueueEmpty()== QUEUE_EMPTY)
		{
			printf ("THERE IS NOTHING TO DISPLAY \n");
			ReturnValue=RET_NOK;
		}
		else
		{
			printf("QUEUE: ");
			for (count=Head;count<=Tail;count++)
			{
				printf("%d \t",Queue[count]);
			}
			printf("\n");
			ReturnValue = RET_OK;
		}	
	}
	return ReturnValue;
}
	

status_t DequeueData (u32 *Queue,u32 *element)     // get data out
{
	status_t ReturnValue=RET_NOK;
	if ( NULL == Queue )
	{
		printf (" ERROR NULL POINTER");
		ReturnValue = RET_NULL_PTR;
	}
	else
	{
		if (QueueEmpty()==QUEUE_EMPTY)
		{
			printf("SORRY!!!! THE QUEUE IS EMPTY \n");
			ReturnValue=RET_NOK;
		}
		else 
		{
			*element=Queue[Head];
			Head ++;
			ReturnValue=RET_OK;
		}
	}
	return ReturnValue;
}
	
	
	
	
	
	




	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	