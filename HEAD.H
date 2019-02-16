#include<iostream.h>
#include<conio.h>
#include<stdlib.h>
#include<stdio.h>
#include<time.h>
#include<fstream.h>

//Library created by Aditya Raman (github: )

/*
WORKING:
	Functions provided:
	1. Void delay(int)
		It provides delay for an amount of time depending on value
		of int argument supplied.
	2. Void scrolltxtop(char *)
		Prints the string supplied as an argument in an line typing
		animation e.g. one line at a time.

	Class provided:
	1. bhakt
		It has following methods:
		(a) void det_read()
			takes user input for all details reqd for further processing
		(b) void menu()
			Displays a menu of various functions available and handles all
			operations.

	Struct provided:
	1. loginfo
		Used to store personal details from user input.
*/

void delay(int x)	//fn for generating Delay
{
	int i,j;
	for(i=0;i<=x;i++)
	   for(j=0;j<=32500;j++);
}

void scrolltxtop(char *t)	//print text 1 line at a time
{
	while(*t!='\0')
	{
		printf("%c",*t);
		if(*t=='\n')	delay(10000);
		*t++;
	}
}

struct loginfo
{
	char name[50];
	char sex;
	int year,month,day;
};
// class defn starts
class bhakt
{
	struct loginfo a;
	char *text;
	char *fort[100];
	void details(char *a,char s,int y)	//name,sex,birth year
	{//write basic info on the screen
		gotoxy(55,3);printf("Name: %s",a);
		gotoxy(55,4);printf("Age=%d",(2019-y));
		gotoxy(55,5);printf("Sex=%c",s);
	}

	int zodmenu()
	{//writing menu screen
		int b;
		clrscr();
		textcolor(7);
		gotoxy(5,5);cprintf("-------------------------------------------------------------------");
		gotoxy(5,18);cprintf("-------------------------------------------------------------------");
		textcolor(15);
		gotoxy(20,7);printf("1.YOUR HORSCOPE");
		gotoxy(20,9);printf("2.LUCKY NUMBERS");
		gotoxy(20,11);printf("3.FORTUNES");
		gotoxy(20,13);printf("4.EXIT");
		gotoxy(37,24);printf("Enter any other key to restart the program.");
		gotoxy(20,16);printf("Enter Your Choice: ");
		cin>>b;
		return b;
	}

	void asciiaries()
	{//drawing the ascii art
		gotoxy(3,2);printf("Your horoscope sign is Aries-The Ram");
		gotoxy(6,3);printf(".-.   .-.");
		gotoxy(5,4);printf("(_  \\ /  _)");
		gotoxy(10,5);printf("|");
		gotoxy(10,6);printf("|\n\n");
	}


	void asciitaurus()
	{//drawing the ascii art
		gotoxy(3,2);printf("Your horoscope sign is Taurus-The Bull");
		gotoxy(6,3);printf(".     .");
		gotoxy(6,4);printf("'.___.'");
		gotoxy(6,5);printf(".'   `.");
		gotoxy(5,6);printf(":       :");
		gotoxy(5,7);printf(":       :");
		gotoxy(6,8);printf("`.___.'\n\n");
	}

	void asciigemini()
	{//drawing the ascii art
		gotoxy(3,2);printf("Your horoscope sign is Gemini-The Twins");
		gotoxy(5,3);printf("._____.");
		gotoxy(7,4);printf("| |");
		gotoxy(7,5);printf("| |");
		gotoxy(7,6);printf("| |");
		gotoxy(6,7);printf("_|_|_");
		gotoxy(5,8);printf("'     `\n\n");
	}

	void asciicancer()
	{//drawing the ascii art
		gotoxy(3,2);printf("Your horoscope sign is Cancer-The Crab");
		gotoxy(8,3);printf(".--.");
		gotoxy(7,4);printf("/   _`.");
		gotoxy(6,5);printf("(_) ( )");
		gotoxy(5,6);printf("'.    /");
		gotoxy(5,7);printf("  `--'\n\n");
	}

	void asciileo()
	{//drawing the ascii art
		gotoxy(3,2);printf("Your horoscope sign is Leo-The Lion");
		gotoxy(7,3);printf(".--.");
		gotoxy(6,4);printf("(    )");
		gotoxy(5,5);printf("(_)  /");
		gotoxy(9,6);printf("(_,\n\n");
	}

	void asciivirgo()
	{//drawing the ascii art
		gotoxy(3,2);printf("Your horoscope sign is Virgo-The Virgin");
		gotoxy(6,3);printf("_");
		gotoxy(5,4);printf("' `:--.--.");
		gotoxy(8,5);printf("|  |  |_");
		gotoxy(8,6);printf("|  |  | )");
		gotoxy(8,7);printf("|  |  |/");
		gotoxy(13,8);printf("(J\n\n");
	}

   void asciilibra()
   {//drawing the ascii art
		gotoxy(3,2);printf("Your horoscope sign is Libra-The Balance");
		gotoxy(10,3);printf("__");
		gotoxy(5,4);printf("___.'  '.___");
		gotoxy(5,5);printf("____________\n\n");
	}

   void asciiscorpio()
   {//drawing the ascii art
		gotoxy(3,2);printf("Your horoscope sign is Scorpius-The Scorpion");
		gotoxy(6,3);printf("_");
		gotoxy(5,4);printf("' `:--.--.");
		gotoxy(8,5);printf("|  |  |");
		gotoxy(8,6);printf("|  |  |");
		gotoxy(8,7);printf("|  |  |  ..,");
		gotoxy(14,8);printf("`---':");
	}

	void asciisaggitarius()
	{//drawing the ascii art
		gotoxy(3,2);printf("Your horoscope sign is Sagittarius-  The Archer");
		gotoxy(11,3);printf("...");
		gotoxy(11,4);printf(".':");
		gotoxy(9,5);printf(".'");
		gotoxy(5,6);printf("`..'");
		gotoxy(5,7);printf(".'`.\n\n");
	}

	void asciicapricorn()
	{//drawing the ascii art
		gotoxy(3,2);printf("Your horoscope sign is Capricorn-  The Goat");
		gotoxy(13,3);printf("_");
		gotoxy(5,4);printf("\\      /_)");
		gotoxy(6,5);printf("\\    /`.");
		gotoxy(7,6);printf("\\  /   ;");
		gotoxy(8,7);printf("\\/ __.'\n\n");
	}

	void asciiaquarius()
	{//drawing the ascii art
		gotoxy(3,2);printf("Your horoscope sign is Aquarius-The Water Bearer");
		gotoxy(5,3);printf("..-\"-._.-\"-._.-");
		gotoxy(5,4);printf("..-\"-._.-\"-._.-\n\n");
	}

	void asciipisces()
	{//drawing the ascii art
		gotoxy(3,2);printf("Your horoscope sign is Pisces-The Fishes");
		gotoxy(5,3);printf("`-.    .-'");
		gotoxy(8,4);printf(":  :");
		gotoxy(6,5);printf("--:--:--");
		gotoxy(8,6);printf(":  :");
		gotoxy(5,7);printf(".-`    `-.\n\n");
	}

