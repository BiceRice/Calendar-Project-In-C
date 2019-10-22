//create a calendar based on the user input at a given year
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main()
{
	char *months[] = {" ", "Janurary", "Feburary", "March", "April", "June",
	"July", "August", "September", "October", "Novemeber", "Decemeber"};
	char *days[] = {" ", "Sunday", "Monday", "Tuesday", "Wednesday", "Thursday",
"Friday", "Saturday"};
	printf("Enter a year you wish to view the calendar for: ");
	int User_Year;
	scanf("%d", &User_Year);
	printf("The year you enter is: %d\n", User_Year);

	for(int month = 1; month < 12; month++)
	{
		printf("\n\n~~~~~~~~~~~~~~~~~~~~~~~~~~~%s~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n", 
		months[month]);
		for(int day = 1; day <=7; day++)
		{
			printf(" %s ", days[day]);
		}
		printf("\n");
	}
	return 0;
}
