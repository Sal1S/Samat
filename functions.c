
var calculate(var a, var b, var c)
{
	return a + b * c;
}

void main()
{
	var d = calculate(1, 2, 3);
	while(!key_x)
	{
		DEBUG_VAR(d, 0);
		wait(1);
	}
}