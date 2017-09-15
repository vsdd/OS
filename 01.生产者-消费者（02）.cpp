semaphore plate = 1;
semaphore apple = 0;
semaphore orange = 0;

dad()
{
	while(1)
	{
		prepare an apple;
		P(plate);
		put the apple on the plate;
		V(plate);
	}
}

mon()
{
	while(1)
	{
		prepare an orange;
		P(palte);
		put the orange on the plate;
		V(orange);
	}
}

son()
{
	while(1)
	{
		P(orange);
		take an orange from the plate;
		V(plate);
		eat the orange;
	}
}

daughter()
{
	while(1)
	{
		P(apple);
		take an apple from the palte;
		V(plate);
		eat the apple;
	}
}
