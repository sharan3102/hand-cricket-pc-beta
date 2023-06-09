#include<iostream.h>
#include<stdio.h>
#include<process.h>
#include<conio.h>
#include<dos.h>
#include<string.h>
#include<stdlib.h>
int player_run[2]={0,0};
int pc_run[2]={0,0};
int p_one=0,p_two=0,p_oneballs=0,p_twoballs=0,total=0,pbowl=0,player_total=0,j;
int pc_one=0,pc_two=0,pcone_balls=0,pctwo_balls=0,pc_total=0;
int runs[7]={2,6,3,1,0,5,4};
int i=1,k=1,l=1,n=1,flag=0,balls=0;
char player_one[15],player_two[15];
void select_mode();
void toss();
void menu();
void loading()
{
	int i;
	char tips[][539]={"Enjoy the Game to kill your boredom !!!!","Dont Know How to Play check the HowToPlay option in the menu !!","This is just a beta version wait for updates ","More Features Coming soon","This game is developed using basics of C++","Always dont go for sixes, small runs matters too !","There is No games for coding but there is code for games !","Gaming is Fun","Makesure that You enter the right teamname and password","You can Now play with Different overs","Dont worry If you lose Practice makes you perfect","MOM are awarded to a player of the winning team" };
	clrscr();
	textcolor(LIGHTRED);
	cout<<"\n\n\n\n\n   \t\t\t\t";
	cprintf("LOADING");
	textcolor(WHITE);
	cout<<"\n\n\n\n";
	textcolor(YELLOW);
	cprintf("[ TIPS ]  :  ");
	textcolor(WHITE);
	randomize();
	int a = 0;
	a=rand()%12;
	cout<<tips[a]<<"\n\n";
	for(i=1;i<=80;i++)
	{
		textcolor(WHITE);
		cprintf("");
	}
	for(i=1;i<=80;i++)
	{
		gotoxy(i,12);
		textcolor(LIGHTGREEN);
		delay(50);
		cprintf("");
	}
	textcolor(LIGHTGREEN);
	cout<<"\n\n\n\t\t\t    ";
	cprintf("LOADING OVER !!!!");
	textcolor(WHITE);
	textcolor(LIGHTRED+BLINK);
	cout<<"\n\n\n\t\t";
	cprintf("<<<------PRESS ANY KEY TO CONTINUE------>>>");
	textcolor(WHITE);
	getch();
}

void title()
{
	clrscr();
	textcolor(YELLOW);
	cout<<"\n\n\n\n\n\n\n\n\n\n\t\t";
	cprintf("      HAND CRICKET PC ( BETA VERSION )");
	textcolor(WHITE);
	int i;
	textcolor(LIGHTRED);
	cout<<"\n\n\n\n\n \t\t\t\t";
	cprintf("LOADING");
	textcolor(WHITE);
	cout<<"\n\n\n";
	for(i=1;i<=80;i++)
	{
		textcolor(WHITE);
		cprintf("");
	}
	for(i=1;i<=80;i++)
	{
		gotoxy(i,19);
		textcolor(LIGHTGREEN);
		delay(80);
		cprintf("");
	}
	cout<<"\n\n";
	textcolor(LIGHTGREEN);
	cout<<"\n\t\t\t    ";
	cprintf("LOADING OVER !!!!");
	textcolor(LIGHTRED+BLINK);
	cout<<"\n\n\n\t\t";
	cprintf("<<<------PRESS ANY KEY TO CONTINUE------>>>");
	textcolor(WHITE);
	getch();
	loading();

}

