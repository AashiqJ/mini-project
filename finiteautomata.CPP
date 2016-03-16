#include<string.h>
#include<fstream.h>
#include<iostream.h>
#include<stdio.h>
#include<graphics.h>
#include<conio.h>
#include<stdio.h>
#include<dos.h>
void proj();
void instr();
void change();
void wel();
void border();
void end();
void main()
{
wel();
//proj();
}
void wel()
{
char buf[]="READING DATA FROM FILE..";
	int gd=DETECT,gm,e,x,y,a,b,c,d,j,color;
	initgraph(&gd,&gm,"C:\\TC\\BGI");
	setbkcolor(7);
	setcolor(RED);
//	x=getmaxx();
	y=getmaxy();
	settextstyle(4,HORIZ_DIR,4);
	outtextxy(210,100,"!!  WELCOME   !!");
	outtextxy(80,200," Mini Project on Finite Automata");

border();
	settextstyle(TRIPLEX_FONT,HORIZ_DIR,1);
		for(j = 0; j <= 10; j++)
	{
		if( (j % 2) == 0)
		{
		       setcolor(RED);
			outtextxy(20, y-95, buf);
			delay(1000);
		if(color > WHITE)
			color = GREEN;
		}
		else
		{
			setcolor(BLACK);
			outtextxy(20, y-95, buf);
			delay(500);
		}

	}
	  setcolor(7);
      outtextxy(20,y-95,"READING DATA FROM FILE..");
		   setcolor(7);
		setcolor(RED);
		outtextxy(20,y-80,"PRESS ENTER TO CONTINUE");
			settextstyle(TRIPLEX_FONT,HORIZ_DIR,1);
	outtextxy(20,350,"PRESS I FOR INSTRUCTIONS");
       if(getch()=='i')
       {
       instr();
       }
      getch();
      proj();
	cleardevice();
	closegraph();
}
void proj()
{
	int gd=DETECT,gm,i,u,x,y,r;
	char a,b,c,d,e,f,str1[20],str2[20],str3[20],str4[20];
	initgraph(&gd,&gm,"C:\\TC\\BGI");
	x=getmaxx();
	y=getmaxy();
ifstream in("input.txt");
	in.getline(str1,20);
	in.getline(str2,20);
	in.getline(str3,20);
	in.getline(str4,20);
	if(str2[2]=='x'||str2[2]=='y'||str2[2]=='z')
	{
		a=str2[2];
	}
if(str2[4]=='x'||str2[4]=='y'||str2[4]=='z')
	{
		b=str2[4];
	}


	if(str3[2]=='x'||str3[2]=='y'||str3[2]=='z')
	{
		c=str3[2];
	}

if(str3[4]=='x'||str3[4]=='y'||str3[4]=='z')
	{
		d=str3[4];
	}


	if(str4[2]=='x'||str4[2]=='y'||str4[2]=='z')
	{
		e=str4[2];
	}
if(str4[4]=='x'||str4[4]=='y'||str4[4]=='z')
	{
		f=str4[4];
	}

if((a=='x' || a=='z')&&(b=='x'|| b=='z'))
{   cleardevice();
			 settextstyle(7,HORIZ_DIR,1);
	outtextxy(x/7,y/2,"FROM THE ENTERED SET OF STATES A VALID");
	outtextxy(x/7,(y/2)+20,"AUTOMATA CANNOT BE FORMED");
	delay(3000);
}
else if((a=='y'||a=='z')&&(b=='y'||b=='z')&&(c=='x'||c=='y'||c=='z')&&(d=='x'||d=='y'||d=='z'))
			 {
			 goto again;
			 }
else if((c=='x' || c=='y')&&(d=='x'|| d=='y'))
{   cleardevice();

			 settextstyle(7,HORIZ_DIR,1);
	outtextxy(x/7,y/2,"FROM THE ENTERED SET OF STATES A VALID");
	outtextxy(x/7,(y/2)+20,"AUTOMATA CANNOT BE FORMED");
	delay(3000);
}

else
    {
again:cleardevice();
cout<<endl;
cout<<str1<<endl;
cout<<str2<<endl;
cout<<str3<<endl;
cout<<str4<<endl;
delay(1000);
line(50,240,90,240);
line(85,235,90,240);
line(90,240,85,245);

circle(120,240,25);
circle(320,240,25);
for(i=20;i<=25;i=i+5)
{
circle(520,240,i);
}

outtextxy(120,240,"X");
outtextxy(320,240,"Y");
outtextxy(520,240,"Z");

if((a=='x') && (b=='x'))
{
 delay(1000);
	ellipse(110,220,20,200,15,30);
line(127,205,124,212);     //left side
line(124,212,121,205);     //--"--
delay(500);
outtextxy(108,180,"0");
outtextxy(108,195,"1");
}
else if((a=='y')&&(b=='y'))
{
 delay(1000);
line(145,240,295,240);
line(290,235,295,240);   //right side
line(295,240,290,245);    //--"--
delay(500);
outtextxy(210,245,"1");
outtextxy(210,230,"0");
}
else if((a=='z')&&(b=='z'))
{
 delay(1000);
	arc(320,157,210,330,215);
	line(503,278,506,265);  //right side
line(506,265,494,270);  //--"--
delay(500);
outtextxy(305,360,"1");
outtextxy(305,375,"0");
}
else if((a=='x')&&(b=='y'))
{
 delay(1000);
ellipse(110,220,20,200,15,30);
line(127,205,124,212);     //left side
line(124,212,121,205);     //--"--
delay(500);
outtextxy(108,180,"0");
line(145,240,295,240);
line(290,235,295,240);   //right side
line(295,240,290,245);    //--"--
delay(500);
outtextxy(210,245,"1");
}
else if((a=='y')&&(b=='x'))
{ delay(1000);
ellipse(110,220,20,200,15,30);
line(127,205,124,212);     //left side
line(124,212,121,205);     //--"--
delay(500);
outtextxy(108,195,"1");
line(145,240,295,240);
line(290,235,295,240);   //right side
line(295,240,290,245);    //--"--
delay(500);
outtextxy(210,230,"0");
}
else if((a=='y')&&(b=='z'))
{ delay(1000);
	line(345,240,495,240);
	line(490,235,495,240); //right side
line(495,240,490,245);   //--"--
delay(500);
outtextxy(425,245,"0");
arc(320,157,210,330,215);
line(503,278,506,265);  //right side
line(506,265,494,270);  //--"--
delay(500);
outtextxy(305,360,"1");
}
else if((a=='z')&&(b=='y'))
{ delay(1000);
arc(320,157,210,330,215);
line(503,278,506,265);  //right side
line(506,265,494,270);  //--"--
delay(500);
outtextxy(305,360,"0");
line(345,240,495,240);
	line(490,235,495,240); //right side
line(495,240,490,245);   //--"--
delay(500);
outtextxy(425,245,"1");
}
else if((a=='x')&&(b=='z'))
{ delay(1000);
ellipse(110,220,20,200,15,30);
line(127,205,124,212);     //left side
line(124,212,121,205);     //--"--
delay(500);
outtextxy(108,180,"0");
arc(320,157,210,330,215);
line(503,278,506,265);  //right side
line(506,265,494,270);  //--"--
delay(500);
outtextxy(305,360,"1");
}
else if((a=='z')&&(b=='x'))
{ delay(1000);
ellipse(110,220,20,200,15,30);
line(127,205,124,212);     //left side
line(124,212,121,205);     //--"--
delay(500);
outtextxy(108,180,"1");
arc(320,157,210,330,215);
line(503,278,506,265);  //right side
line(506,265,494,270);  //--"--
delay(500);
outtextxy(305,360,"0");
}
else
{ delay(1000);
printf("Invalid");
}


if((c=='x')&&(d=='x'))
{ delay(1000);
	arc(220,265,30,150,100);
	line(133,205,133,215); //left side
line(133,215,140,213); // --"--
delay(500);
outtextxy(215,150,"1");
outtextxy(215,175,"0");
}
else if((c=='y')&&(d=='y'))
{ delay(1000);
	ellipse(320,210,350,190,10,30);
line(313,210,310,216);
line(310,216,306,210);
delay(500);
outtextxy(317,187,"0");
outtextxy(317,167,"1");
}
else if((c=='z')&&(d=='z'))
{ delay(1000);
	line(345,240,495,240);
	line(490,235,495,240); //right side
line(495,240,490,245);   //--"--
delay(500);
outtextxy(425,230,"1");
outtextxy(425,245,"0");
}
else if((c=='x')&&(d=='y'))
{ delay(1000);
	arc(220,265,30,150,100);
line(133,205,133,215); //left side
line(133,215,140,213); // --"--
delay(500);
outtextxy(215,175,"0");
ellipse(320,210,350,190,10,30);
line(313,210,310,216);
line(310,216,306,210);
delay(500);
outtextxy(317,167,"1");

}
else if((c=='x')&&(d=='z'))
{ delay(1000);
arc(220,265,30,150,100);
line(133,205,133,215); //left side
line(133,215,140,213); // --"--
delay(500);
outtextxy(215,175,"0");
arc(320,157,210,330,215);
line(503,278,506,265);  //right side
line(506,265,494,270);  //--"--
delay(500);
outtextxy(305,360,"1");
}

else if((c=='y')&&(d=='x'))
{ delay(1000);
ellipse(320,210,350,190,10,30);
line(313,210,310,216);
line(310,216,306,210);
delay(500);
outtextxy(317,187,"0");
arc(220,265,30,150,100);
line(133,205,133,215); //left side
line(133,215,140,213); // --"--
	delay(500);
	outtextxy(215,175,"1");
}
else if((c=='y')&&(d=='z'))
{ delay(1000);
ellipse(320,210,350,190,10,30);
line(313,210,310,216);
line(310,216,306,210);
delay(500);
outtextxy(317,187,"0");
arc(420,215,210,330,100);
line(503,278,506,265);  //right side
line(506,265,494,270);  //--"--
delay(500);
outtextxy(415,320,"1");
}
else if((c=='z')&&(d=='x'))
{ delay(1000);
	arc(420,265,30,150,100);
line(507,205,506,215); //right side
line(506,215,497,210);  //--"--
delay(500);
outtextxy(417,150,"0");
arc(220,265,30,150,100);
line(133,205,133,215); //left side
line(133,215,140,213); // --"--
delay(500);
outtextxy(215,150,"1");
}
else if((c=='z')&&(d=='y'))
{ delay(1000);
	line(345,240,495,240);
	line(490,235,495,240); //right side
line(495,240,490,245);   //--"--
delay(500);
outtextxy(425,245,"0");
ellipse(320,210,350,190,10,30);
line(313,210,310,216);
line(310,216,306,210);
delay(500);
outtextxy(317,167,"1");


}
else
{ delay(1000);
printf("Invalid");

}


if((e=='x')&&(f=='x'))
{ delay(1000);
	arc(320,323,30,150,215); //huge arc up
line(133,205,133,215); //left side
line(133,215,140,213); // --"--
delay(500);
outtextxy(305,97,"1");
outtextxy(305,112,"0");
}
else if((e=='y')&&(f=='y'))
{ delay(1000);
	arc(420,265,30,150,100);
line(335,205,334,215);   //left side
line(334,215,342,213);   //--"--
delay(500);
outtextxy(417,175,"1");
outtextxy(417,150,"0");
}
else if((e=='z')&&(f=='z'))
{ delay(1000);
	ellipse(533,220,340,160,15,30);
line(522,205,519,212);
line(519,212,515,205);
delay(500);
outtextxy(530,180,"1");
outtextxy(530,195,"0");
}
else if((e=='x')&&(f=='y'))
{ delay(1000);
	arc(320,323,30,150,215); //huge arc up
line(133,205,133,215); //left side
line(133,215,140,213); // --"--
delay(500);
outtextxy(305,112,"0");
arc(420,265,30,150,100);
line(335,205,334,215);   //left side
line(334,215,342,213);   //--"--
delay(500);
outtextxy(417,175,"1");
}
else if((e=='x')&&(f=='z'))
{ delay(1000);
	arc(320,323,30,150,215); //huge arc up
line(133,205,133,215); //left side
line(133,215,140,213); // --"--
delay(500);
outtextxy(305,112,"0");
ellipse(533,220,340,160,15,30);
line(522,205,519,212);
line(519,212,515,205);
delay(500);
outtextxy(530,180,"1");
}
else if((e=='y')&&(f=='x'))
{ delay(1000);
	arc(420,265,30,150,100);
line(335,205,334,215);   //left side
line(334,215,342,213);   //--"--
delay(500);
outtextxy(417,150,"0");
arc(320,323,30,150,215); //huge arc up
line(133,205,133,215); //left side
line(133,215,140,213); // --"--
delay(500);
outtextxy(305,112,"1");
}
else if((e=='y')&&(f=='z'))
{ delay(1000);
arc(420,265,30,150,100);
line(335,205,334,215);   //left side
line(334,215,342,213);   //--"--
delay(500);
outtextxy(417,150,"0");
ellipse(533,220,340,160,15,30);
line(522,205,519,212);
line(519,212,515,205);
delay(500);
outtextxy(530,180,"1");
}
else if((e=='z')&&(f=='x'))
{ delay(1000);
ellipse(533,220,340,160,15,30);
line(522,205,519,212);
line(519,212,515,205);
delay(500);
outtextxy(530,180,"0");
arc(320,323,30,150,215); //huge arc up
line(133,205,133,215); //left side
line(133,215,140,213); // --"--
delay(500);
outtextxy(305,112,"1");
}
else if((e=='z')&&(f=='y'))
{ delay(1000);
	ellipse(533,220,340,160,15,30);
line(522,205,519,212);
line(519,212,515,205);
delay(500);
outtextxy(530,180,"0");
arc(420,215,210,330,100);
line(335,278,333,265);   //left side
line(333,265,345,270);   //--"--
delay(500);
outtextxy(415,320,"1");
}
else
{ delay(1000);
	printf("Invalid");
}
  getch();
 } ;
  cleardevice();
closegraph();



 end();
 }

 void end()
 {
	char c;
	 int gd=DETECT,gm,x,y;
	initgraph(&gd,&gm,"C:\\TC\\BGI");
       setbkcolor(2);
     //	cleardevice();
	x=getmaxx();
	y=getmaxy();
		       border();
		       setbkcolor(WHITE);
			 setcolor(6);
		      //	 cout<<"HELLO";

			 settextstyle(7,HORIZ_DIR,1);
	outtextxy(x/7,y/2,"DO YOU WANT TO CHANGE THE SET OF STATES??");
	outtextxy(x/7,(y/2)+20,"PRESS Y OR PRESS ANY KEY TO EXIT");

			 switch(getch())
			 {case 'y':change();
			 break;
			 default:
			 cleardevice();
			 setbkcolor(6);
			 setcolor(9);

			 settextstyle(5,HORIZ_DIR,8);
			 outtextxy(x/3,y/2,"Thank you");
			 break;
			 }

		   getch();



}

