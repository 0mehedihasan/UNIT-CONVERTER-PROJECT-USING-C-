// C program to illustrate
// Menu-Driven program
// using Switch-case

#include <stdio.h>
int main()
{
	/*Variable for unit converter----start*/


    /*Variable for unit converter----end*/
	/*display which option will be slect by user----start*/
	printf("Press 1 to use Lenghth Converter\n");
	printf("Press 2 to use Time Converter\n");
	printf("Press 3 to use temperature Converter\n");
	printf("Press 4 to use Mass Converter\n");
	printf("Press 5 to use Current Converter\n");
	printf("Press 6 to use Substance Converter\n");
	printf("Press 7 to use luminosity Converter\n");
	printf("Press 8 to use Currency Converter\n");

	/*display which option will be slect by user-----end*/
	printf("Enter your choice:\n");

	int choice;
	scanf("%d",&choice);
	switch (choice)

	{
	case 1: //length works here
        {

        printf("Enter 1: Convert Meter to Centimeter\n");
        printf("Enter 2: Convert centimeter to meter\n");
        printf("Enter 3: Convert Kilometer to meter\n");
        printf("Enter 4: Convert Meter to Kilometer\n");
	    int choice_length;
	    scanf("%d",&choice_length);
	    switch(choice_length)
	    {
case 1://meter to centimeter
{
printf("Enter the value of meter=");
float meter,centimeter;
scanf("%f",&meter);
centimeter=100*meter;
printf("Centimeter= %.2f",centimeter);
break;
}
case 2://centimeter to meter
{
printf("Enter the value of centimeter=");
float meter,centimeter;
scanf("%f",&centimeter);
meter=100/centimeter;
printf("Centimeter= %.2f",meter);
break;
}
case 3://kilometer to meter
{
printf("Enter the value of Kilometer=");
float meter,kilometer;
scanf("%f",&kilometer);
meter=1000*kilometer;
printf("meter= %.2f",meter);
break;
}
case 4://meter to kilometer
{
printf("Enter the value of meter=");
float meter,kilomeemeter;
scanf("%f",&meter);
kilomeemeter=1000/meter;
printf("Kilometer= %.2f",meter);
break;
}

		break;
	}}
case 2://time works here

	    {
        printf("Enter 1: Convert Seconds to Minutes\n");
        printf("Enter 2: Convert Minutes to Second\n");
        printf("Enter 3: Convert Seconds to Hour\n");
        printf("Enter 4: Convert Hour to Seconds\n");
        printf("Enter 5: Convert Minute to Hour\n");
        printf("Enter 6: Convert Hour to Minute\n");
        printf("Enter 7: Convert Hour  to DAY\n");
        printf("Enter 8: Convert Day to Hour\n");
        printf("Enter 9: Convert Day to Weeek\n");
        printf("Enter 10: Convert Weeek to Day\n");
        printf("Enter 11: Convert Day to Month\n");
        printf("Enter 12: Convert Month to Day\n");
        printf("Enter 13: Convert Day to Year\n");
        printf("Enter 14: Convert Year to Day\n");
	    int choice_time;
	    scanf("%d",&choice_time);
	    switch(choice_time)
	    {
case 1://Convert Seconds to Minutes
{
printf("Enter the value of Second=");
float s,m;
scanf("%f",&s);
m=60/s;
printf("Minutes= %.2f",m);
break;
}
case 2://Convert Minutes to Second
{
printf("Enter the value of Minute=");
float s,m;
scanf("%f",&s);
s=60*m;
printf("Seconds= %.2f",s);
break;
}
case 3://Convert Seconds to Hour
{
printf("Enter the value of Second=");
float s,h;
scanf("%f",&s);
h=3600/s;
printf("Minutes= %.2f",h);
break;
}
case 4://Convert Seconds to Hour
{
printf("Enter the value of Hour=");
float s,h;
scanf("%f",&h);
s=3600*h;
printf("Seconds= %.2f",s);
break;
}
case 5://Convert Minute to Hour
{
printf("Enter the value of Minute=");
float m,h;
scanf("%f",&m);
h=60*m;
printf("Hours= %.2f",h);
break;
}
case 6://Convert Hour to Minute
{
printf("Enter the value of Hour=");
float m,h;
scanf("%f",&h);
m=60*h;
printf("Minutes= %.2f",m);
break;
}
case 7://Convert Hour  to DAY
{
printf("Enter the value of Hour=");
float d,h;
scanf("%f",&h);
d=24/h;
printf("Day= %.2f",d);
break;
}
case 8://Convert Day to Hour
{
printf("Enter the value of Day=");
float d,h;
scanf("%f",&d);
h=24*d;
printf("Hour= %.2f",h);
break;
}
case 9://Convert Day to Weeek
{
printf("Enter the value of Day=");
float d,w;
scanf("%f",&d);
w=7/d;
printf("Week= %.2f",w);
break;
}
case 10://Convert Weeek to Day
{
printf("Enter the value of Week=");
float d,w;
scanf("%f",&w);
d=7*w;
printf("Day= %.2f",d);
break;
}
case 11://Convert Day to Month
{
printf("Enter the value of Day=");
float d,m;
scanf("%f",&d);
m=30/d;
printf("Months= %.2f",m);
break;
}
case 12://Convert Month to Day
{
printf("Enter the value of Month=");
float d,m;
scanf("%f",&m);
d=30*m;
printf("Day= %.2f",d);
break;
}
case 13://Convert Day to Year
{
printf("Enter the value of Day=");
float d,y;
scanf("%f",&d);
y=365/d;
printf("Year= %.2f",y);
break;
}
case 14://Convert Year to Day
{
printf("Enter the value of Year=");
float d,y;
scanf("%f",&y);
d=365*y;
printf("Day= %.2f",d);
break;
}

	default:
		printf("wrong Input\n");
	}


		break;
	}

case 3://use temperature Converter
    {//case-3-start
        printf("add temperature submenu here\n");
	    int choice_temperature;
	    scanf("%d",&choice_temperature);
	    switch(choice_temperature)
	    {
case 1:
    {

        break;
    }
case 2:
    {

        break;
    }
case 3:
    {

        break;
    }
case 4:
    {

        break;
    }
	    }
break;
    }//case-3-end

case 4://use Mass Converter
    {//case-4-start
printf("add Mass submenu here\n");
	    int choice_mass;
	    scanf("%d",&choice_mass);
	    switch(choice_mass)
	    {
case 1:
    {

        break;
    }
case 2:
    {

        break;
    }
case 3:
    {

        break;
    }
case 4:
    {

        break;
    }
	    }
break;
    }//case-4-end


case 5://use Current Converter
    {//case-5-start
printf("add temperature submenu here\n");
	    int choice_Current ;
	    scanf("%d",&choice_Current );
	    switch(choice_Current)
	    {
case 1:
    {

        break;
    }
case 2:
    {

        break;
    }
case 3:
    {

        break;
    }
case 4:
    {

        break;
    }
	    }
break;
    }//case-5-end


case 6://use Substance Converter
    {//case-6-start
printf("add substance submenu here\n");
	    int choice_substance ;
	    scanf("%d",&choice_substance);
	    switch(choice_substance)
	    {
case 1:
    {

        break;
    }
case 2:
    {

        break;
    }
case 3:
    {

        break;
    }
case 4:
    {

        break;
    }
	    }
break;
    }//case-6-end

case 7://use luminosity Converter
    {//case-7-start
printf("add luminosity submenu here\n");
	    int choice_luminosity ;
	    scanf("%d",&choice_luminosity);
	    switch(choice_luminosity)
	    {
case 1:
    {

        break;
    }
case 2:
    {

        break;
    }
case 3:
    {

        break;
    }
case 4:
    {

        break;
    }
	    }
break;
    }//case-7-end

case 8://use Currency Converter
    {//case-8-start
printf("add Currency submenu here\n");
	    int choice_Currency ;
	    scanf("%d",&choice_Currency);
	    switch(choice_Currency)
	    {
case 1:
    {

        break;
    }
case 2:
    {

        break;
    }
case 3:
    {

        break;
    }
case 4:
    {

        break;
    }
	    }
break;
    }//case-8-end

	}
	return 0;
}
