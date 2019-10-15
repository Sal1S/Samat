
void main()
{	
	while(!key_esc)
	{
		if(key_x)
		{
			break;
		}
		
		var i = 0;
		for(i = 0; i < 10; i++)
		{
			if((i % 2) != 0)
			{
				continue;	
			}
			DEBUG_VAR(i, 20 * i);	
		}	
		wait(1);
	}
}