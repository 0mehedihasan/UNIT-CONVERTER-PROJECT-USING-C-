// C program to makes a unit converter
// using Switch-case

#include <stdio.h>
int main()
{
	/*Variable for unit converter----start*/


    /*Variable for unit converter----end*/
	/*display which option will be slect by user----start*/
	printf("Press 1 to use Lenghth\t\tConverter\n");
	printf("Press 2 to use Time\t\tConverter\n");
	printf("Press 3 to use temperature\tConverter\n");
	printf("Press 4 to use Mass\t\tConverter\n");
	printf("Press 5 to use Current\t\tConverter\n");
	printf("Press 6 to use Area\t\tConverter\n");
	printf("Press 7 to use Volume\t\tConverter\n");
	printf("Press 8 to use Currency\t\tConverter\n");

	/*display which option will be slect by user-----end*/
	printf("Enter your choice:\n");

	int choice;
	scanf("%d",&choice);
	if(choice>0&&choice<9){
	switch (choice)

	{
	case 1: //length works here
        {

        printf("Enter 1: Convert Meter to Centimeter\n");
        printf("Enter 2: Convert centimeter to Meter\n");
        printf("Enter 3: Convert Kilometer to Meter\n");
        printf("Enter 4: Convert Meter to Kilometer\n");
        printf("Enter 5: Convert Meter to Millimeter\n");
        printf("Enter 6: Convert Millimeter to Meter\n");
        printf("Enter 7: Convert Inch to Meter\n");
        printf("Enter 8: Convert Meter to inch\n");
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
case 5://meter to milliometer
{
printf("Enter the value of meter=");
float meter,millimeter;
scanf("%f",&meter);
millimeter=1000*meter;
printf("Millimeter= %f",meter);
break;
}
case 6://Millimeter to meter
{
printf("Enter the value of Millimeter=");
float meter,millimeter;
scanf("%f",&millimeter);
meter=millimeter/1000;
printf("Meter= %f",meter);
break;
}
case 7://Inch to meter
{
printf("Enter the value of Inch=");
float meter,i;
scanf("%f",&i);
meter=i*0.0254;
printf("Meter= %f",meter);
break;
}
case 8:// meter to inch
{
printf("Enter the value of Meter=");
float meter,i;
scanf("%f",&meter);
i=meter*39.3701;
printf("Inch= %f",i);
break;
}	}
	break;
	}
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
scanf("%f",&m);
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
        printf("Enter 1: Convert Fahrenheit to celsius\n");
        printf("Enter 2: Convert celsius to fahrenheit\n");
        printf("Enter 3: Convert celsius to Kelvin\n");
        printf("Enter 4: Convert Kelvin to fahrenheit\n");
        printf("Enter 5: Convert fahrenheit to Kelvin\n");
        printf("Enter 6: Convert kelvin to celcius\n");
   int choice_temperature;
   scanf("%d",&choice_temperature);
   switch(choice_temperature)
   {
case 1:
    {
     printf("Enter the value of Fahrenheit=");
float f,c;
scanf("%f",&f);
c=((f-32)*5)/9;
printf("Celcius=%.2f",c);
break;

    }
case 2:
    {
    printf("Enter the value of Celcius=");
float f,c;
scanf("%f",&c);
f=( (c*9)/5)+32;
printf("Fahrenheit=%.2f",f);

        break;
    }
    case 3:
    {
    printf("Enter the value of Celcius=");
float kelvin,c;
scanf("%f",&c);
kelvin = 273.15 +c;
printf("Kelvin=%.2f",kelvin);

        break;
    }
    case 4:
    {
    printf("Enter the value of Kelvin=");
float kel, F;
scanf("%f", &kel);
F = ((9.0 / 5) * (kel - 273.15)) + 32;
printf("Fahrenheit=%.2f",F);

        break;
    }
case 5:
    {
    printf("Enter the value of Fahrenheit=");
float kel, F;
scanf("%f", &kel);
kel = ((5.0 / 9) * (F - 32)) + 273.15;
printf("Kelvin=%.2f",kel);

        break;
    }
    case 6:
    {
    printf("Enter the value of Kelvin=");
float kelvin,c;
scanf("%f",&kelvin);
c=kelvin-273.15;
printf("Celcius=%.2f",c);

        break;
	    }}
break;
    }//case-3-end

case 4://use Mass Converter
    {//case-4-start
        printf("Enter 1: Convert gram to kilogram\n");
        printf("Enter 2: Convert kilogram to gram\n");
        printf("Enter 3: Convert gram to miligram\n");
        printf("Enter 4: Convert miligram to gram\n");
   int choice_mass;
   scanf("%d",&choice_mass);
   switch(choice_mass)
   {
case 1:
    {
     printf("Enter the value of gram=");
float g,k;
scanf("%f",&g);
k=g/1000;
printf("kilogram=%.2f",k);
        break;
    }
case 2:
    {
     printf("Enter the value of kilogram=");
float g,k;
scanf("%f",&k);
g=k/1000;
printf("kilogram=%.2f",g);
        break;
    }
case 3:
    {
printf("Enter the value of gram=");
float g,m;
scanf("%f",&g);
m=g*1000;
printf("miligram=%.2f",m);
        break;
    }
case 4:
    {
printf("Enter the value of miligram=");
float g,m;
scanf("%f",&m);
g=m/1000;
printf("gram=%.2f",g);

        break;
    }
	    }
break;
    }//case-4-end


case 5://use Current Converter
    {//case-5-start
  printf("Enter 1: Convert Ampere to Miliampere\n");
        printf("Enter 2: Convert miliampere to ampere\n");
        printf("Enter 3: Convert kiloampere to ampere\n");
        printf("Enter 4: Convert ampere to Kiloampere\n");
   int choice_Current ;
   scanf("%d",&choice_Current );
   switch(choice_Current)
   {
case 1:
    {
printf("Enter the value of ampere=");
float a,m;
scanf("%f",&a);
m=1000*a;
printf("miliampere= %.2f",m);

        break;
    }
case 2:
    {
printf("Enter the value of miliampere=");
float k,m;
scanf("%f",&m);
k=m/1000;
printf("ampere= %.2f",k);
        break;
    }
case 3:
    {
printf("Enter the value of kiloampere=");
float k,m;
scanf("%f",&k);
m=k/1000000;
printf("miliampere= %.2f",m);
        break;
    }
case 4:
    {
printf("Enter the value of miliampere=");
float k,m;
scanf("%f",&m);
k=1000000*m;
printf("miliampere= %.2f",k);
        break;
    }
	    }
break;
    }//case-5-end


case 6://use area Converter
    {//case-6-start
    int choice,r,l,w,b,h;
      float area;
      printf("Enter 1 for area of circle\n");
      printf("Enter 2 for area of rectangle\n");
      printf("Enter 3 for area of triangle\n");
      printf("Enter 4 for area of Square\n");
	    int choice_area;
	    scanf("%d",&choice_area);
	    switch(choice_area)
	    {
            case 1:
                {

                 printf("Input radious of the circle : ");
                 scanf("%d",&r);
                 area=3.14*r*r;
                 printf("The area of the circle is : %f\n",area);
                 break;
                }
            case 2:
                {
                  printf("Input length and width of the rectangle : ");
                  scanf("%d%d",&l,&w);
                  area=l*w;
                  printf("The area of the rectangle is : %f\n",area);
                  break;
                }
            case 3:{
                  printf("Input the base and hight of the triangle :");
                  scanf("%d%d",&b,&h);
                  area=.5*b*h;
                  printf("The area of the triangle is : %f\n",area);
                  break;
                    }
                case 4:
                {
                    float side,area;
                    printf("Enter the Length of Side : ");
                    scanf("%f",&side);
                    area = side * side ;
                    printf("The Area of Square is: %f",area);
                }
	    }
break;
    }//case-6-end

case 7://use Volume Converter
    {//case-7-start
        printf("Enter 1 to Convert Liter to Milliliter\n");
        printf("Enter 2 to Convert Milli-liter to Liter\n");
        printf("Enter 3 to Convert Liter to Centi-liter\n");
        printf("Enter 4 to Convert Centi-iter to Liter\n");
        printf("Enter 5 to Convert Liter to Deci-liter\n");
        printf("Enter 6 to Convert Deci-liter to Liter\n");
        printf("Enter 7 to Convert Liter to Hecto-liter\n");
        printf("Enter 8 to Convert Hecto-liter to Liter\n");
	    int choice_volume ;
	    scanf("%d",&choice_volume);
	    switch(choice_volume)
	    {
case 1:
    {
    printf("Enter the value of liter:");
    float l,ml;
    scanf("%f",&l);
    ml=1000*l;
    printf("Milli-liter=%f",ml);
        break;
    }
case 2:
    {
    printf("Enter the value of Milli-liter:");
    float l,ml;
    scanf("%f",&l);
    l=ml/1000;
    printf("liter=%f",l);
        break;
    }
case 3:
    {
    printf("Enter the value of liter:");
    float l,cl;
    scanf("%f",&l);
    cl=100*l;
    printf("Cent-liter=%f",cl);
        break;
    }
case 4:
    {
    printf("Enter the value of Centi-liter:");
    float l,cl;
    scanf("%f",&cl);
    l=cl/100;
    printf("Liter=%.2f",l);
        break;
    }
case 5:
    {
    printf("Enter the value of liter:");
    float l,cl;
    scanf("%f",&l);
    cl=10*l;
    printf("Deci-liter=%f",cl);
        break;
    }
case 6:
    {
    printf("Enter the value of Deci-liter:");
    float l,cl;
    scanf("%f",&cl);
    l=cl/10;
    printf("Liter=%.2f",l);
        break;
    }
case 7:
    {
    printf("Enter the value of liter:");
    float l,cl;
    scanf("%f",&l);
    cl=100/l;
    printf("Hecto-liter=%f",cl);
        break;
    }
case 8:
    {
    printf("Enter the value of Hecto-liter:");
    float l,cl;
    scanf("%f",&cl);
    l=cl*100;
    printf("Liter=%.2f",l);
        break;
    }
	    }
break;
    }//case-7-end

case 8://use Currency Converter
    {//case-8-start

        printf("Enter 1: Convert BDT to Dollar\n");
        printf("Enter 2: Convert Dollar to BDT\n");
        printf("Enter 3: Convert BDT to Euro\n");
        printf("Enter 4: Convert Euro to BDT\n");
        printf("Enter 5: Convert BDT to Rupee\n");
        printf("Enter 6: Convert Rupee to BDT\n");
        printf("Enter 7: Convert BDT to Pound\n");
        printf("Enter 8: Convert Pound to BDT\n");
        printf("Enter 9: Convert BDT to Yen\n");
         printf("Enter 10: Convert Yen to BDT\n");
          printf("Enter 11: Convert BDT to Ruble\n");
           printf("Enter 12: Convert Ruble to BDT\n");
            printf("Enter 13: Convert BDT to franc\n");
             printf("Enter 14: Convert franc to BDT\n");
        printf("Enter 15: Convert BDT to krona\n");
         printf("Enter 16: Convert krona to BDT\n");
          printf("Enter 17: Convert BDT to AUD\n");
          printf("Enter 18: Convert AUD to BDT\n");
        printf("Enter 19: Convert BDT to CAD\n");
        printf("Enter 20: Convert CAD to BDT\n");
   int choice_Currency ;
   scanf("%d",&choice_Currency);
   switch(choice_Currency)
   {
case 1:
    {
    printf("Enter the amount of BDT=");
float b,d;
scanf("%f",&b);
d=0.0097*b;
printf("Dollar= %.2f",d);
        break;
    }
case 2:
    {
    printf("Enter the amount of Dollar=");
float b,d;
scanf("%f",&d);
b=b/0.097;
printf("BDT= %.2f",b);
        break;
    }
case 3:
    {
    printf("Enter the amount of BDT=");
float b,e;
scanf("%f",&b);
e=0.0100*b;
printf("Dollar= %.2f",e);
        break;
    }
case 4:
    {
printf("Enter the amount of Euro=");
float b,e;
scanf("%f",&e);
b=e/0.0100;
printf("BDT= %.2f",b);
        break;
    }
    case 5:
    {
printf("Enter the amount of BDT=");
float b,p;
scanf("%f",&b);
p=0.0089*b;
printf("BDT= %.2f",b);
        break;
}
case 6:
    {
printf("Enter the amount of Pound=");
float b,p;
scanf("%f",&p);
b=p/0.0089;
printf("BDT= %.2f",b);
        break;
    }
        case 7:
    {
printf("Enter the amount of BDT=");
float b,r;
scanf("%f",&b);
r=b*0.79;
printf("BDT= %.2f",b);
        break;
    }
    case 8:
    {
printf("Enter the amount of rupee=");
float b,r;
scanf("%f",&r);
b=r/0.79;
printf("BDT= %.2f",b);
        break;
    }
        case 9:
    {
printf("Enter the amount of BDT=");
float b,y;
scanf("%f",&b);
y=b*1.39;
printf("BDT= %.2f",y);
        break;
     }

        case 10:
    {
printf("Enter the amount of yen=");
float b,y;
scanf("%f",&y);
b=y/1.39;
printf("BDT= %.2f",b);
        break;
    }
    case 11:
    {
printf("Enter the amount of BDT=");
float b,ru;
scanf("%f",&b);
ru=0.56*b;
printf("ruble= %.2f",ru);
        break;
    }
    case 12:
    {
printf("Enter the amount of ruble=");
float b,ru;
scanf("%f",&ru);
b=ru/0.56;
printf("BDT= %.2f",b);
        break;
    }
    case 13:
    {
printf("Enter the amount of BDT=");
float b,f;
scanf("%f",&f);
f=0.0100*b;
printf("franc= %.2f",f);
        break;
    }
    case 14:
    {
printf("Enter the amount of franc=");
float b,f;
scanf("%f",&f);
b=b/0.0100;
printf("BDT= %.2f",b);
        break;
    }
    case 15:
    {
printf("Enter the amount of BDT=");
float b,k;
scanf("%f",&b);
k=0.11*b;
printf("Krona= %.2f",k);
        break;
    }
    case 16:
    {
printf("Enter the amount of krona=");
float b,k;
scanf("%f",&k);
k=b/0.11;
printf("BDT= %.2f",k);
        break;
    }
    case 17:
    {
printf("Enter the amount of BDT=");
float b,a;
scanf("%f",&b);
a=0.015*b;
printf("AUD= %.2f",a);
        break;
    }
    case 18:
    {
printf("Enter the amount of AUD=");
float b,a;
scanf("%f",&a);
b=a/0.015;
printf("BDT= %.2f",b);
        break;
    }
    case 19:
    {
printf("Enter the amount of BDT=");
float b,c;
scanf("%f",&c);
c=0.013*b;
printf("CAD= %.2f",c);
        break;
    }
    case 20:
    {
printf("Enter the amount of CAD=");
float b,c;
scanf("%f",&c);
b=c/0.013;
printf("BDT= %.2f",b);
        break;
    }
   }
break;
    }//case-8-end

	}
	}
else
{
    printf("Your option is invalid\nPlease Press a valid option");
}
	return 0;
}
