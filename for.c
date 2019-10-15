
#define PRINT(num, x, y) draw_text(str_for_num(NULL, num), x, y, COLOR_WHITE)

void main()
{
	var i = 0;
	var j = 0;
	var counter = 0;
	
	while(!key_x)
	{
		counter = 0;

		for(i = 1; i <= 10; i++)
		{
			for(j = 1; j <= 10; j++)
			{
				counter++;
				PRINT(counter, 40 * i, 40 * j);
			}
		}
		
		wait(1);
	}
}