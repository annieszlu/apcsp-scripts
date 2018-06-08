#include <stdio.h>

void output(char outputArr[])
{
        FILE *fp;

        fp = fopen ("/home/student4/dev/cdemo/finalpi/output.txt", "wb");

        if (fp)
        {
                for (int i = 0; i < 256; i++)
                {
                        fputc (outputArr[i], fp);
                }
        fclose (fp);
        }

}


int main()
{
	char outputArr[256] = "Hello. Is this working?";
	output(outputArr);
	return 0;
}
