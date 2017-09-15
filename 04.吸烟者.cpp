int random;
semaphore offer1 = 0;
semaphore offer2 = 0;
semaphore offer3 = 0;
semaphore finish = 0;

process P1()
{
	while(1)
	{
		random = 任意一个整数随机数;
		random = random%3;
		if(random == 0) 
			V(offer1);
		else if(random = 1)
			V(offer2);
		else
			V(offer3);
		任意两种材料放在桌子上；
	    P(finish) ;
	}
}

process P2()
{
	while(1)
	{
		P(offer3);
		拿纸和胶水，卷成烟，抽掉；
		V(finish) ;
	}
}

process P3()
{
	while(1)
	{
		P(offer2);
		拿烟草和胶水，卷成烟，抽掉；
		V(finish); 
	}
}

process P4()
{
	while(1)
	{
		P(offer1);
		拿烟草和纸，卷成烟，抽掉；
		V(finish) ;
	}
}