class game
{

public:
int overchoice;
void overs()
{
	clrscr();
	cout<<"\n\n\t\t";
	textcolor(YELLOW);
	cprintf("........PLEASE SELECT THE FORMAT ........");
	textcolor(WHITE);
	cout<<"\n\n\n\n\t";
	cout<<"  2 Overs \t5 Overs \t 10 Overs \t 20 Overs ";
	cout<<"\n\n\t ENTER YOUR CHOICE [ 2 , 5 , 10 , 20 ]: ";
	cin>>overchoice;
	loading();
	toss();
}
void sharanvishnu()
{
	char team_pass[5];
	char password[5];
	strcpy(player_one,"sharan");
	strcpy(player_two,"vishnu");
	clrscr();
	strcpy(team_pass,"3131");
	cout<<"\n\n\n\t\t\t";
	textcolor(YELLOW);
	cprintf("WELCOME SHARAN AND VISHNU");
	textcolor(WHITE);
	cout<<"\n\n\n\t\t ENTER PASSWORD : ";
	gets(password);
	loading();
	if(strcmpi(team_pass,password)==0)
	{
		select_mode();
	}
}

void manojyesh()
{
	char team_pass[5];
	char password[5];
	strcpy(player_one,"Yesh");
	strcpy(player_two,"Manoj");
	clrscr();
	strcpy(team_pass,"2706");
	cout<<"\n\n\n\t\t\t";
	textcolor(YELLOW);
	cprintf("WELCOME MANOJ AND YESH");
	textcolor(WHITE);
	cout<<"\n\n\t\t ENTER PASSWORD : ";
	gets(password);
	loading();
	if(strcmpi(team_pass,password)==0)
	{
		select_mode();
	}
}

void ajayrahul()
{
	char team_pass[5];
	char password[5];
	strcpy(player_one,"Rahul");
	strcpy(player_two,"Ajay");
	clrscr();
	strcpy(team_pass,"1234");
	cout<<"\n\n\n\t\t\t";
	textcolor(YELLOW);
	cprintf("WELCOME AJAY AND RAHUL");
	textcolor(WHITE);
	cout<<"\n\n\t\t ENTER PASSWORD : ";
	gets(password);
	loading();
	if(strcmpi(team_pass,password)==0)
	{
		select_mode();
	}
}

void suryanaresh()
{
	char team_pass[5];
	char password[5];
	strcpy(player_one,"Naresh");
	strcpy(player_two,"Surya");
	clrscr();
	strcpy(team_pass,"1111");
	cout<<"\n\n\n\t\t\t";
	textcolor(YELLOW);
	cprintf("WELCOME SURYA AND NARESH");
	textcolor(WHITE);
	cout<<"\n\n\t\t ENTER PASSWORD : ";
	gets(password);
	loading();
	if(strcmpi(team_pass,password)==0)
	{
		select_mode();
	}
}

void rithishmithun()
{
	char team_pass[5];
	char password[5];
	strcpy(player_one,"Mithun");
	strcpy(player_two,"Rithish");
	clrscr();
	strcpy(team_pass,"2222");
	cout<<"\n\n\n\t\t\t";
	textcolor(YELLOW);
	cprintf("WELCOME RITHISH AND MITHUN");
	textcolor(WHITE);
	cout<<"\n\n\t\t ENTER PASSWORD : ";
	gets(password);
	loading();
	if(strcmpi(team_pass,password)==0)
	{
		select_mode();
	}
}

void srihem()
{
	char team_pass[5];
	char password[5];
	strcpy(player_one,"Sriram");
	strcpy(player_two,"Hemcharan");
	clrscr();
	strcpy(team_pass,"3333");
	cout<<"\n\n\n\t\t\t";
	textcolor(YELLOW);
	cprintf("WELCOME SRIRAM AND HEM");
	textcolor(WHITE);
	cout<<"\n\n\t\t ENTER PASSWORD : ";
	gets(password);
	loading();
	if(strcmpi(team_pass,password)==0)
	{
		select_mode();
	}
}

void aravindperumal()
{
	char team_pass[5];
	char password[5];
	strcpy(player_one,"Aravind");
	strcpy(player_two,"Perumal");
	clrscr();
	strcpy(team_pass,"4444");
	cout<<"\n\n\n\t\t\t";
	textcolor(YELLOW);
	cprintf("WELCOME ARAVIND AND PERUMAL");
	textcolor(WHITE);
	cout<<"\n\n\t\t ENTER PASSWORD : ";
	gets(password);
	loading();
	if(strcmpi(team_pass,password)==0)
	{
		select_mode();
	}
}

void new_user()
{
	char team_pass[5];
	char password[15];
  //	char player_one[15],play_one[15];
  //	char player_two[15],play_two[15];
	clrscr();
	cout<<"\n\n\t\t\t";
	textcolor(YELLOW);
	cprintf("WELCOME NEW USER ...>>>");
	textcolor(WHITE);
	cout<<"\n\n\n --->>> We would like to have your name : ";
	gets(player_one);
	cout<<"\n --->>> We would also like to have your teammate's name : ";
	gets(player_two);
//	strcpy(player_one,play_one);
//	strcpy(player_two,play_two);
	loading();
	clrscr();
	strcpy(team_pass,player_one);
	cout<<"\n\n\n\t\t\t";
	textcolor(YELLOW);
	cprintf("WELCOME ");
	textcolor(WHITE);
	cout<<player_one;
	textcolor(YELLOW);
	cprintf(" AND ");
	textcolor(WHITE);
	cout<<player_two;
	cout<<"\n\n\t\t ENTER PASSWORD [Player 1 Name ]: ";
	gets(password);
	loading();
	if(strcmpi(team_pass,password)==0)
	{
		select_mode();
	}
}

int retovers()
{return overchoice;}

char* retplayone()
{return player_one;}

char* retplaytwo()
{return player_two;}

};
game g;

