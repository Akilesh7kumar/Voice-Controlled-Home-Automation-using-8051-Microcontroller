#include<reg51.h>
sbit load1=P1^0;
sbit load2=P1^1;
sbit load3=P1^2;
sbit load4=P1^3;
void main()
{
unsigned char x;
SCON=0X50;
TMOD=0X20;
TH1=-3;
TR1=1;
     while(1) 
              {
while(RI==0);
x=SBUF;
SBUF=x;
while(TI==0);
TI=0;
RI=0;
if(x=='1')
{
load1=1; // LIGHT OFF
}
if(x=='2')
{
load1=0; // LIGHT ON
}

if(x=='3')
{
load2=1; // FAN OFF
}
if(x=='4')
{
load2=0; // FAN ON
}
if(x=='5')
{
load3=1; // TV OFF
}
if(x=='6')
{
load3=0; // TV ON
}
if(x=='7')
{
load4=1;  //COMPUTER OFF
}
if(x=='8')
{
load4=0; // COMPUTER ON
}
if(x=='0')
{
load1=load2=load3=load4=1; // ALL OFF
}
if(x=='9')
{
load1=load2=load3=load4=0;  // ALL ON
}
}
}
