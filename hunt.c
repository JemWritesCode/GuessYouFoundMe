#include <stdio.h>
#include <stdlib.h>

#define KGRN  "\x1B[32m" //Make text Green.
#define KRED  "\x1B[31m" //Red

int main()
{
	// Pen Pineapple Pen
	system("open https://youtu.be/Ct6BUPvE2sM?t=14");
	system("osascript -e 'set Volume 10'");

	printf("%sMaybe you shouldn't run strange executables on your computer. You might get loud memes.\n\n\n", KRED);
	printf("%sClue 10 Location: TurnItIn\n", KGRN);
	printf("You may have failed in the first week, but now there's no reason to be meek.\n");
	printf("Recode the function from the first coding challenge with your eyes wide open.\n");
	printf("Post the LOCATIONS and FUNCTION in Slack.\n");
	printf("And you'll win the correction points you sorely lack.\n");
}