void win_match()
{
	loading();
	clrscr();
	cout<<"\n\n\n\n\n\n\t\t\t";
	textcolor(LIGHTGREEN);
	cprintf("YOU WON THE MATCH !!!! ");
	textcolor(WHITE);
	cout<<"\n\n\n\n\n\t\t";
	textcolor(YELLOW);
	cprintf("MAN OF THE MATCH GOES TO : ");
	textcolor(WHITE);
	if(player_run[0]<player_run[1])
	{
		cout<<g.retplaytwo();
		cout<<" For Scoring "<<player_run[1]<<" runs...";
	}
	else if (player_run[0]>player_run[1])
	{
		cout<<g.retplayone();
		cout<<" For Scoring "<<player_run[0]<<" runs...";
	}
	cout<<"\n\n\n\n PRESS ANY KEY TO EXIT ........"<<endl;
	getch();
	exit(0);
}

void lose_match()
{
	loading();
	clrscr();
	cout<<"\n\n\n\n\n\n\t\t\t";
	textcolor(LIGHTRED);
	cprintf("YOU LOST THE MATCH !!!! ");
	cout<<"\n\n\t";
	textcolor(LIGHTGREEN);
	cprintf("Don't Worry Losing is a part of Learning...");
	cout<<"\n\t";
	cprintf("Learn from your mistakes and keep moving on....");
	textcolor(WHITE);
	cout<<"\n\n\n PRESS ANY KEY TO EXIT ........"<<endl;
	getch();
	exit(0);
}

void tie_match()
{
	loading();
	clrscr();
	textcolor(YELLOW);
	cout<<"\n\n\n\n\n\n\t\t\t";
	cprintf("The Match has been TIED  !!!! ");
	textcolor(WHITE);
	cout<<"\n\n\n\n PRESS ANY KEY TO EXIT........"<<endl;
	getch();
	exit(0);
}

