#include<stdio.h>

void main()
{
	//Declare Variables
	int day, month, year, valid, leapYear, count=0, dayNum;
	int jan=31, feb=59 , mar=90 , april=120 , may=151 , june=181 , 
		july=212 , aug= 243, sept=273 , oct=304 , nov=334;

	//Ask user to input selected date
	printf("Please enter Date you want to find number of\t");
	scanf("%d %d %d", &day, &month, &year);

	//First find if year is a leap year
	leapYear = year % 4;

	//Year is a leapyear
	if (leapYear == 0)
	{
		switch (month)
		{
			//January
			case 1:
				//first month so day is num
				dayNum = day;
			break;

			//February
			case 2: 
				dayNum = day + jan;
				if (day > 28)
				{
					dayNum += 1;
				}
			break;

			//March
			case 3:
				dayNum = day + feb +1;
			break;

			//April
			case 4:
				dayNum = day + mar + 1;
			break;

			//May
			case 5:
				dayNum = day + april + 1;
			break;

			//June
			case 6:
				dayNum = day + may + 1;
			break;

			//July
			case 7:
				dayNum = day+ june + 1;
			break;

			//August
			case 8:
				dayNum = day + july + 1;
			break;

			//September
			case 9:
				dayNum = day + aug + 1;
			break;

			//October
			case 10:
				dayNum = day + sept + 1;
			break;

			//November
			case 11:
				dayNum = day + oct + 1;
			break;

			//December
			case 12:
				dayNum = day + nov + 1;
			break;
		}
	}

	//Year is not a leapyear
	else
	{
		switch (month)
		{
			//January
		case 1:
			//first month so day is num
			dayNum = day;
			break;

			//February
		case 2:
			dayNum = day + jan;
			break;

			//March
		case 3:
			dayNum = day + feb;
			break;

			//April
		case 4:
			dayNum = day + mar;
			break;

			//May
		case 5:
			dayNum = day + april;
			break;

			//June
		case 6:
			dayNum = day + may;
			break;

			//July
		case 7:
			dayNum = day + june;
			break;

			//August
		case 8:
			dayNum = day + july;
			break;

			//September
		case 9:
			dayNum = day + aug;
			break;

			//October
		case 10:
			dayNum = day + sept;
			break;

			//November
		case 11:
			dayNum = day + oct;
			break;

			//December
		case 12:
			dayNum = day + nov;
			break;
		}
	}

	//Display Daynumber
	printf("The number of the day %d/%d/%d. Is %d\n\n", day, month, year, dayNum);
}
