
var math(var x, var y)
{
	return x + y;
}

var matt(var x, var y)
{
	return x - y;
}

void main()
{
	//var c = matt(4, 2);
	var c = math(3, 2);
	while(!key_x)
	{
		DEBUG_VAR(c, 0);
		wait(1);
	}
}