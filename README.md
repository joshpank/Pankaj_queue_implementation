# Pankaj_queue_implementation
A program that implements queue with enqueue and dequeue operation | joshpank |


In this implementation, I define a Queue struct with an array items, a front index, and a rear index. I also define helper functions createQueue, isFull, and isEmpty. The createQueue function dynamically allocates memory for a new Queue instance and initializes its front and rear indices to -1. The isFull function checks whether the rear index is equal to MAX_QUEUE_SIZE - 1, which indicates that the queue is full. The isEmpty function checks whether both the front and rear indices are -1, which indicates that the queue is empty.

The enqueue function first checks whether the queue is full using isFull. If it is, I print an error message and return without adding the item. If the queue is empty, I set both the front and rear indices to 0 and add the item to the rear index of the items array. If the queue is not empty, I increment the rear index and add the item to the new rear index of the items array.

The dequeue function first checks whether the queue is empty using isEmpty. If it is, I print an error message and return -1. If the queue is not empty, I remove and return the item at the front.
