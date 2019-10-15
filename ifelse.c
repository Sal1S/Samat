
#define PRINT(str) draw_text(str, 0, 0, COLOR_WHITE)

void main()
{
	while(!key_enter)
	{
		if(key_x)
		{
			PRINT("type");
		}
		else if(key_m)
		{
			PRINT("core");
		}
		else
		{
			PRINT("intel");
		}
		
		wait(1);
	}
}