void score_card()
{
  //	int p_one=0,p_two=0,p_oneballs=0,p_twoballs=0,total=0,j;
  //	int runs[7]={2,6,3,1,0,5,4};
//	randomize();
	clrscr();
	cout<<"\n\n\t";
	textcolor(YELLOW);
	cprintf("SCORE CARD ");
	textcolor(WHITE);
	cout<<"\n\n";
	cout<<" ==========================================================="<<endl;
	cout<<" ||	BATSMAN      ||	   RUNS	   ||	     BALLS	 ||"<<endl;
	cout<<" ==========================================================="<<endl;
	cout<<" ||  "<<g.retplayone()<<" 		    "<<player_run[0]<<"			 "<<p_oneballs<<"	 ||"<<endl;
	cout<<" ||  "<<g.retplaytwo()<<"		    "<<player_run[1]<<"			 "<<p_twoballs<<"	 ||"<<endl;
	cout<<" ==========================================================="<<endl;
	total=player_run[0]+player_run[1];
	cout<<"\n\t\t\t TOTAL = "<<total<<endl;
}


void pcscore_card()
{
  //	int p_one=0,p_two=0,p_oneballs=0,p_twoballs=0,total=0,j;
  //	int runs[7]={2,6,3,1,0,5,4};
//	randomize();
	clrscr();
	cout<<"\n\n\t";
	textcolor(YELLOW);
	cprintf("SCORE CARD ");
	textcolor(WHITE);
	cout<<"\n\n";
	cout<<"==========================================================="<<endl;
	cout<<"||	BATSMAN        ||	RUNS	||	BALLS	||"<<endl;
	cout<<"==========================================================="<<endl;
	cout<<"||	PC 1 			 "<<pc_run[0]<<"		 "<<pcone_balls<<"	||"<<endl;
	cout<<"||	PC 2		      	 "<<pc_run[1]<<"		 "<<pctwo_balls<<"	||"<<endl;
	cout<<"==========================================================="<<endl;
	pc_total=pc_run[0]+pc_run[1];
	cout<<"\n\t\t\t TOTAL = "<<pc_total<<endl;
}



