


int deadband (int stick)
{
	const int db = 7;
	int astick = abs(stick);
	int ret = 0;
	if(astick > db)
	{
		astick = pow(1.1,astick/1.5);

		if(astick > 127) astick = 127;

		if(stick < 0) astick *= -1;
		ret = astick;
	}
	return ret;
}
