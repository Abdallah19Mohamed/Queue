

#include "main.h"

u32 Queue_arr[QUEUE_MAX];
u32 ReturnElement;
int main(void)
{
	
EnqueueData (Queue_arr,1);
DisplayQueue (Queue_arr);
EnqueueData (Queue_arr,2);
DisplayQueue (Queue_arr);
EnqueueData (Queue_arr,3);
DisplayQueue (Queue_arr);
EnqueueData (Queue_arr,4);
DisplayQueue (Queue_arr);
EnqueueData (Queue_arr,5);
DisplayQueue (Queue_arr);
EnqueueData (Queue_arr,6);
DisplayQueue (Queue_arr);
EnqueueData (Queue_arr,7);
DisplayQueue (Queue_arr);
EnqueueData (Queue_arr,100);
EnqueueData (Queue_arr,120);


DisplayQueue (Queue_arr);

DequeueData (Queue_arr,&ReturnElement);
DisplayQueue (Queue_arr);
DequeueData (Queue_arr,&ReturnElement);
DisplayQueue (Queue_arr);
DequeueData (Queue_arr,&ReturnElement);
DisplayQueue (Queue_arr);
DequeueData (Queue_arr,&ReturnElement);
DisplayQueue (Queue_arr);
DequeueData (Queue_arr,&ReturnElement);
DequeueData (Queue_arr,&ReturnElement);
DequeueData (Queue_arr,&ReturnElement);
DequeueData (Queue_arr,&ReturnElement);
DequeueData (Queue_arr,&ReturnElement);
return 0;
}