void first_bat()
{
	int over;
	over=g.retovers();
	if(over==2)
	{
		balls=12;
	}
	else if(over==5)
	{
		balls=30;
	}
	else if(over==10)
	{
		balls=60;
	}
	else if(over==20)
	{
		balls=120;
	}
	clrscr();
	do
	{
		score_card();
		cout<<"\n\n Please Enter the run you want to score [0 - 6] : ";
		cin>>p_one ;
		player_run[0]+=p_one;
		randomize();
		j=rand()%7;
		cout<<"\n Opponent chose                                 : "<<runs[j];
		getch();
		p_oneballs=i;
		i++;
		if(p_one==runs[j]&&i<=balls)
		{

			int m;
			m=balls+1-i;
			player_run[0]-=p_one;
			score_card();
			cout<<"\n\n\t\t ";
			textcolor(LIGHTRED);
			cprintf("WICKET !!! ");
			textcolor(WHITE);
			getch();
			do
			{
				score_card();
				cout<<"\n\n Please Enter the run you want to score [0 - 6] : ";
				cin>>p_two ;
				player_run[1]+=p_two;
				randomize();
				j=rand()%7;
				cout<<"\n Opponent chose                                 : "<<runs[j];
				getch();
				p_twoballs=k;
				k++;
				if(p_two==runs[j])
				{
					player_run[1]-=p_two;
					textcolor(LIGHTRED);
					cout<<"\n\n\t ";
					cprintf("ALL OUT !!!");
					textcolor(WHITE);
					getch();
					score_card();
					flag=1;
				}
			}
			while((k<=m)&&(flag==0));
		}
		score_card();
	}
	while(((i+k)<=balls+1)&&(flag==0));
	player_total=player_run[0]+player_run[1];
	getch();
	clrscr();
	textcolor(LIGHTGREEN+BLINK);
	cout<<"\n\n\n\n\n\t\t\t";
	cprintf("GET READY.... TO DEFEND .....");
	cout<<"\n\n\n\t\t\t";
	textcolor(LIGHTRED);
	cprintf("TARGET : ");
	textcolor(WHITE);
	cout<<player_total+1;
	getch();
	balls=0;
	over=g.retovers();
	if(over==2)
	{
		balls=12;
	}
	else if(over==5)
	{
		balls=30;
	}
	else if(over==10)
	{
		balls=60;
	}
	else if(over==20)
	{
		balls=120;
	}

	clrscr();
	int flag=0;
	do
	{
		pc_total=pc_run[0]+pc_run[1];
		pcscore_card();
		cout<<"\n\n Please Enter the run you want to bowl [0 - 6] : ";
		cin>>pbowl ;
		randomize();
		j=rand()%7;
		cout<<"\n Opponent chose                                 : "<<runs[j];
		pc_run[0]+=runs[j];
		getch();
		pcone_balls=l;
		l++;
		if(pbowl==runs[j]&&l<=balls)
		{

			int m;
			m=balls+1-l;
			pc_run[0]-=runs[j];
			pcscore_card();
			cout<<"\n\n\t\t ";
			textcolor(LIGHTRED);
			cprintf("WICKET !!! ");
			textcolor(WHITE);
			getch();
			do
			{
				pcscore_card();
				cout<<"\n\n Please Enter the run you want to bowl [0 - 6] : ";
				cin>>pbowl ;
			   //	run[1]+=p_two;
				randomize();
				j=rand()%7;
				cout<<"\n Opponent chose                                 : "<<runs[j];
				pc_run[1]+=runs[j];
				getch();
				pctwo_balls=n;
				n++;
				if(pbowl==runs[j])
				{
					pc_run[1]-=runs[j];
					textcolor(LIGHTRED);
					cout<<"\n\n\t ";
					cprintf("ALL OUT !!!");
					textcolor(WHITE);
					getch();
					pcscore_card();
					flag=1;
				}
			}
			while((n<=m)&&(flag==0));
		}
		pcscore_card();
	if(player_total<pc_total)//&&l+n<=balls+1)
	{
		lose_match();
	}
	else if((player_total>pc_total)&&(flag==1))
	{
		win_match();
	}
	else if((player_total>pc_total)&&(l+n==balls+1))
	{
		win_match();
	}

	else if(player_total==pc_total&&flag==1)
	{
		tie_match();
	}
	else if(player_total==pc_total&&l+n==balls+1)
	{
		tie_match();
	}

	}
	while(((l+n)<=balls+1)&&(flag==0));
	pc_total=pc_run[0]+pc_run[1];

}