void border()
{
{
 setcolor(RED);
 int  left = 10;
 int  top = 10;
 int  right = getmaxx()-10;
 int  bottom = getmaxy()-15;
 rectangle(left,top,right,bottom);

}

}

void change()
{                     	int gd=DETECT,gm;


int a1,b1,c1,d1,e1,f1;
FILE *p;
	initgraph(&gd,&gm,"C:\\TC\\BGI");
cleardevice();
printf("Enter the states\n\n\n");
	printf("\t0\t1\n");
	printf("X\t");
	scanf("\t%c\t%c",&a1,&b1);
	printf("Y\t");
	scanf("\t%c\t%c",&c1,&d1);
	printf("Z\t");
	scanf("\t%c\t%c",&e1,&f1);
	p=fopen("input.txt","w");
	fprintf(p,"\t0\t1\n");
	fprintf(p,"X\t%c\t%c\n",a1,b1);
	fprintf(p,"Y\t%c\t%c\n",c1,d1);
	fprintf(p,"Z\t%c\t%c\n",e1,f1);
	outtextxy(10,150,"Loading");
	delay(2000);
	printf("\n\nPress Enter...");
	getch();
       fclose(p);
	proj();
}
void instr()
{
cleardevice();
setbkcolor(BLACK);
setcolor(WHITE);
printf("\n\n#############################################################\n");
printf("## In this mini project you will be able to draw a finite  ## \n## automata on the set of states you are giving as input.  ##\n");
printf("#############################################################\n");
printf("\n\nPRESS ENTER TO CONTINUE") ;
getch();
//proj();



}