int potPin = 0;
int a = 1;
int b = 2;
int c = 3;
int d = 4;
int e = 5;
int f = 6;
int g = 7;
int dp = 8;

// select pin for anode
int d4 = 9;
int d3 = 10;
int d2 = 11;
int d1 = 12;
// set variable
long n = 1230;
int x = 100;
int del = 55; // fine adjustment for clock
void setup()
{

pinMode(d1, OUTPUT);
pinMode(d2, OUTPUT);
pinMode(d3, OUTPUT);
pinMode(d4, OUTPUT);
pinMode(a, OUTPUT);
pinMode(b, OUTPUT);
pinMode(c, OUTPUT);

pinMode(d, OUTPUT);
pinMode(e, OUTPUT);
pinMode(f, OUTPUT);
pinMode(g, OUTPUT);
pinMode(dp, OUTPUT);
}
/////////////////////////////////////////////////////////////
void loop()


{
int val;
int dat;
val=analogRead(0);
dat=(125*val)>>8;


if (dat == 0)

{
Display(1,0);
Display(2, 0);
Display(3, 10);
Display(4, 11);
}

if (dat == 1)

{
Display(1,0);
Display(2, 1);
Display(3, 10);
Display(4, 11);

}
if (dat == 2)

{
Display(1,0);
Display(2, 2);
Display(3, 10);
Display(4, 11);
}
if (dat == 3)

{
Display(1,0);
Display(2, 3);
Display(3, 10);
Display(4, 11);
}
if (dat == 4)

{
Display(1,0);
Display(2, 4);
Display(3, 10);
Display(4, 11);
}
if (dat == 5)

{
Display(1,0);
Display(2, 5);
Display(3, 10);
Display(4, 11);
}
if (dat == 6)

{
Display(1,0);
Display(2, 6);
Display(3, 10);
Display(4, 11);
}
if (dat == 7)

{
Display(1,0);
Display(2, 7);
Display(3, 10);
Display(4, 11);
}
if (dat == 8)

{
Display(1,0);
Display(2, 8);
Display(3, 10);
Display(4, 11);
}
if (dat == 9)

{
Display(1,0);
Display(2, 9);
Display(3, 10);
Display(4, 11);
}
if (dat == 10)

{
Display(1,1);
Display(2, 0);
Display(3, 10);
Display(4, 11);
}
if (dat == 11)

{
Display(1,1);
Display(2, 1);
Display(3, 10);
Display(4, 11);
}
if (dat == 12)

{
Display(1,1);
Display(2, 2);
Display(3, 10);
Display(4, 11);
}
if (dat == 13)

{
Display(1, 1);
Display(2, 3);
Display(3, 10);
Display(4, 11);
}
if (dat == 14)

{
Display(1,1);
Display(2, 4);
Display(3, 10);
Display(4, 11);
}
if (dat == 15)

{
Display(1,1);
Display(2, 5);
Display(3, 10);
Display(4, 11);
}
if (dat == 16)

{
Display(1,1);
Display(2, 6);
Display(3, 10);
Display(4, 11);
}
if (dat == 17)

{
Display(1,1);
Display(2, 7);
Display(3, 10);
Display(4, 11);
}
if (dat == 18)

{
Display(1,1);
Display(2, 8);
Display(3, 10);
Display(4, 11);
}


if (dat == 19)

{
Display(1,1);
Display(2, 9);
Display(3, 10);
Display(4, 11);
}
if (dat == 20)

{
Display(1,2);
Display(2, 0);
Display(3, 10);
Display(4, 11);
}
if (dat == 21)

{
Display(1,2);
Display(2, 1);
Display(3, 10);
Display(4, 11);
}
if (dat == 22)

{
Display(1,2);
Display(2, 2);
Display(3, 10);
Display(4, 11);
}

if (dat == 23)

{
Display(1,2);
Display(2, 3);
Display(3, 10);
Display(4, 11);
} if (dat == 24)

{
Display(1,2);
Display(2, 4);
Display(3, 10);
Display(4, 11);
}
if (dat == 25)

{
Display(1,2);
Display(2, 5);
Display(3, 10);
Display(4, 11);
}
if (dat == 26)

{
Display(1,2);
Display(2, 6);
Display(3, 10);
Display(4, 11);
}
if (dat == 27)

{
Display(1,2);
Display(2, 7);
Display(3, 10);
Display(4, 11);
}
if (dat == 28)

{
Display(1,2);
Display(2, 8);
Display(3, 10);
Display(4, 11);
}
if (dat == 29)

{
Display(1,2);
Display(2, 9);
Display(3, 10);
Display(4, 11);
}
if (dat == 30)

{
Display(1,3);
Display(2, 0);
Display(3, 10);
Display(4, 11);
}

delay(10);



}
///////////////////////////////////////////////////////////////
void WeiXuan(unsigned char n)//
{
switch(n)
{
case 1:
digitalWrite(d1,LOW);
digitalWrite(d2, HIGH);
digitalWrite(d3, HIGH);
digitalWrite(d4, HIGH);
break;
case 2:
digitalWrite(d1, HIGH);
digitalWrite(d2, LOW);
digitalWrite(d3, HIGH);
digitalWrite(d4, HIGH);
break;
case 3:
digitalWrite(d1,HIGH);
digitalWrite(d2, HIGH);
digitalWrite(d3, LOW);
digitalWrite(d4, HIGH);
break;
case 4:
digitalWrite(d1, HIGH);
digitalWrite(d2, HIGH);
digitalWrite(d3, HIGH);

digitalWrite(d4, LOW);
break;
default :
digitalWrite(d1, HIGH);
digitalWrite(d2, HIGH);
digitalWrite(d3, HIGH);
digitalWrite(d4, HIGH);
break;
}
}
void Num_0()
{
digitalWrite(a, HIGH);
digitalWrite(b, HIGH);
digitalWrite(c, HIGH);
digitalWrite(d, HIGH);
digitalWrite(e, HIGH);
digitalWrite(f, HIGH);
digitalWrite(g, LOW);
digitalWrite(dp,LOW);
}
void Num_1()
{
digitalWrite(a, LOW);
digitalWrite(b, HIGH);
digitalWrite(c, HIGH);
digitalWrite(d, LOW);
digitalWrite(e, LOW);
digitalWrite(f, LOW);
digitalWrite(g, LOW);
digitalWrite(dp,LOW);
}
void Num_2()
{
digitalWrite(a, HIGH);
digitalWrite(b, HIGH);
digitalWrite(c, LOW);
digitalWrite(d, HIGH);
digitalWrite(e, HIGH);
digitalWrite(f, LOW);
digitalWrite(g, HIGH);
digitalWrite(dp,LOW);

}
void Num_3()
{
digitalWrite(a, HIGH);
digitalWrite(b, HIGH);
digitalWrite(c, HIGH);
digitalWrite(d, HIGH);
digitalWrite(e, LOW);
digitalWrite(f, LOW);
digitalWrite(g, HIGH);
digitalWrite(dp,LOW);
}
void Num_4()
{
digitalWrite(a, LOW);
digitalWrite(b, HIGH);
digitalWrite(c, HIGH);
digitalWrite(d, LOW);
digitalWrite(e, LOW);
digitalWrite(f, HIGH);
digitalWrite(g, HIGH);
digitalWrite(dp,LOW);
}
void Num_5()
{
digitalWrite(a, HIGH);
digitalWrite(b, LOW);
digitalWrite(c, HIGH);
digitalWrite(d, HIGH);
digitalWrite(e, LOW);
digitalWrite(f, HIGH);
digitalWrite(g, HIGH);
digitalWrite(dp,LOW);
}
void Num_6()
{
digitalWrite(a, HIGH);
digitalWrite(b, LOW);
digitalWrite(c, HIGH);
digitalWrite(d, HIGH);
digitalWrite(e, HIGH);
digitalWrite(f, HIGH);

digitalWrite(g, HIGH);
digitalWrite(dp,LOW);
}
void Num_7()
{
digitalWrite(a, HIGH);
digitalWrite(b, HIGH);
digitalWrite(c, HIGH);
digitalWrite(d, LOW);
digitalWrite(e, LOW);
digitalWrite(f, LOW);
digitalWrite(g, LOW);
digitalWrite(dp,LOW);
}
void Num_8()
{
digitalWrite(a, HIGH);
digitalWrite(b, HIGH);
digitalWrite(c, HIGH);
digitalWrite(d, HIGH);
digitalWrite(e, HIGH);
digitalWrite(f, HIGH);
digitalWrite(g, HIGH);
digitalWrite(dp,LOW);
}
void Num_9()
{
digitalWrite(a, HIGH);
digitalWrite(b, HIGH);
digitalWrite(c, HIGH);
digitalWrite(d, HIGH);
digitalWrite(e, LOW);
digitalWrite(f, HIGH);
digitalWrite(g, HIGH);
digitalWrite(dp,LOW);
}
void Num_10()
{
digitalWrite(a, HIGH);
digitalWrite(b, HIGH);
digitalWrite(c, LOW);
digitalWrite(d, LOW);
digitalWrite(e, LOW);
digitalWrite(f, HIGH);
digitalWrite(g, HIGH);
digitalWrite(dp,LOW);
}
void Num_11()
{
digitalWrite(a, HIGH);
digitalWrite(b, LOW);
digitalWrite(c, LOW);
digitalWrite(d, HIGH);
digitalWrite(e, HIGH);
digitalWrite(f, HIGH);
digitalWrite(g, LOW);
digitalWrite(dp,LOW);
}
void Clear() // clear the screen
{
digitalWrite(a, LOW);
digitalWrite(b, LOW);
digitalWrite(c, LOW);
digitalWrite(d, LOW);

digitalWrite(e, LOW);
digitalWrite(f, LOW);
digitalWrite(g, LOW);
digitalWrite(dp,LOW);
}
void pickNumber(unsigned char n)// select number
{
switch(n)
{
case 0:Num_0();
break;
case 1:Num_1();
break;
case 2:Num_2();
break;
case 3:Num_3();
break;
case 4:Num_4();
break;
case 5:Num_5();
break;
case 6:Num_6();
break;
case 7:Num_7();
break;
case 8:Num_8();
break;
case 9:Num_9();
break;
case 10:Num_10();
break;
case 11:Num_11();
break;
default:Clear();
break;
}
}
void Display(unsigned char x, unsigned char Number)// take x as coordinate and display number
{
WeiXuan(x);
pickNumber(Number);
delay(1);
Clear();
}
