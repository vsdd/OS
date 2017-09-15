int count = 0;
semaphore mutex = 1;
semaphore rw = 1;
semaphore w = 1;

writer() 
{
	while(1)
	{
		P(w);
		P(rw);
		writing;
		V(rw);
		V(w);
	}
}

reader()
{
	while(1)
	{
		P(w);
		P(mutex);
		if(count == 0)
			P(rw);
		count++;
		V(mutex);
		V(w);
		reading;
		P(mutex);
		count--;
		if(count == 0)
			V(rw);
		V(mutex);
	}
}