void first_bowl()
{
	int over;
	over=g.retovers();
	if(over==2)
	{
		balls=12;
	}
	else if(over==5)
	{
		balls=30;
	}
	else if(over==10)
	{
		balls=60;
	}
	else if(over==20)
	{
		balls=120;
	}

	clrscr();
	do
	{
		pcscore_card();
		cout<<"\n\n Please Enter the run you want to bowl [0 - 6] : ";
		cin>>pbowl ;
		randomize();
		j=rand()%7;
		cout<<"\n Opponent chose                                 : "<<runs[j];
		pc_run[0]+=runs[j];
		getch();
		pcone_balls=l;
		l++;
		if(pbowl==runs[j]&&l<=balls)
		{

			int m;
			m=balls+1-l;
			pc_run[0]-=runs[j];
			pcscore_card();
			cout<<"\n\n\t\t ";
			textcolor(LIGHTRED);
			cprintf("WICKET !!! ");
			textcolor(WHITE);
			getch();
			do
			{
				pcscore_card();
				cout<<"\n\n Please Enter the run you want to bowl [0 - 6] : ";
				cin>>pbowl ;
			   //	run[1]+=p_two;
				randomize();
				j=rand()%7;
				cout<<"\n Opponent chose                                 : "<<runs[j];
				pc_run[1]+=runs[j];
				getch();
				pctwo_balls=n;
				n++;
				if(pbowl==runs[j])
				{
					pc_run[1]-=runs[j];
					textcolor(LIGHTRED);
					cout<<"\n\n\t ";
					cprintf("ALL OUT !!!");
					textcolor(WHITE);
					getch();
					pcscore_card();
					flag=1;
				}
			}
			while((n<=m)&&(flag==0));
		}
		pcscore_card();
	}
	while(((l+n)<=balls+1)&&(flag==0));
	pc_total=pc_run[0]+pc_run[1];
	getch();
	clrscr();
	textcolor(LIGHTGREEN+BLINK);
	cout<<"\n\n\n\n\n\t\t\t ";
	cprintf("GET READY.... TO CHASE.....");
	textcolor(LIGHTRED);
	cout<<"\n\n\n\t\t\t";
	cprintf("TARGET : ");
	textcolor(WHITE);
	cout<<pc_total+1;
	getch();
	balls=0;
	over=g.retovers();
	if(over==2)
	{
		balls=12;
	}
	else if(over==5)
	{
		balls=30;
	}
	else if(over==10)
	{
		balls=60;
	}
	else if(over==20)
	{
		balls=120;
	}

	clrscr();
	int flag=0;
	do
	{
		score_card();
		player_total=player_run[0]+player_run[1];
		cout<<"\n\n Please Enter the run you want to score [0 - 6] : ";
		cin>>p_one ;
		player_run[0]+=p_one;
		randomize();
		j=rand()%7;
		cout<<"\n Opponent chose                                 : "<<runs[j];
		getch();
		p_oneballs=i;
		i++;
		if(p_one==runs[j]&&i<=balls)
		{

			int m;
			m=balls+1-i;
			player_run[0]-=p_one;
			score_card();
			cout<<"\n\n\t\t ";
			textcolor(LIGHTRED);
			cprintf("WICKET !!! ");
			textcolor(WHITE);
			getch();
			do
			{
				score_card();
				cout<<"\n\n Please Enter the run you want to score [0 - 6] : ";
				cin>>p_two ;
				player_run[1]+=p_two;
				randomize();
				j=rand()%7;
				cout<<"\n Opponent chose                                 : "<<runs[j];
				getch();
				p_twoballs=k;
				k++;
				if(p_two==runs[j])
				{
					player_run[1]-=p_two;
					textcolor(LIGHTRED);
					cout<<"\n\n\t ";
					cprintf("ALL OUT !!!");
					textcolor(WHITE);
					getch();
					score_card();
					flag=1;
				}
			}
			while((k<=m)&&(flag==0));
		}
		score_card();
		if(player_total>pc_total)
		{
			win_match();
					     //	getch();
		}
		else if ((pc_total>player_total)&&(flag==1))
		{
			lose_match();
					      //	getch();
		}
		else if((pc_total>player_total)&&(i+k==balls+1))
		{
			lose_match();
					      //	getch();
		}

		else if(pc_total==player_total&&i+k==balls+1)
		{
			tie_match();
					     //	getch();
		}
		else if(pc_total==player_total&&flag==1)
		{
			tie_match();
					     //	getch();
		}

	}
	while(((i+k)<=balls+1)&&(flag==0));
	player_total=player_run[0]+player_run[1];
}

void win_toss()
{
	int toss_choose;
	clrscr();
	cout<<"\n\n\n\t\t\t";
	textcolor(LIGHTGREEN+BLINK);
	cprintf(" YOU WON THE TOSS ");
	textcolor(WHITE);
	cout<<"\n\n\n\n\t\t\t YOU CHOOSE TO "<<endl;
	cout<<"\n\n\n\n\t\t 1. BAT		2. BOWL ";
	cout<<"\n\n\n\n\t ENTER YOU CHOICE (1/2) : ";
	cin>>toss_choose;
	loading();
	if(toss_choose==1)
	{
		first_bat();
	}
	else if(toss_choose==2)
	{
		first_bowl();
	}
	else
	{
		win_toss();
	}
	getch();
}
void lose_toss()
{
	char pcchoice[][21]={"bat","bowl","bat","bat","bowl","bowl"};
	int pc_choice=0;
	clrscr();
	cout<<"\n\n\n\t\t\t";
	textcolor(LIGHTRED+BLINK);
	cprintf(" YOU LOST THE TOSS ");
	textcolor(WHITE);
	randomize();
	pc_choice=rand()%6;
	if(strcmpi(pcchoice[pc_choice],"bat")==0)
	{
		cout<<"\n\n\n\n\t\t Opponent Has Decided To "<<pcchoice[pc_choice]<<" FIRST !!! ";
		getch();
		first_bowl();
	}
	else if(strcmpi(pcchoice[pc_choice],"bowl")==0)
	{
		cout<<"\n\n\n\n\t\t Opponent Has Decided To "<<pcchoice[pc_choice]<<" FIRST !!! ";
		getch();
		first_bat();
	}
	getch();
}

