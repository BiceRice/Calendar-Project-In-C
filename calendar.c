//create a calendar based on the user input at a given year
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define TILDA '~'
#define TWO 2
#define MAX 63
#define DAYSOFWEEK 7
#define NINE 9

void printTilda(int total)
{
	for(int i = 0; i < total; i++)
	{
		printf("%c", TILDA);
	}
}

int main()
{
	char *months[] = {" ", "Janurary", "Feburary", "March", "April", "June",
	"July", "August", "September", "October", "Novemeber", "Decemeber"};
	char *days[] = {" ", "Sun", "Mon", "Tue", "Wed", "Thu","Fri", "Sat"};
  int DaysOfMonth[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
	printf("Enter a year you wish to view the calendar for: ");
	int User_Year;
	scanf("%d", &User_Year);
	printf("The year you enter is: %d\n", User_Year);

	for(int month = 1; month < 12; month++)
	{
		int firsthalf, secondhalf;
		//totale atilda characaters is 62
		int length = strlen(months[month]);
		int total = MAX - length;

		if(total % TWO != 0 )
		{
			firsthalf = (total / 2) + 1;
		}else
		{
			firsthalf = (total / 2);
		}
		secondhalf = total / 2;

		printf("\n\n");
		printTilda(firsthalf);
		printf("%s", months[month]);
		printTilda(secondhalf);
		printf("\n");

		for(int day = 1; day <=7; day++)
		{
			printf("%s       ", days[day]);
		}
		printf("\n");

		for(int days = 1; days <= DaysOfMonth[month]; days++)
		{
			if(days % DAYSOFWEEK == 1)
			{
				printf(" %d", days);
			}else
			{
			if(days == NINE)
			{
				printf("%11d", days);
			}else
			{
			printf("%10d", days);
		  }
			}
			if(days% DAYSOFWEEK == 0)
			{
				printf("\n");
			}
		}
		printf("\n");
	}
	return 0;
}