	void aries(int y,char *a, char s)	//year,name,sex
	//about yourself, lucky numbers,fortunes
	{
		clrscr();
		details(a,s,y);
		asciiaries();
		text="\n*  You have unusually strong willpower and great obstinancy of purpose"
			 "\n*  You are born to be fighter in every sense of the world"
			 "\n*  You also have the greatest ability as organizer on a large scale. You find yourself as the organizers of big schemes or as the heads of big businesses, and also in the organization and development of countries."
			 "\n*  You seem naturally to resent all criticism, and the only way to offset this in you is by quiet logic, reason, and proof."
			 "\n*  These people are usually independent in everything you do."
			 "\n*  The lower type of this sign will stick at nothing to accomplish your purpose. The higher type are good masters, but at the same time severe in discipline and more or less unbending in everything you expect from other people."
			 "\n*  You have a distinct desire to peer into the future, perhaps because you are impatient for things to develop."
			 "\n*  You are inclined to prophesy what will take place, and are often succeed in that."
			 "\n*  As a general rule,you suffer a great deal through your affections; you seldom understand women, and make lots of serious mistakes in your relations with you."
			 "\n*  You are happy only at moments when you are absolutely absorbed with your work and manage to overcome of obstacles."
			 "\n*  You get through life without receiving cuts, wounds, or blows to the head, either from accidents or violence."
			 "\n*  Mars is the Aries' ruling planet.It makes you to have an active life, constantly giving you the reserve of energy. That makes you careless, unruly, ambitious and competitive."
			 "\n*  This sign's place in the horoscope - first - and the people of this sign also want to be first in all ."
			 "\n*  Aries is a very much self-confident sign."
			 "\n*  Aries' symbol - is a ram- an animal, which tries to get everything by impact of a head, and everyone, who ever dealed with people who's sign is the Aries knows, that you go directly to your purpose as persistently as the rams."
			 "\n*  You will find your more lasting friendships and affections with those born on your own period or between July 21 and August 20-27, and from November 21 to December 20-27; and also from the centre of your triangle, September 21 to October 20-27."
			 "\n*  You sould have more time to sleep than almost anyone else."
			 "\n*  You usually overwork your brains, and are inclined to suffer from headache, trouble with the eyes and other things concerned the head."
			 "\n*  You are liable to get cuts and wounds in the head, and you usually run danger from fire."
			 "\n*  You usually demand a constant medical attention."
			 "\n*  The most harmonious color for you is all shades of red -crimson, rose, and pink, but if you are ill- all shades of blue and violet are most soothing and beneficial to you."
			 "\n*  Your birth stones are rubies, garnets, and bloodstones."
			 "\n*  It is really important for you to do everything in your own way, and if you are intervened with other people you generally loose the shapes of the main purpose, step back and let the other person take your place."
			 "\n*  You are unhappy in your domestic life. It is very difficult for such people to meet a member of the opposite sex who would understand you, and if opposition does not upset you from this point it usually does through your children."
			 "\n*  You deeply, fervently and strongly desire for affection and sympathy, more than anything else, and this is generally the rock on which you are finally wrecked if you have not the good fortune to meet your right affinities."
			 "\n*  As far as material success or power is concerned, there are no heights to which persons born in this sign wouldn’t be able to. Success, however, is not making you feel really happy and satisfied."
			 "\n*  You are inclined to lack caution, being by nature impulsive and quick in thought and action."
			 "\n*  You are enormously ambitious, as a rule you succeed in life and gain money and position.";
	}
	void taurus(int y,char *a, char s)//year,name,sex
	//about yourself, lucky numbers,fortunes
	{
		clrscr();
		details(a,s,y);
		asciitaurus();
		text="\n*  You tend to be very patient, practical and dedicated."
			 "\n*  You are usually very cautious when dealing with people, life and money."
			 "\n*  You have a curious power of dominating others, even when not conscious of trying to do so."
			 "\n*  You are extremely faithful, with a strong need for security and a settled routine."
			 "\n*  You are very earthy. You can also be highly romantic and sensitive when it comes to love."
			 "\n*  You have great power of endurance, both physical and mental, and can pass through enormous strains of fatigue as long as the excitement or determination lasts."
			 "\n*  You make wonderful hosts and hostesses."
			 "\n*  You have great taste about food."
			 "\n*  In the management of your houses you can make much out of little."
			 "\n*  You always fight in the open, for you hate trickiness, double-dealing, or deceit."
			 "\n*  You are easily influenced by your surroundings, and become morbid and morose when trying to live under uncongenial conditions."
			 "\n*  You are also too easily misled by your emotions, sensations, or affections."
			 "\n*  You are jealous in your disposition.Your jealousy often drives you into acts of violence or sudden exhibition of temper, which you bitterly regret when the storm is over."
			 "\n*  You at your best are typically strong and silent"
			 "\n*  You often appear ignorant and willfully obstinate to others."
			 "\n*  You have an innate sense of harmony, rhythm and color, and often are very successful in music, poetry and art."
			 "\n*  You have an ability to become the most faithful, loyal friends."
			 "\n*  You also make good, patient nurses and healers, and almost all have a keen love of gardening and flowers."
			 "\n*  You are warm, gentle, passionate and friendly person, though you never show it."
			 "\n*  You perfectly know what you want and persistently work to achieve this purpose."
			 "\n*  It is difficult for you to understand other people."
			 "\n*  You are usually friendly, though sometimes and is slightly boring because of the restraint and reticence."
			 "\n*  You make long relationships with other zodiacs"
			 "\n*  You are endowed with a splendid constitution"
			 "\n*  You suffer with all things that affect the throat, nasal cavities"
			 "\n*  You suffer from dieseas related to upper part of the lungs."
			 "\n*  Most favorable colors for you are all shades of blue."
			 "\n*  Red is an exciting color for you, and you should use it as little as possible."
			 "\n*  The birth stones for you are emeralds, turquoises, and lapis lazuli"
			 "\n*  You often become excellent director, have good business intuition."
			 "\n*  You are generally considered richer than you really are, as you always dress well and look well."
			 "\n*  You are governed by your sensations and by your loving nature, but affection has a greater hold on you than passion."
			 "\n*  You are warm and sensual, with an appreciation of the fine things in life."
			 "\n*  You are motivated by a need for security; this sign is good for business matters and can be trusted to carry things through with absolute care."
			 "\n*  You are very strong-willed and often quite creative."
			 "\n*  The Moon is exalted in Taurus, giving success with matters to do with the public and, combined with the influence of Venus, a passionate nature endowed with a strong sense of loyalty and fidelity."
			 "\n*  You are kind and generous with friends, with whom you develop an unspoken rapport."
			 "\n*  If you are in love, you are generous to the last degree, and will consider no sacrifice too great for the person you care for."
			 "\n*  If you are enemy, you will fight with the most determined obstinacy.";
	}
	void gemini(int y,char *a, char s)      //year,name,sex
	//about yourself, lucky numbers,fortunes
	{
		clrscr();
		details(a,s,y);
		asciigemini();
		text="\n*  You are widely known for your dual personalities and ability to change mood from moment to moment."
					 "\n*  Although you hate to be tied down, you make lively, entertaining and romantic partners, even if you can be rather fickle if bored or unhappy."
					 "\n*  The twin sides of your nature are perpetually pulling in opposite directions."
					 "\n*  Your brains are subtle and brilliant but you usually \"lack continuity of purpose\"."
					 "\n*  Of all people you are the most difficult to understand, in temperament you are hot and cold almost at the same moment."
					 "\n*  Once you are attracted to people, you have to ensure that you are not dull or mundane."
					 "\n*  You will no doubt spend ages chatting to anyone about every subject under the sun, just to keep feeding your ever active and inquisitive mind."
					 "\n*  If taken as you are, in your own moods, you are the most delightful people imaginable."
					 "\n*  You believe you are truthful, constant, faithful, and so you may be at the moment, but every moment to you has a separate existence."
					 "\n*  You have an ability to see quickly the weak points in those you meet, and can reduce all to nothing by wit, sarcasm, or mimicry."
					 "\n*  You are great talker and usually very much in demand socially because you are so entertaining."
					 "\n*  Gemini is the life of the party."
					 "\n*  You often succeed the best, as far as money is concerned, but your more suitable career is generally that which requires diplomacy, tact, and finesse."
					 "\n*  You often make successful gamblers and company promoters of \"get-rich-quick\" schemes."
					 "\n*  Either type make hosts of friends and are kind-hearted and generous to the person who fills your thoughts at the moment, but \"out of sight, out of mind\" explains your fits of \"forgetfulness\" as nothing else can."
					 "\n*  In all matters of affection you are human puzzles."
					 "\n*  You can love passionately and yet be inconstant at the same moment"
					 "\n*  It is only your shield of diplomacy and exquisite tact that keeps you from often making a mess of your lives."
					 "\n*  Mercury is \" the winged envoy of the gods\" influences even our intellectual process. Therefore Twins who are constantly ruled by this planet, are very intelligence and frequently surpass other people in this area."
					 "\n*  The twins are the people of mood. In bad mood you frequently act in a silly, unreasonable way, and regret about it later ."
					 "\n*  The good qualities which people born under the sign Gemini possess are: ease-going ,cheerful, helpful ,self-confident and calm."
					 "\n*  The duty of the Twins - is to use what you possess as correct as it possible to achieve your high purposes."
					 "\n*  Both types make your most lasting friendships with people born either in your own period of the year or from September 21 to October 20-27, January 21 to February 18-27."
					 "\n*  You are more inclined to suffer from what concerns the nervous system than anything else"
					 "\n*  Both men and women are likely to have delicacy with the digestive organs."
					 "\n*  You often have chest trouble."
					 "\n*  Your colors are silver, glistening white, and all shimmering things."
					 "\n*  You love with one side of your nature and you are often critical or dislike with the other people."
					 "\n*  Your sharp wit and excellent powers of observation make you a good raconteur"
					 "\n*  You have a tendency to exaggerate which can cause trouble with your relationships."
					 "\n*  You are usually excellent in diplomacy, and dazzle your listeners by, your wit and brilliancy, but you usually leave you no wiser than you were at the start."
					 "\n*  It is difficult even for you to understand what you want to achieve."
					 "\n*  At heart you are ambitious for social position; but when obtained you have already tired of it, and are ready to go in for something else or for something totally opposite."
					 "\n*  Being natural communicator you do not suffer fools gladly";
	}
	void cancer(int y,char *a, char s)      //year,name,sex
	//about yourself, lucky numbers,fortunes
	{
		clrscr();
		details(a,s,y);
		asciicancer();
		text="\n*  You are easily hurt by the slights of others."
				  "\n*  You are very complex, sometimes appearing extremely strong and at other times to be as vulnerable as a child."
				  "\n*  You are remarkably good at accumulating things; indeed, you can be unwilling to throw anything out, even relationships that have passed your use-by date."
				  "\n*  You are generally over-anxious in financial matters, and make great efforts to gather in money."
				  "\n*  You have unusual ups and downs in your early life and so you are compelled to work to keep ahead, but once you get on your feet you keep there."
				  "\n*  If channeled in the right direction, your enormous sensitivity can become a great source of strength."
				  "\n*  Once you overcome your touchiness and master your turbulent emotions, your intellect and imagination enable you to become a success in almost anything you undertake."
				  "\n*  Your intuitions are reliable and should be trusted."
				  "\n*  You are generally gifted with strong imaginations."
				  "\n*  You are seldom surrounded by happiness at home matters, no matter how successful you may appear in the eye of the world."
				  "\n*  You have deep love for what you call \"\n*  Your own people,\" for family customs and for tradition."
				  "\n*  You are very timid and are afraid of refusal more, than all other marks even summarized together."
				  "\n*  You are quite ambitious."
				  "\n*  You advance slow towards your aim, and then at the most unexpected moment you grasp the victim and just like a cancer strong holding it and do not let off."
				  "\n*  You create an attractive facade of naivety that compels the woman to make the first step."
				  "\n*  You are the one to whom others turn with problems, worries and life choice concerns."
				  "\n*  Despite your ability to support and nurture your pals, it is pretty difficult for you to make friends."
				  "\n*  You take friendship seriously and don't bother to indulge superficial associations."
				  "\n*  You are chiefly inclined towards gastric troubles."
				  "\n*  You must be extremely careful in regard to shellfish and such things."
				  "\n*  Inflammatory diseases, such as rheumatism, are likely to attack you."
				  "\n*  You may have trouble with the legs and feet."
				  "\n*  Physical fitness or sports activities can become important ways for you to work out emotional stress."
				  "\n*  Team sports are fun, for you can adopt team members as part of an extended family."
				  "\n*  The colors most in harmony for you are all shades of green, and cream and white."
				  "\n*  The birth stones most favorable for you are pearls, diamonds, opals, crystals and moonstones."
				  "\n*  It is very easy for you to become excellent artists, writers, composers, or musicians."
				  "\n*  At heart you are romantic and of a very loving and affectionate disposition."
				  "\n*  You are perhaps the most sensitive natures from any other class of people and if aren’t recognized you quickly give up or get depressed and melancholy."
				  "\n*  You require encouragement and appreciation."
				  "\n*  Your deep sensitivity presents you with valuable and illuminating intuitions, especially regarding those you care for."
				  "\n*  You often make excellent psychics, and usually have a yearning after the mysterious."
				  "\n*  You should never marry young, for your nature seems to change at different stages of life."
				  "\n*  You may reach very high exalted positions."
				  "\n*  In your home life you usually go through a great deal of trouble.";
	}
	void leo(int y,char *a, char s)    //year,name,sex
	//about yourself, lucky numbers,fortunes
	{
		clrscr();
		details(a,s,y);
		asciileo();
		text="\n*  You always aim to get above the common herd of humanity."
					"\n*  You are naturally attracted to strong personalities."
					"\n*  You will forgive any fault in the people you like so long as you have individuality and purpose."
					"\n*  You are usually generous, kind, and openhearted."
					"\n*  You forgive easily and never hold a grudge."
					"\n*  You are very much attuned to the life giving properties of our Sun itself."
					"\n*  You are typically flamboyant and generous with tremendous charm and a magnanimous spirit."
					"\n*  You are overflowing with sympathy, and are generally generous to a fault."
					"\n*  You feel isolated and lonely in life, and if not actively employed in some work or purpose you become melancholy and despondent."
					"\n*  You are natural leader and chief."
					"\n*  You don’t easily become friends with other horoscopes"
					"\n*  You are inclined to suffer from headache, trouble with the eyes and other things concerned the head."
					"\n*  You are liable to get cuts and wounds in the head, and you usually run danger from fire."
					"\n*  You are natural leader and chief.In reality the supervising position is what you aspire to."
					"\n*  You are really intelligent and magnetic. That fact attracts others, but you should not try to dominate everyone."
					"\n*  Your astrological symbol \"Lion\" is considered to be the king of animals. But, as well as all governors, that people should learn to wear the crown modestly. you should remember your large sin - vanity."
					"\n*  You are quite a bit choosy with friends."
					"\n*  You are best in a one-to-one friendship where your ego is less likely to intrude upon the relationship."
					"\n*  You can find your most lasting friendships with people born in your own period or from March 21 to April 19-27 and, strange to say, all those people who were born on the 1st, 10th, 19th, or 28th of any month."
					"\n*  Your most suitable colors are all shades of yellow, orange, pale green, and white."
					"\n*  The birth stones for this period are topazes, amber, and rubies."
					"\n*  You are usually lucky in money matters, often having money given to you from unthought-of sources."
					"\n*  You crave love above all, and this is the one thing you seldom get."
					"\n*  You have the power to inspire others, and as leaders like Napoleon, born in this Sign."
					"\n*  You have an ability to lead your men through fire or death."
					"\n*  You usually have an extremely independent spirit; you detest control or being dictated to."
					"\n*  You have great tenacity of purpose and will power and if once you put your mind on some plan, purpose or position, you usually reach your goal in spite of every difficulty or obstacle."
					"\n*  Though full of ambition and enthusiasm, you have to admit to a lazy streak and, given the opportunity, will take the easy way out, especially when a situation offers little fun or glory."
					"\n*  You are usually very patient and long-suffering, but if once roused, you know no fear.";
	}
	void virgo(int y,char *a, char s)       //year,name,sex
	//about yourself, lucky numbers,fortunes
	{
		clrscr();
		details(a,s,y);
		asciivirgo();
		text="\nThe emblem of Virgo, a virgin holding sheaves of wheat in her hands symbolizes wisdom, garnered in the fields of experience."
					"\n*  You are shy and idealistic."
					"\n*  You are quick thinking and observant."
					"\n*  You define pure modesty."
					"\n*  You can't bear to be taken care of, you prefer to take care of others."
					"\n*  You are/will be successful in life."
					"\n*  You have keen, good intellects, are very discriminating about those with whom you associate."
					"\n*  In all business matters you have good judgment, and are not easily imposed upon or deceived."
					"\n*  You are usually materialistic in your views of life."
					"\n*  You analyze and reason everything from your own way of thinking outwards."
					"\n*  You attracted to only that knowledge that can be applied usefully."
					"\n*  You will happily share information with anyone, if it confirms your own usefulness in the world."
					"\n*  You can become good literary critics, being quick to see the weak points."
					"\n*  You become critical with yourself as well as with circumstances, due to the effect of disappointing situations."
					"\n*  You have the strongly advanced analytical mind and all the time trying to glue labels on everything you see."
					"\n*  You have sharp feelings of taste, time, hearing and sense of smell."
					"\n*  You are pure and sinless."
					"\n*  Your heir amazing abilities to observe allow you to see all the human lacks."
					"\n*  Usually you do not like everything that you see, and you withdraw."
					"\n*  You have difficulty making friends."
					"\n*  You won't make the first step of friendship until you feel absolutely comfortable with people."
					"\n*  You can find your most lasting friendships with those born in your own Sign, also from April 20 to May 20-27."
					"\n*  You are less liable to diseases than persons born in any other part of the year."
					"\n*  You are always imagining yourself to have every illness that you may happen to read about."
					"\n*  You are very refined in your tastes as far as food is concerned, and must have things nicely put before you or you will lose your appetites."
					"\n*  You make an effort to stay physically fit and you don't mind repetitive exercise routines."
					"\n*  You enjoy tennis, racquetball, swimming, sailing, fishing, and biking, even though athletically you are not overly competitive."
					"\n*  You are extremely sensitive to your surroundings; the least disharmony or annoyance affects your nervous system and upsets your digestive organs."
					"\n*  You have a tendency to have chest trouble, and to suffer from neuritis in the shoulder and arms."
					"\n*  If badly mated, or living under inharmonious marriage conditions, you easily fall into ill health or get extremely despondent."
					"\n*  You should never drink alcohol, as it seems to be more a poison to you than to any ether class."
					"\n*  Your most suitable colors are all very pale shades and silvery, shimmering materials."
					"\n*  The birth stones for you are emeralds, diamonds and pearls."
					"\n*  You are extremely fond of harmony in your surroundings, have excellent taste about your house and dress, and always want things in good taste, and elegant."
					"\n*  You are usually fastidious about your personal appearance."
					"\n*  You have a great respect for rank and position."
					"\n*  You are great supporter of the law and the law's decisions."
					"\n*  You usually develop this skill to improve yourself and your surroundings as you place great pride in tangible achievements."
					"\n*  You may spend part of your life heading off on detours and then suddenly emerge as someone with a remarkable sense of direction."
					"\n*  You can adjust easily to change once you find a way of fitting the new situation into your routine."
					"\n*  You are inclined to become wrapped up in yourself and your own ideas, and often become selfish in the close pursuit of your aims."
					"\n*  You are more capable of going to extremes in good and evil than any other type."
					"\n*  If you develop a love for money you will stick at nothing to acquire it, and this type is often considered cunning and crafty at the expense of others."
					"\n*  In love you are the most difficult to understand."
					"\n*  For you love is not dramatic, emotional, or sentimental."
					"\n*  Love for you is devotion and will include love of family, friends, and those less fortunate than he or she."
					"\n*  There is no pretense involved in how you act or what you say."
					"\n*  Marriage is a major commitment; you value your union as both a love relationship and a working partnership."
					"\n*  A warm relationship brings out the best in you because basically you are kind, devoted and very loyal."
					"\n*  Disappointment can harden you into a cynic and a skeptic.";
	}
	void libra(int y,char *a, char s)       //year,name,sex
	//about yourself, lucky numbers,fortunes
	{
		clrscr();
		details(a,s,y);
		asciilibra();
		text="\n*  You are rarely lazy."
					 "\n*  You work hard, and also demand that your partners work just as hard."
					 "\n*  You have a strong sense of justice and fair play."
					 "\n*  It is pretty unusual for you to express anger, but when you do it is usually a storm."
					 "\n*  You are extremely positive and decisive in all your thoughts and actions."
					 "\n*  You have great foresight and intuition."
					 "\n*  You are generally seen at your best when acting on first impressions."
					 "\n*  You are usually in control of fear and look calm, collected, and in charge of the situation."
					 "\n*  You are good natured and loving, you enjoy talking to people."
					 "\n*  You can be very attentive listener."
					 "\n*  You are often very psychic and would make very devout spiritualists, theosophists, and occultists. "
					 "\n*  You have the desire to reason out everything that your love of exact proof usually overwhelms your psychic powers."
					 "\n*  You are often very successful as speculators."
					 "\n*  You have little regard for the value of money."
					 "\n*  You fall in love, and start thinking of marriage."
					 "\n*  You seldom find happiness in marriage."
					 "\n*  You appear to weigh and balance matters too much."
					 "\n*  You invariably give back in kind what you have been given."
					 "\n*  You are really successful in making large circles of friends and acquaintances."
					 "\n*  You are the sensitive persons who appreciate good manners, harmless wit."
					 "\n*  You are very social."
					 "\n*  You make good friends and great counselors."
					 "\n*  You love giving parties."
					 "\n*  You have talent for making people feel at ease."
					 "\n*  You are inclined to suffer most from nerves and depression of spirits."
					 "\n*  You suffer from pains in the lower back and kidneys."
					 "\n*  You usually suffer from severe headaches."
					 "\n*  It isn’t healthy for you to eat too-much sugary foods."
					 "\n*  All shades of blue, violet, purple and mauve are more suitable colour for you."
					 "\n*  The opal and the pearl are your birthstones."
					 "\n*  You values peace at all costs, and very fair minded."
					 "\n*  People like being around you."
					 "\n*  You will seek for a compromise at events of dispute."
					 "\n*  You are always trying mentally to balance things and get an even judgment."
					 "\n*  You are often found in public life, but it is with your innate desire to adjust the balance of things by making laws for the betterment of your fellows."
					 "\n*  You graciously accept praise for your achievements and will gladly give praise to others, when you deserve it."
					 "\n*  You are at your best in personal relationships."
					 "\n*  You strive for balance and harmony and are happiest when your environment is ordered and serene."
					 "\n*  You are very good at science."
					 "\n*  You would make an excellent doctor."
					 "\n*  You will become masters of some particular line of study more than as general practitioners."
					 "\n*  You are not reliable among people."
					 "\n*  You are often accused of being two faced."
					 "\n*  Beneath that charming exterior you are very self-centered, and insist on getting your own way."
					 "\n*  You are the most quintessential romantics among the zodiac."
					 "\n*  You have an idealistic view of love and togetherness.";
	}
	void scorpio(int y,char *a, char s)     //year,name,sex
	//about yourself, lucky numbers,fortunes
	{
		clrscr();
		details(a,s,y);
		asciiscorpio();
		text="\n*  You are usually filled with inherent contradiction."
					  "\n*  The best and the worst seem to make you your chosen battlefield."
					  "\n*  From spiritual and intellectual revelations, you want the edge on everybody else."
					  "\n*  You are usually extremely pore-minded, virtuous, and religious."
					  "\n*  You have great magnetic power, and as speakers appeal to the emotions and sentiments of your public more than to logic, but you sway your audiences as you choose."
					  "\n*  In dangerous situations and in sudden crises you remain cool and very determined."
					  "\n*  You drive yourself hard, and usually drive others unmercifully."
					  "\n*  You despise weakness in yourself or in others."
					  "\n*  Your worst fault is that you are too adaptable to the people with whom you come in contact."
					  "\n*  You readily develop unusual clairvoyant powers."
					  "\n*  You will often gain fame and distinction as writer, painter or poet."
					  "\n*  You are natural philosopher, deep student of nature."
					  "\n*  You observe and analyze other persons\' characters better than any other class."
					  "\n*  You often have to go through a great deal of trouble, difficulty and sooner or later success and fame nearly always find you."
					  "\n*  You have difficult or even tragical destiny."
					  "\n*  You may be doomed to live suffering as it was."
					  "\n*  You are self-destructive. It is a way of your development and realizations in this life."
					  "\n*  You have a few friends and expect loyalty from you."
					  "\n*  You tend to put on weight and are inclined to corpulence after reaching middle life."
					  "\n*  You generally suffer from headaches."
					  "\n*  You suffer from infections and fevers, along with various illnesses to do with what used to be called the secret parts."
					  "\n*  At later part of life, the heart is also inclined to be your weakest organ, and you should be careful not to overstrain it in exercise, or in work."
					  "\n*  The colors most suitable for you are all shades of crimson and blue."
					  "\n*  The birth stones for you are the turquoise, the ruby, and all red stones."
					  "\n*  You always lead double lives one for the eyes of the world and another for self."
					  "\n*  In business and politics you have clever ideas, but you are best as advisers of others."
					  "\n*  You usually excel in settling other people's quarrels and bringing enemies together to shake hands."
					  "\n*  You make more friends or have more enemies than those of other zodiac signs"
					  "\n*  Your strong personality carries you through like a resistless wave."
					  "\n*  You are interested in marriage and long-term commitment."
					  "\n*  Relationships are a kind of mystery for you so anyone involved with you must prepare for profound changes in yourself, your mysterious partner and the relationship itself."
					  "\n*  You should be encouraged to have ambition, for it is the one thing that will save you."
					  "\n*  You’ll make any sacrifice or deny yourself any pleasure, and so accomplish more work than any other class."
					  "\n*  You need to dominate relationships and rarely display your true feelings even at the most open and communicative moments."
					  "\n*  Although you may not intentionally set out to be mysterious, you manage to appear enigmatic anyway."
					  "\n*  You hate being crossed or manipulated, and can react to such treatment with sarcasm and vengefulness."
					  "\n*  If you are a man, you are inclined to be dogmatic, and expect to rule but your influence over women is so great that you are almost always forgiven."
					  "\n*  You generally become interested in occult matters.";
	}
	void saggitarius(int y,char *a, char s)     //year,name,sex
	//about yourself, lucky numbers,fortunes
	{
		clrscr();
		details(a,s,y);
		asciisaggitarius();
		text="\n*  You have an appetite for learning and travel."
					 "\n*  You prefer to be footloose and fancy free."
					 "\n*  You should become involved in a relationship you make it as enjoyable and as much fun as possible."
					 "\n*  You are very gregarious, but will be glad to find the time for that special relationship."
					 "\n*  You concentrate all your attention on whatever you are doing at the moment, and seem to see no other way but until your effort is made."
					 "\n*  You are often the great workers; you never seem to tire until you drop with fatigue."
					 "\n*  You would rather learn on your own, through travel and experience, than endure structured classroom environments and routine work assignments."
					 "\n*  You are usually successful in business, but never feel yourself confined to any one line."
					 "\n*  You follow the rule if you have been successful in some one thing there is no reason whatever that you must follow it through life."
					 "\n*  You have an open minded and intellectual curiosity."
					 "\n*  You are willing to learn about other people in an effort to understand you, while being trusting and open."
					 "\n*  You are high spirited and congenial."
					 "\n*  You are a gifted conversationalist, a wonderful storyteller, and a born entertainer."
					 "\n*  You love to make your spouse successful and will sacrifice everything to that end."
					 "\n*  You refuse to let the relationship get stale and always look for ways to bring excitement into the union."
					 "\n*  You do not hesitate to give an honest opinion, which can seem tactless."
					 "\n*  You venerate law and order and make the best of mothers."
					 "\n*  Even when successful, you never cease to be actively employed inactivity for that would mean despondency and an early decay."
					 "\n*  You show such qualities as reliance, affability and courtesy."
					 "\n*  You come along with the people easily, but it is much more difficult for you to become close friends."
					 "\n*  You usually love sports, nature, traveling , to learn and to win."
					 "\n*  You likel doing all in the company surrounded by close people."
					 "\n*  Your mind and body are both requiring constant intellectual, emotional and physical loading."
					 "\n*  You are the nicest friends in the zodiac."
					 "\n*  You are not a meet-for-coffee friend."
					 "\n*  You are doers and make the best travel companions."
					 "\n*  You will be more inclined to suffer from rheumatism than from any other disease."
					 "\n*  You will be likely to suffer from a delicacy of the throat and lungs, and skin troubles."
					 "\n*  Physical problems are apt to be the result of unrestricted diet or an over-indulgent pursuit of other pleasures."
					 "\n*  You may subject to an overpowering urge to gamble, which can be ruinous."
					 "\n*  Especially in your latter years, you suffer from the nervous system."
					 "\n*  Most suitable colors are all shades of violet and mauve and violet-purple."
					 "\n*  Most favorable birthstones are amethysts and sapphires."
					 "\n*  You are devoted to music."
					 "\n*  You find success in writing, publishing, TV, communications and enterprises."
					 "\n*  You are, however, when inclined to go to extremes in all things, and make sudden decisions, or change your minds rapidly."
					 "\n*  You may have regrets, but are too proud to acknowledge your error."
					 "\n*  One of your great difficulties lies within relationships."
					 "\n*  You are completely able to be faithful to two people at once."
					 "\n*  You always marry on impulse and regret it afterwards."
					 "\n*  You will often pass for models of married happiness even when you are the most wretched.";
	}
	void capricorn(int y,char *a, char s)       //year,name,sex
	//about yourself, lucky numbers,fortunes
	{
		clrscr();
		details(a,s,y);
		asciicapricorn();
		text="\n*  You are usually ambitious."
					 "\n*  You marked by a purposeful pursuit of your destiny."
					 "\n*  You have a sense of purpose and a great faith in your own ability."
					 "\n*  You are usually mentally strong."
					 "\n*  You generally aren’t understood by other people."
					 "\n*  You are fits as thinkers, reasoners, and usually successful in business or any form of government work."
					 "\n*  Your sign is a pushy Cardinal Earth sign ruled by Saturn, the planet of adversity."
					 "\n*  You are very independent and high-minded in all what you do."
					 "\n*  You detest being under the restraint of others."
					 "\n*  You will grind anything that gets in your way down to dust."
					 "\n*  Time is definitely on your side."
					 "\n*  You are leader in whatever you are engaged, or else you are inclined to lose your interest in what you do."
					 "\n*  You are serious individual."
					 "\n*  Beneath your reserve there is a sensitive and sympathetic person and anyone who needs a strong shoulder to lean on."
					 "\n*  Once you fall in love and commit, you’re typical unlikely to jeopardize the union."
					 "\n*  You place great importance on personal happiness."
					 "\n*  You are a mixed bag of both greatness and evil."
					 "\n*  You can be guileful and artful working everything out delicately."
					 "\n*  It is difficult to catch you red-handed."
					 "\n*  You always have the purpose, and trying to reach it, using all possible means."
					 "\n*  You sweep away absolutely everything working precisely, definitely and rigidly while getting to your target."
					 "\n*  You are loyal, kind, caring, and often very generous to friends."
					 "\n*  You gain something special from long-term friendships"
					 "\n*  You usually make the most solid and best friendships with people who are born in your own period."
					 "\n*  You are more inclined to suffer from rheumatism."
					 "\n*  You are more inclined to suffer from pains in the feet."
					 "\n*  You are more inclined to suffer from indigestion."
					 "\n*  All tones of grey, all ranges of violet and purple, and also black are most suitable colours for you."
					 "\n*  The birth stones for you are moon-stones, pearls, and amethysts."
					 "\n*  Your more striking characteristics is your subtle sense of humor."
					 "\n*  You have non-typical ideas of love, duty, and social position."
					 "\n*  You are often considered to be \"odd,\" and do not fit in easily with your neighbors or colleagues."
					 "\n*  Your basic concern is for security and to understand the feelings and needs of other people."
					 "\n*  You have a great sense of pride and will not forgive anyone who belittles or slights you."
					 "\n*  You are often excellent speakers."
					 "\n*  You may seem to be cold, you have warm hearts towards suffering."
					 "\n*  Fear is at the root of all your troubles."
					 "\n*  You worship intellectual, clever people."
					 "\n*  You rarely interfere with the affairs of others, but you’ll will never stand interference from others."
					 "\n*  Government or responsible positions of control and management of others is the best work for you."
					 "\n*  You are inclined to excite bitter opposition but bear up against it with a philosophic spirit."
					 "\n*  Your home and family life is very often a troubled one."
					 "\n*  You frequently feel \"lonely-hearted\" and misunderstood, even if it is not so."
					 "\n*  You respond well to domestic life because it proves stability.";
	}
	void aquarius(int y,char *a, char s)	//year,name,sex
	//about yourself, lucky numbers,fortunes
	{
		clrscr();
		details(a,s,y);
		asciiaquarius();
		text="\n*  You have great desire for material gain."
					   "\n*  You are tireless worker and are willing to work for what you want."
					   "\n*  You do not demand more than your fair share."
					   "\n*  You read character instinctively, and for this reason you \"see through\" people too easily to be really happy."
					   "\n*  You are not demonstrative in affection, but feel very deeply."
					   "\n*  You are usually high-strung, and your nerves are generally overwrought."
					   "\n*  You often lose control and then say or do things that you bitterly regret later."
					   "\n*  You are generally very active for the public good, and often give all you have to relieve the distress of others."
					   "\n*  You are interested in science's advanced achievements. For example - computers."
					   "\n*  You love to use any modern technical achievements."
					   "\n*  The inner world of people who were born under the sign of The Aquarias is very unstable."
					   "\n*  You are usually moody."
					   "\n*  Though you love everything new you can find there something old."
					   "\n*  You tend to collect friends the way some people put together an art collection."
					   "\n*  The typical AQUARIAN may have so many friends, but very few confidants."
					   "\n*  In real friendship or love you get on best with those born from May 21 to June 20, October 20 to 27, and, as a rule, with those who were born in November."
					   "\n*  You are inclined to suffer most from the stomach, often through the nerves of the stomach in some peculiar manner that is difficult to relieve with ordinary medicine."
					   "\n*  Bad circulation often troubles You and there is often some delicacy of the eyes."
					   "\n*  The most favorable colors for you are all shades of what are known as \"electric shades,\" as electric blues and electric grays."
					   "\n*  The birth stones for the period are sapphires, pink topazes, and moonstones."
					   "\n*  You are good thinker, and are very successful when it comes to debate and argument, and difficult to convince."
					   "\n*  You are excellent in business and finance when you apply your minds to such things, but usually you are more successful for others, and make more money for other people than for yourself."
					   "\n*  You are a seeker of knowledge, rational, open-minded, gifted with breadth of vision."
					   "\n*  If you manage to overcome your sensitiveness and developed your will-power, there is no position you would not be able to attain."
					   "\n*  You are usually successful in some large sphere of action, where you can feel your responsibilities for others."
					   "\n*  As an idealist, AQUARIANS would like to see that everybody is happy and your ambition is to do something important and meaningful."
					   "\n*  You take a great interest in public meetings, gatherings of people, and public ceremonies."
					   "\n*  In spite of the fact that ACQUARIANS love theatres and concerts, and like to be where crowds of people congregate, you often feel lonely."
					   "\n*  If born with money, you rarely show who you are."
					   "\n*  You are inclined to let your opportunities slip, or realize you only when it is too late."
					   "\n*  If you happen to belong to the lower order of humanity you are inclined to lose all sense of honor and principle, and are extremely unreliable, tricky in money matters, dishonest, and unscrupulous in gaining what you desire."
					   "\n*  As a lover you are full of surprises."
					   "\n*  You simply cannot be happy or fulfilled unless you are free to do as you like."
					   "\n*  No matter how deeply in love you may be, you are never willing to sacrifice your autonomy, but you always put honesty ahead of romance."
					   "\n*  In general, it is not true that all people who were born in this time are evil people.";
	}
	void pisces(int y,char *a, char s)      //year,name,sex
	//about yourself, lucky numbers,fortunes
	{
		clrscr();
		details(a,s,y);
		asciipisces();
		text="\n*  You are kind and gullible."
					 "\n*  You cannot hurt anyone directly."
					 "\n*  You are adventurous, ambitious, impulsive, enthusiastic and full of energy."
					 "\n*  You are a pioneer both in thought and action."
					 "\n*  You are very open to new ideas and a lover of freedom."
					 "\n*  You possess a curiously natural understanding, which you do not obtain from books or study."
					 "\n*  You easily acquire, or rather absorb, knowledge, especially of the history of countries, travel, research, and like subject."
					 "\n*  You are usually over-anxious about money matters, and inclined to worry about what your future position in life may be."
					 "\n*  You have a dislike and dread of being dependent on others more than from any love of money."
					  "\n*  You are often classed as superstitious, the occult in all its forms appealing to you in one way or another."
					 "\n*  You love to search out or investigate the unknown, the philosophical, or the mysterious."
					 "\n*  There’s is no position in life you could not attain."
					 "\n*  You will lie to save your feelings, or just to stake out a little privacy for yourself."
					 "\n*  You can get addicted to booze, pills, or crackerjacks, so you really have to watch it."
					 "\n*  You don't like to be alone too much, just a little, to get the peace back."
					 "\n*  You are a musically or artisticly gifted person, and creativeness is inherent in you."
					 "\n*  You are a great empathiser, always knowing how someone else is feeling."
					 "\n*  You make a good councellor and a sensitive lover from you."
					 "\n*  You enjoy solitude and like to get away from everyone and stay alone in order to regain your senses."
					 "\n*  You find most lasting friendships than other zodiacs."
					 "\n*  You are mostly inclined to suffer from nerves, insomnia, despondency and poor circulation, anemia."
					 "\n*  You have intestinal trouble."
					 "\n*  You should, if possible, live in bright, sunny, dry climates, and take a great amount of fresh air and exercise."
					 "\n*  Most suitable color to you are all shades of mauve, violet, and purple."
					 "\n*  The birth stones for you are agates, sapphires, amethysts, and emeralds"
					 "\n*  You can easily be irritated by slowness or moderation in your companions."
					 "\n*  You though yourself sensitive, ride roughshod over the sensitivities of others."
					 "\n*  You are often misunderstood and are often considered dose in money matters when in reality you might not be."
					 "\n*  You often go back on your promises, especially on questions of money."
					 "\n*  You should try to exercise an iron self-control, to discipline the qualities and tendencies of your character to the advantage."
					 "\n*  You are more mentally ambitious than otherwise."
					 "\n*  You may know your subject well in your mind, but you will hesitate and undervalue your own individuality."
					 "\n*  You are inclined to brood and become melancholy."
					 "\n*  You imagine all the world is against you and that you are being made martyrs of. Depression gets you."
					 "\n*  You see life as a mystical whole."
					 "\n*  You plan the evening on the basis of a reading from a fortune cookie."
					 "\n*  You think you’re a bad person when things go wrong."
					 "\n*  You are very devoted to your friends or to any cause you take up, provided you feel you are trusted or looked up to."
					 "\n*  You are generally successful in ail positions of responsibility."
					 "\n*  You are not inclined to push yourself forward, and usually wait to be asked before giving oyur opinions."
					 "\n*  You are sometimes inclined to gratify your innate sense of luxury and self-indulgence."
					 "\n*  You are likely to be too easy-going, to be too receptive to your surroundings, to become influenced by false friends"
					 "\n*  You might be inclined to become addicted to drugs or drink."
					 "\n*  You find some purpose worth living for, you rise to the emergency as no others can."
					 "\n*  You are the person that people meets sometimes in life who surprise you friends by your sudden change of character."
					 "\n*  Other people think you are mysterious, or just confused, but a you can sort out other people's troubles."
					 "\n*  You are shy."
					 "\n*  You are highly emotional."
					 "\n*  You are easily influenced by the people with whom you are thrown into contact."
					 "\n*  Your emotional nature can lift other people up to any height."
					 "\n*  You are really good in dealing with shipping and trade with foreign countries."
					 "\n*  You have a curiously mystical side to your nature as well as the practical.";
	}
//show fortunes for today
	void fortunes()
	{
		srand(time(NULL));
		clrscr();
		gotoxy(5,10);
		printf("------------------------------------------------------------------");
		gotoxy(5,18);
		printf("------------------------------------------------------------------");
		gotoxy(10,12);
		printf("YOUR FORTUNE FOR TODAY:");
		gotoxy(10,14);
		printf("%s",fort[rand()%100]);
		gotoxy(50,23);
		printf("Enter any key to continue...");
		getch();
	}
//choose appropriate horscope
	void getHor()
	{
		if((a.month==3&&a.day>=21)||(a.month==4&&a.day<=19))
			aries(a.year,a.name,a.sex);
		else if((a.month==4&&a.day>=20)||(a.month==5&&a.day<=20))
			taurus(a.year,a.name,a.sex);
		else if((a.month==5&&a.day>=21)||(a.month==6&&a.day<=20))
			gemini(a.year,a.name,a.sex);
		else if((a.month==6&&a.day>=21)||(a.month==7&&a.day<=22))
			cancer(a.year,a.name,a.sex);
		else if((a.month==7&&a.day>=23)||(a.month==8&&a.day<=22))
			leo(a.year,a.name,a.sex);
		else if((a.month==8&&a.day>=23)||(a.month==9&&a.day<=22))
			virgo(a.year,a.name,a.sex);
		else if((a.month==9&&a.day>=23)||(a.month==10&&a.day<=22))
			libra(a.year,a.name,a.sex);
		else if((a.month==10&&a.day>=23)||(a.month==11&&a.day<=21))
			scorpio(a.year,a.name,a.sex);
		else if((a.month==11&&a.day>=22)||(a.month==12&&a.day<=21))
			saggitarius(a.year,a.name,a.sex);
		else if((a.month==12&&a.day>=22)||(a.month==1&&a.day<=19))
			capricorn(a.year,a.name,a.sex);
		else if((a.month==1&&a.day>=20)||(a.month==2&&a.day<=18))
			aquarius(a.year,a.name,a.sex);
		else if((a.month==2&&a.day>=19)||(a.month==3&&a.day<=20))
			pisces(a.year,a.name,a.sex);
		else
			cout<<"Error";
		scrolltxtop(text);
		cout<<"\n*********************END*****************************";
		getch();
	}

