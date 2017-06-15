/*  Name     : main.c
 *  Purpose  : Main file for DS1307 RTC code for AT89C51.
 *  Author   : M.Saeed Yasin
 *  Date     : 06-11-12
 *  Website  : saeedsolutions.blogspot.com
 *  Revision : None
 */
#include "Includes.h"

// Main function
void main()
{	
	InitLCD();	// Initialize LCD	
	InitI2C();	// Initialize i2c pins											

	// Set initial time
	Set_DS1307_RTC_Time(AM_Time, 8, 32, 59);	// Set time 08:32:59 AM

	// Set initial date
	Set_DS1307_RTC_Date(2, 11, 12, Friday); 	// Set 02-11-2012 @ Friday

	while(1)
	{
		// Display RTC time on first line of LCD
		DisplayTimeToLCD(Get_DS1307_RTC_Time());

		// Display RTC date on second line of LCD
		DisplayDateOnLCD(Get_DS1307_RTC_Date());

		//delay(65000);	// Roughly about 1 second delay
	}
}