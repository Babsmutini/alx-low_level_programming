<include stdio.h>
/*
 * main- Prints alphabets in lowercase
 *
 *
 * return: always 0(success)
*/
int main(void)
{
	char ch;

	for(ch = "a"; ch <= "z"; ch++)
		putchar(ch);
	return(0);

}
