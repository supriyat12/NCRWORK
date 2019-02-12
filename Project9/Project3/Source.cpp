void replace_tabs(FILE *fp)
{
	while (*fp != '\0')
	{
		if (*fp == '	')
		{
			*fp = '\t';
		}
		fp++;
	}
	fprint(fp);
}