	void nums()
	{
		int	d,m,y,lp=0;
		clrscr();
		//Lifepath number calculation
		d=a.day;
		m=a.month;
		y=a.year;
		while(d!=0 && m!=0 && y!=0)
		{
			lp+=(d%10);
			d/=10;
			lp+=(m%10);
			m/=10;
			lp+=(y%10);
			y/=10;
		}
		if(lp>9 && lp!=11 && lp!=22 && lp!=33)
		{
			d=lp%10;
			lp/=10;
			lp+=d;
		}
		gotoxy(10,10);
		cout<<"Your LifePath Number is : "<<lp;
		//Birthday number
		gotoxy(10,11);
		cout<<"Your birthday number is : "<<a.day;
		//Expression number
		int exp=0;
		for(d=0;d<50;d++)
		{
			if(a.name[d]=='A'||a.name[d]=='a'||a.name[d]=='J'||a.name[d]=='j'||a.name[d]=='S'||a.name[d]=='s')
				exp+=1;
			else if(a.name[d]=='B'||a.name[d]=='b'||a.name[d]=='K'||a.name[d]=='k'||a.name[d]=='T'||a.name[d]=='t')
				exp+=2;
			else if(a.name[d]=='C'||a.name[d]=='c'||a.name[d]=='L'||a.name[d]=='l'||a.name[d]=='U'||a.name[d]=='u')
				exp+=3;
			else if(a.name[d]=='D'||a.name[d]=='d'||a.name[d]=='M'||a.name[d]=='m'||a.name[d]=='V'||a.name[d]=='v')
				exp+=4;
			else if(a.name[d]=='E'||a.name[d]=='e'||a.name[d]=='N'||a.name[d]=='n'||a.name[d]=='W'||a.name[d]=='w')
				exp+=5;
			else if(a.name[d]=='F'||a.name[d]=='f'||a.name[d]=='O'||a.name[d]=='o'||a.name[d]=='X'||a.name[d]=='x')
				exp+=6;
			else if(a.name[d]=='G'||a.name[d]=='g'||a.name[d]=='P'||a.name[d]=='p'||a.name[d]=='Y'||a.name[d]=='y')
				exp+=7;
			else if(a.name[d]=='H'||a.name[d]=='h'||a.name[d]=='Q'||a.name[d]=='q'||a.name[d]=='Z'||a.name[d]=='z')
				exp+=8;
			else if(a.name[d]=='I'||a.name[d]=='i'||a.name[d]=='R'||a.name[d]=='r')
				exp+=9;
			else  continue;
			if(a.name[d]=='\0') break;
		}
		d=0;m=0;
		if(exp==11 || exp==22 || exp==33)
			m=exp;
		else
		{	while(exp>0)
			{
				d=exp%10;
				exp/=10;
				m+=d;
			}
		}
		gotoxy(10,12);
		cout<<"Your Expression number is : "<<m;
		getch();
	}

public:
//Constructor
	bhakt()
	{

		fort[0]="YOUR TALENTS WIL BE RECOGNIZED AND SUITABLY REWARDED.";
		fort[1]="YOU ARE GOING TO HAVE SOME NEW CLOTHES.";
		fort[2]="DO NOT MISTAKE TEMPTATION FOR OPPORTUNITY.";
		fort[3]="THE WORLD MAY BE YOUR OYSTER, BUT IT DOESN'T MEAN YOU'LL GET ITS PEARL.";
		fort[4]="FLATTERY WILL GO FAR TONIGHT.";
		fort[5]="THE GREATEST DANGER COULD BE YOUR STUPIDITY.";
		fort[6]="A SECRET ADMIRER WILL SOON SEND YOU A SIGN OF AFFECTION.";
		fort[7]="WE CANNOT DO GREAT THINGS; ONLY SMALL THINGS WITH GREAT LOVE. -- MOTHER TERESA.";
		fort[8]="YOU WERE BORN WITH THE SKILL TO COMMUNICATE WITH PEOPLE EASILY.";
		fort[9]="NONE OF THE SECRETS OF SUCCESS WILL WORK UNLESS YOU DO.";
		fort[10]="YOU ARE VERY EXPRESSIVE AND POSITIVE IN WORDS, ACT AND FEELING.";
		fort[11]="TRUST YOUR INTUITION. THE UNIVERSE IS GUIDING YOUR LIFE.";
		fort[12]="IF YOU WANT THE RAINBOW, YOU MUST TO PUT UP WITH THE RAIN. -- D. PARTON";
		fort[13]="A BUG IN THE HAND IS BETTER THAN ONE AS YET UNDETECTED.";
		fort[14]="A COMPLEX SYSTEM THAT WORKS IS INVARIABLY FOUND TO HAVE EVOLVED FROM A SIMPLE SYSTEM THAT WORKS.";
		fort[15]="A BLACK CAT CROSSING YOUR PATH SIGNIFIES THAT THE ANIMAL IS GOING SOMEWHERE.";
		fort[16]="AND NOW THE TIME FOR SOMETHING COMPLETELY DIFFERENT.";
		fort[17]="THE HARD TIMES WILL BEGIN TO FADE, JOY WILL TAKE THEIR PLACE.";
		fort[18]="LIES TODAY.";
		fort[19]="SMALL ONES CAN BE JUST AS EFFECTIVE.";
		fort[20]="DON'T YOU WISH YOU HAD MORE ENERGY... OR LESS AMBITION?";
		fort[21]="FINE DAY FOR FRIENDS.";
		fort[22]="O-SO DAY FOR YOU.";
		fort[23]="IT IS SO VERY HARD TO BE AN ON-YOUR-OWN-TAKE-CARE-OF-YOURSELF-BECAUSE-THERE-IS-NO-ONE-ELSE-TO-DO-IT-FOR-YOU GROWNUP.";
		fort[24]="ITS A VERY *__UN*LUCKY WEEK IN WHICH TO BE TOOK DEAD.";
		fort[25]="IT'S ALL IN YOUR HEAD.";
		fort[26]="GET A LIFE!";
		fort[27]="MANY CHANGES OF MIND AND MOOD; DO NOT HESITATE TOO LONG.";
		fort[28]="STAY AWAY FROM CARS TODAY.";
		fort[29]="ALL YOUR HARD WORK WILL SOON PAY OFF.";
		fort[30]="YOU'LL DIE IN A LOTTLE MORE THAN A MONTH.";
		fort[31]="A GOOD TIME TO FINISH UP OLD TASKS.";
		fort[32]="YOU DONT REALLY BELIEVE IN FORTUNES.";
		fort[33]="STAY AWAKE TILL LATE TODAY.";
		fort[34]="YOU'LL BE SURPRISED.";
		fort[35]="LET YOUR FOOT LOOSE TODAY!";
		fort[36]="YOUR CRUSH WILL MEET TO YOU TODAY.";
		fort[37]="YOU NEED SOME FUN IN LIFE.";
		fort[38]="WHAT HAPPENED LAST NIGHT CAN HAPPEN AGAIN.";
		fort[39]="A FRIEND ASKS ONLY FOR YOUR TIME, NOT YOUR MONEY.";
		fort[40]="NEVER TROUBLE TROUBLE UNTIL TROUBLE TROUBLES YOU.";
		fort[41]="MISUNDERSTANDING WILL BREAK YOUR FRIENDSHIP SOON.";
		fort[42]="YOU HAVE TAKEN YOURSELF TOO SERIOUSLY.";
		fort[43]="YOU'RE STUPID.";
		fort[44]="YOU HAVE THE CAPACITY TO LEARN FROM MISTAKES.";
		fort[45]="YOU'LL LEARN A LOT TODAY.";
		fort[46]="YOU HAVE UNUSUAL EQUIPMENT FOR SUCCESS, USE IT PROPERLY.";
		fort[47]="YOU WILL RECEIVE A FORTUNE COOKIE.";
		fort[48]="SOMEONE WILL INVITE YOU TO A KARAOKE PARTY.";
		fort[49]="HELP! IM STUCK INSIDE THE FORTUNE TELLER!";
		fort[50]="THERE IS NO MISTAKE SO GREAT AS THAT OF BEING ALWAYS RIGHT.";
		fort[51]="SOMEONE THINKS YOU ARE WONDERFULLY MYSTERIOUS";
		fort[52]="A TUB AND A RUB WILL CHANGE YOUR DAY.";
		fort[53]="EAT YOUR VEGETABLE AND YOU WILL BE STRONG LIKE POPEYE.";
		fort[54]="A CLOSED MOUTH GATHERS NO FEET.";
		fort[55]="YOU WILL MAKE A GREAT LAWYER.";
		fort[56]="IF YOU THINK YOU’RE TOO SMALL TO BE EFFECTIVE, YOU’VE NEVER BEEN IN BED WITH A MOSQUITO.";
		fort[57]="A ROLLING STONE GATHERS NO MOSS.";
		fort[58]="YOU CAN ALWAYS FIND HAPPINESS AT WORK ON FRIDAY.";
		fort[59]="A FANATIC IS ONE WHO CAN'T CHANGE HIS MIND, AND WON'T CHANGE THE SUBJECT.";
		fort[60]="HE WHO LAUGHS AT HIMSELF NEVER RUNS OUT OF THINGS TO LAUGH AT.";
		fort[61]="FLATTERY WILL GO FAR TONIGHT.";
		fort[62]="HE WHO FARTS IN CHURCH, SITS IN HIS OWN PEW!";
		fort[63]="YOU WILL RECEIVE A FORTUNE.";
		fort[64]="SING AND REJOICE, FORTUNE IS SMILING ON YOU.";
		fort[65]="YOU HAVE THE RARE ABILITY TO RECOGNIZE ABILITY IN OTHERS.";
		fort[66]="LIFE TO YOU IS A DASHING AND BOLD ADVENTURE.";
		fort[67]="THE TIME IS RIGHT TO MAKE NEW FRIENDS.";
		fort[68]="YOU WILL MAKE A SUDDEN RISE IN LIFE.";
		fort[69]="SOMEONE FROM YOUR PAST HAS RETURNED TO STEAL YOUR HEART.";
		fort[70]="YOU DISPLAY THE WONDERFUL TRAITS OF CHARM AND COURTESY.";
		fort[71]="HAPPINESS ALWAYS ACCOMPANIES WITH YOU.";
		fort[72]="YOUR HEART IS PURE, AND YOUR MIND CLEAR, AND SOUL DEVOUT.";
		fort[73]="WHEN WINTER COMES HEAVEN WILL RAIN SUCCESS ON YOU.";
		fort[74]="YOU WILL HAVE A FINE CAPACITY FOR THE ENJOYMENT OF LIFE.";
		fort[75]="YOU WILL ENJOY GOOD HEALTH.";
		fort[76]="ACCEPT THE NEXT PROPOSITION YOU HEAR.";
		fort[77]="YOU SHOULD BE ABLE TO UNDERTAKE AND COMPLETE ANYTHING.";
		fort[78]="IN GOD (SIC) WE TRUST; ALL OTHERS MUST PAY CASH.";
		fort[79]="THESE THREE GO TOGETHER:\nYOU WILL BE CALLED UPON TO HELP A FRIEND IN TROUBLE.\nDON'T LET FRIENDS IMPOSE ON YOU, WORK CALMLY AND SILENTLY.\nYOUR ROAD WILL BE MADE SMOOTH FOR YOU BY GOOD FRIENDS.";
		fort[80]="YOU WILL ALWAYS BE SUCCESSFUL IN YOUR PROFESSIONAL CAREER.";
		fort[81]="THERE IS NO WISDOM GREATER THAN KINDNESS.";
		fort[82]="YOU LEAD A USEFUL LIFE NO MATTER WHAT RICHES ARE COMING TO YOU.";
		fort[83]="YOUR MIND IS CREATIVE, ORIGINAL AND ALERT.";
		fort[84]="YOU COULD PROSPER IN THE FIELD OF MEDICAL RESEARCH.";
		fort[85]="YOU ARE A HAPPY MAN.";
		fort[86]="YOUR PRESENT PLANS ARE GOING TO SUCCEED.";
		fort[87]="A PLEASANT SURPRISE IS WAITING FOR YOU.";
		fort[88]="THESE TWO GO TOGETHER:\nYOU HAVE MUCH SKILL IN EXPRESSING YOURSELF TO BE EFFECTIVE.\nYOU HAVE GREAT SKILL IN EXPRESSING YOURSELF TO BE EFFECTIVE.";
		fort[89]="YOUR HOME IS A PLEASANT PLACE FROM WHICH YOU DRAW HAPPINESS.";
		fort[90]="A VISIT TO A MUSEUM WILL BRING YOU A NEW SENSE OF APPRECIATION.";
		fort[91]="YOUR GOOD DEEDS ARE NEVER FORGOTTEN.";
		fort[92]="IT'S TIME YOU ASKED THAT SPECIAL SOMEONE OUT ON A DATE.";
		fort[93]="THE WORLD IS ALWAYS READY TO RECIEVE TALENT WITH OPEN ARMS.";
		fort[94]="WISH YOU A LONG LIFE.";
		fort[95]="YOU WILL HAVE A LONG AND HEALTHY LIFE.";
		fort[96]="HAPPINESS IS FOUND WHEN ONE IS NOT LOOKING.";
		fort[97]="SOMEONE HAS COMPLEMENTED YOU TODAY IN YOUR ABSENCE.";
		fort[98]="YOU WILL BECOME BETTER ACQUAINTED WITH A COWORKER.";
		fort[99]="BE FOREWARNED, SOMEONE WILL TRY TO FOOL YOU TOFDAY";

	}//Constructor end
//Destructor
	~bhakt()
	{
		ofstream fout("c:\\bhaktdet.csv",ios::app);
		fout<<"\""<<a.name<<"\","<<a.sex<<",\""<<a.day<<"-"<<a.month<<"-"<<a.year<<"\""<<endl;
		fout.close();
	}   //Destructor end

