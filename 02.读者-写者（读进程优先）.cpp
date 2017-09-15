int count = 0;
semaphore mutex = 1;
semaphore rw = 1;

writer() 
{
	while(1)
	{
		P(rw);
		writing;
		V(rw);
	}
}

reader()
{
	while(1)
	{
		P(mutex);
		if(count == 0)
			P(rw);
		count++;
		V(mutex);
		reading;
		P(mutex);
		count--;
		if(count == 0);
			V(rw);
		V(mutex);
	}
}