void toss()
{
	char toss[10];
	int rantoss=0;
	char random_toss[][8]={"h","t","t","h","h","t","h","t"};
//	char random_toss[][2]={"h","t"};
	clrscr();
	cout<<"\n\t\t ";
	textcolor(YELLOW);
	cprintf(". . . . . . T O S S . . . . . . ");
	textcolor(WHITE);
	cout<<"\n\n\n\n\t";
	cout<<"--------------------			------------------"<<endl;
	cout<<"\t|	          |			|                |"<<endl;
	cout<<"\t|                 |			|	       	 |"<<endl;
	cout<<"\t|	          |			|		 |"<<endl;
	cout<<"\t|	          |			|		 |"<<endl;
	cout<<"\t|     HEADS       |	   OR		|     TAILS      |"<<endl;
	cout<<"\t|	          |			|		 |"<<endl;
	cout<<"\t|	          |			|		 |"<<endl;
	cout<<"\t|		  |                     |		 |"<<endl;
	cout<<"\t|		  |                     |		 |"<<endl;
	cout<<"\t-------------------			------------------"<<endl;
	cout<<"\n\t MAKE YOUR CALL CAPTAIN (H/T) : ";
	gets(toss);
	randomize();
	rantoss=rand()%8;
	loading();
	if(strcmpi(random_toss[rantoss],toss)==0)
	{
		win_toss();
	}
	else if (strcmpi(random_toss[rantoss],toss)!=0)
	{
		lose_toss();
	}
	getch();
}


void select_mode()
{
	int choice;
	clrscr();
	cout<<"\n\n\n\n\t\t";
	textcolor(YELLOW);
	cprintf("G A M E    M O D E S :- ");
	textcolor(WHITE);
	cout<<"\n\n\n\t";
	cout<<"1. VS PC [ 2 , 5 , 10 , 20 OVERS ] "<<endl;
	cout<<"\t2. MULTI-PLAYER [ COMING SOON ]"<<endl;
	cout<<"\n\n\n ENTER YOUR CHOICE : ";
	cin>>choice;
	if(choice==1)
	{
		g.overs();
	}
	else if(choice==2)
	{
		cout<<"\n\n\t COMING SOON.....";
		select_mode();
	}
}

void start_game()
{
	char teamname[100];
	char password[15];
	clrscr();
	cout<<"\n\n\t\t\t";
	textcolor(CYAN);
	cprintf("STARTING GAME ");
	textcolor(WHITE);
	cout<<"\n\n\n\n\t\t ENTER TEAM NAME : ";
	gets(teamname);
	if(strcmpi(teamname,"sharanandvishnu")==0)
	{
		g.sharanvishnu();
	}
	else if (strcmpi(teamname,"manojandyesh")==0)
	{
		g.manojyesh();
	}
	else if (strcmpi(teamname,"ajayandrahul") ==0)
	{
		g.ajayrahul();
	}
	else if (strcmpi(teamname,"suryaandnaresh")==0)
	{
		g.suryanaresh();
	}
	else if (strcmpi(teamname,"rithishandmithun")==0)
	{
		g.rithishmithun();
	}
	else if (strcmpi(teamname,"sriramandhem")==0)
	{
		g.srihem();
	}
	else if (strcmpi(teamname,"aravindandperumal")==0)
	{
		g.aravindperumal();
	}
	else if (strcmpi(teamname,"new")==0)
	{
		g.new_user();
	}
	else
	{
		cout<<"\n\n\t\t\t";
		textcolor(LIGHTRED+BLINK);
		cprintf("INVALID TEAM NAME !!! ");
		textcolor(WHITE);
		cout<<"\n\n\t CONTACT THE DEVELOPER IF PROBLEM STILL EXISTS ! ";
	}
	getch();
}