	void det_read()
	{
	//taking input of date of birth
		cout<<"enter your date of birth\n";
		cout<<"YEAR (yyyy): ";
		cin>>a.year;
		cout<<"MONTH (mm): ";
		cin>>a.month;
		cout<<"DAY (dd): ";
		cin>>a.day;
	//checking errors in DOB
		if((a.month>12)||(a.month==2&&a.day>=30)||(a.month==1,3,5,7,8,10,12&&a.day>31)||(a.month==2,4,6,9,11&&a.day>30))
		{
			cout<<"THE ENTRY YOU MADE WAS WRONG.....";
			cout<<"PLEASE ENTER CORRECT DATE OF BIRTH ACCORDING TO GREGORIAN CALENDAR";
			getch();
			exit(1);
		}
		else if(2019-a.year>100)
		{
			cout<<"Gentleman your time's up.\nNo future prediction for you";
			getch();
			exit(1);
		}
		else if(a.year>2019)
		{
			cout<<"Future predictions available only in present.\n";
			cout<<"You're not born yet.";
			getch();
			exit(1);
		}
	//Read name & Sex
		cout<<"Enter Full Name:  ";
		gets(a.name);
		cout<<"Enter Sex (M/F):  ";
		a.sex=getchar();
	//check sex
		if(a.sex!='m'&& a.sex!='M' && a.sex!='f' && a.sex!='F')
		{
			printf("\nWe Don't deal with unknown genders");
			getch();
			exit(1);
		}
		cout<<"Data read Completed.....";
		getch();
	}	//det_read() fn ends

//external interface
	void menu()
	{
		int opt=0;
		while(opt!=5)
		{
			clrscr();
			opt=zodmenu();
			switch(opt)
			{
				case 1:	getHor();	//your horscope
						break;
				case 2:	nums();	//lucky numbers
						break;
				case 3:	fortunes();
						break;
				case 4:	return;
				default: main();
			}
		}
	}
};
