#include<iostream.h>
#include<conio.h>
#include<stdlib.h>
#include<stdio.h>
#include<time.h>
#include<fstream.h>
#include "HEAD.H"

void welcome() //Disp welcome screen
{
	int i,j;
	textcolor(10);
	for(i=1;i<80;i++)  //topmost line
	{
		gotoxy(i,1);	//fn gotoxy() in conio.h
		cprintf("*");
		for(j=0;j<=32500;j++);
	}
	for(i=1;i<25;i++)  //the line on the right of the screen
	{
		gotoxy(79,i);
		cprintf("|\n");
		for(j=0;j<=32500;j++);
	}
	for(i=79;i>=1;i--)     //the bottom lines
	{
		gotoxy(i,24);
		cprintf("*");
		for(j=0;j<=32500;j++);
	}
	for(i=23;i>0;i--)      //the leftmost line
	{
		gotoxy(1,i);
		cprintf("|");
		for(j=0;j<=32500;j++);
	}
//print the ascii images
	gotoxy(6,7);
	textcolor(14+BLINK);
	cprintf("WANT TO KNOW YOUR FUTURE?...");
	delay(1000);
	textcolor(12);
	gotoxy(68,4); cprintf(" %cWWWWW/",92);
	delay(1000);
	gotoxy(66,5); cprintf(" _|  o_o  |_");
	delay(1000);
	gotoxy(53,6); cprintf(" %cWWWWWWW/   (_   / %c   _)",92,92);
	delay(1000);
	gotoxy(51,7); cprintf(" _.'` o_o `'._   |  %c_/  |",92);
	delay(1000);
	gotoxy(50,8); cprintf(" (_    (_)    _)  : ~~~~~ :");
	delay(1000);
	gotoxy(52,9); cprintf(" '.'-...-'.'     %c_____/",92);
	delay(1000);
	gotoxy(52,10); cprintf("  (`'---'`)      [     ]");
	delay(1000);
	gotoxy(51,11); cprintf("     %c%c%c%c%c         %c%c%c%c%c",96,96,96,96,96,34,34,34,34,34);
	delay(1000);
	gotoxy(10,18);
	textcolor(7);
	cprintf("....Sri Sri 1008 Sri Baba at your Service!!!!...");
	gotoxy(49,23);cprintf("you are only a click away!!!!!!");
	getch();
	clrscr();
	textcolor(14);
	gotoxy(1,1); cprintf("Will I top the class?");
	delay(1000);
	textcolor(3);
	gotoxy(40,3);cprintf("WHEN WILL I COME OUT OF THIS PROBLEM?");
	delay(1000);
	textcolor(4);
	gotoxy(5,5);cprintf("what should i do to get AI(Plaque) ??");
	delay(1000);
	textcolor(5);
	gotoxy(40,7); cprintf("DOES SHE LOVE ME??");
	delay(1000);
	textcolor(6);
	gotoxy(1,9); cprintf("When Will CDA pass my claim??");
	delay(1000);
	textcolor(7);
	gotoxy(30,11); cprintf("HOW IS MY LIFE GOING TO BE??");
	delay(1000);
	textcolor(8);
	gotoxy(4,13);cprintf("Will i get my priorities Right?");
	delay(1000);
	textcolor(9);
	textcolor(11);
	gotoxy(1,15); cprintf("WILL I EVER UNDERSTAND MY SYLLABUS?");
	delay(1000);
	textcolor(3);
	gotoxy(40,17);cprintf("Is there any use working hard?");
	delay(1000);
	textcolor(4);
	gotoxy(40,19); cprintf("CHUTTI MILEGI KYA?");
	delay(1000);

	gotoxy(20,21);cprintf("million cases.....");
	delay(1000);
	textcolor(10);
	gotoxy(39,21);cprintf("thousand guesses.....");
	delay(1000);
	textcolor(11);
	gotoxy(20,22);cprintf("sure shot answer.....");
	delay(1000);
	textcolor(12);
	gotoxy(39,22);cprintf("is right here.....");
	delay(1000);
	textcolor(14+BLINK);
	gotoxy(20,24);cprintf("REMOVE THE FOG OF WAR FROM YOUR LIFE");
	textcolor(15);
	getch();
	clrscr();
}

void main()
{
	clrscr();
	bhakt b1;
	welcome();
	b1.det_read();
	b1.menu();
}
