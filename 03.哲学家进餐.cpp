semaphore chopstick[5] = {1, 1, 1, 1, 1};
semaphore mutex = 1;

Pi()
{
	do
	{
		P(mutex);
		P(chopstick[i]);
		P(chopstick[(i+1)%5]);
		V(mutex);
		eat;
		V(chopstick[i]);
		V(chopstick[(i+1)%5]);
		think;
	}while(1);
}
