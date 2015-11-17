#pragma config(UART_Usage, UART2, uartVEXLCD, baudRate19200, IOPins, None, None)
int leftrpm = 3; //this will be the actual rpm -uses test value
int rightrpm = 5; //this will be the actual rpm -uses test value
int lastBtnPressed;
int menuValue;
byte leftMotPowaah; //this will be the actual powaah
byte rightMotPowaah; //this will be the actual powaah

void menuValues()
{
	lastBtnPressed = nLCDButtons;
	if(lastBtnPressed == 1)
	{
		menuValue = menuValue - 1;
	}
	if(lastBtnPressed == 4)
	{
		menuValue = menuValue + 1;
	}
	if(lastBtnPressed == 2)
	{
		menuValue = 0;
	}
	if(menuValue > 2)
	{
		menuValue = 2;
	}
	if (menuValue < -1)
	{
		menuValue = -1;
	}
}

task main()
{
	menuValue = 0; //Starting value
while(true)
{
	while(menuValue == 0)
	{
		displayLCDCenteredString(0, "BangBang Code");
		displayLCDCenteredString(1, "-Tynan and Jeff-");
	}
}
}
