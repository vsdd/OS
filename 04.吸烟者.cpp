int random;
semaphore offer1 = 0;
semaphore offer2 = 0;
semaphore offer3 = 0;
semaphore finish = 0;

process P1()
{
	while(1)
	{
		random = ����һ�����������;
		random = random%3;
		if(random == 0) 
			V(offer1);
		else if(random = 1)
			V(offer2);
		else
			V(offer3);
		�������ֲ��Ϸ��������ϣ�
	    P(finish) ;
	}
}

process P2()
{
	while(1)
	{
		P(offer3);
		��ֽ�ͽ�ˮ������̣������
		V(finish) ;
	}
}

process P3()
{
	while(1)
	{
		P(offer2);
		���̲ݺͽ�ˮ������̣������
		V(finish); 
	}
}

process P4()
{
	while(1)
	{
		P(offer1);
		���̲ݺ�ֽ������̣������
		V(finish) ;
	}
}
