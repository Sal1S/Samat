
#define PRINT(num, x, y) draw_text(str_for_num(NULL, num), x, y, COLOR_WHITE)

void main()
{	
	while(!key_esc)
	{
		if(key_x)
		{
			break;
		}
		
		var i = 0;
		var j = 0;
		var counter = 0;
		
		for(i = 0; i < 10; i++)
		{
			for(j = 0; j < 10; j++)
			{
				counter++;
				PRINT(counter, 30 * i, 30 * j);	
			}
		}	
		wait(1);
	}
}