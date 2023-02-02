#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "settings.h"

int main(int argc, char *argv[])
{
	srand(time(NULL));
	int r = rand();
	r %= wallpaperCount;

	if(path == "" || path == NULL)
	{
		printf("%s", "Path in settings.h file is empty.\n This is done by default, change the path in the settings.h file\n and rebuild it.");
		exit(1);
	}
	char cmd[200];	
	#ifdef POP
	sprintf(cmd, "gsettings set org.gnome.desktop.background picture-uri-dark \"file://%s/%d.jpg\"", path, r);
	#endif
	
	#ifdef FEH
	sprintf(cmd, "feh --bg-scale \"%s/%d.jpg\"", path, r);
	#endif

	system(cmd);

	return 0;
}
