/**********************************************************************************
**                                                                               **
**                               Math Is Fun                                     **
**                                                                               **
**                                                                               **
**********************************************************************************/

//********** Includes *************************************************************

//********** Variables ************************************************************
int a = 3;
int b = 4;
int h = 0;

//********** Setup ****************************************************************
void setup()
{
Serial.begin(9600);

Serial.println("Lets calculate a hypoteneuse");
Serial.println("a = 3");

Serial.println("b = 4");
h = sqrt(sq(a)+sq(b));
Serial.print("h = ");
Serial.print(sqrt(sq(a)+sq(b)));
}

//********** Loop *****************************************************************
void loop()
{
}

//********** Funcions *************************************************************
