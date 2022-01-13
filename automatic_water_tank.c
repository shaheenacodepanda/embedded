#include<stdio.h>
int main()
{
int sensor_reading,Tap_on,Tap_off;
int j,i;
printf("...INTIALLY...TAP_OFF...TANK IS FULL");
printf("\n enter 1 to turn on the TAP");
scanf("%d",&Tap_on);
sensor_reading=5;
if(Tap_on==1)

{	printf("TAP IS TURNED_ON==>WATER STARTS TO DECREASE\n");
	for(sensor_reading=5;sensor_reading>0;sensor_reading--)
		{printf("....TAP IS STILL RUNNING...\n");
		printf("...tank starts emptying...sensor_reading is =%d\n",sensor_reading);
		for(j=0;j<100;j++)  //time delay
			continue;
		}
	if(sensor_reading==0)
		{printf("\n...TANK IS EMPTY...MOTOR_ON....\n");///turning on motor
		for(int i=1;i<=5;i++)
			{ sensor_reading=i;
			printf("....TAP IS CLOSED...\n");
			printf("\n....TANK STARTS FILLING...sensor_reading is =%d\n",sensor_reading);
			}
			
		printf("....TANK IS FULL...MOTOR_OFF\n");
		printf("....MOTOR_OFF...");
	}
}
else
{printf("TAP IS NOT TURNED_ON");}

}