void howtoplay()
{
	clrscr();
	textcolor(LIGHTRED);
	cout<<"\t\t\t\t";
	cprintf("HOW TO PLAY ");
	textcolor(WHITE);
	cout<<"\n\n\n";
	cout<<"1. Enter the game by logging In using your given name and password.";
	cout<<"\n2. After logging In select the number of overs you want to play. ";
	cout<<"\n3. Make your call for the toss. ";
	cout<<"\n4. Play the match by entering the run you want to score [0-6].";
	cout<<"\n5. Wait for the opponent to enter their choice. ";
	cout<<"\n6. While Batting your innings will get over when 2 wickets fall !!! ";
	cout<<"\n7. Wickets fall if your choice and opponents choice are same . ";
	cout<<"\n8. At the end the MOM will be awarded to a person of the WINNING team. ";
	cout<<"\n9. What's then go and win and conquer them !!! ";
	cout<<"\n\n\n\n\t\t\t";
	textcolor(LIGHTGREEN);
	cprintf("-----X------X-------X-------");
	textcolor(WHITE);
	getch();
}

void credits()
{
	clrscr();
	textcolor(YELLOW);
	cout<<"\t\t\t\t";
	cprintf("CREDITS");
	textcolor(WHITE);
	cout<<"\n\n\n\n\t HAND CRICKET PC (BETA) is a turbo c++ game developed by SHARAN,who	 wanted to relive the moments of lastbench hand cricket during the school days. So if you are reading this ! you are one of the reason for making this game\tpossible .It all started when SHARAN and AJAY were playing against each other inthe breaks ..., Later many teams were formed , many matches were played , many  emotions were created , many problems were faced , many moments were enjoyed ...\nThis game is my gift to you guys reading this and this game is in memory of \nme to you  . So Thank you for being around and DONT FORGET ME !!!\n\n\n\t\t	    Thank You   \n\n\n\n\t\t\t";
	textcolor(LIGHTGREEN);
	cprintf("-----X------X-------X-------");
	textcolor(WHITE);
	getch();
}

void exit_game()
{
	exit(0);
}

void menu()
{
	clrscr();
	int ch2;
	cout<<"\n\n\n\t";
	textcolor(LIGHTRED);
	cprintf("MAIN MENU ");
	textcolor(WHITE);
	cout<<"\n\n\t1.START GAME  "<<endl;
	cout<<"      -------------------";
	cout<<"\n\n\t2.HOW TO PLAY "<<endl;
	cout<<"      -------------------";
	cout<<"\n\n\t3.CREDITS "<<endl;
	cout<<"      -------------------";
	cout<<"\n\n\t4.EXIT                 CREATED BY : ";
	textcolor(LIGHTGREEN);
	cprintf("SHARAN ");
	textcolor(WHITE);
	cout<<"\n      -------------------";
	cout<<"\n\n\tPlease Enter Your Choice (1-4) : ";
	cin>>ch2;
	switch(ch2)
	{
		case 1: clrscr();
			start_game();
			menu();
			break;
		case 2: howtoplay();
			menu();
			break;
		case 3: credits();
			menu();
			break;
		case 4: exit_game();
			break;
		default:cout<<"\a";menu();
	}
	getch();
}



void main()
{
	clrscr();
	title();
	menu();
	getch();
}