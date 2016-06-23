#include <stdio.h>
#include <conio.h>
#include <malloc.h>
#include <stdlib.h>
#include <string.h>

#pragma warning(disable:4996)



void Read_Data_Files(void);//파라미터 데이터 형으로 바꿔야 할듯
void Display_Statistics(void);
void Top_5_Most_Tweeted_Words(void);
void Top_5_Most_Tweeted_Users(void);
void Find_Users(void);
void Find_All_Friends(void);
void Delete_All_Mentions(void);
void Delete_All_Users(void);
void Find_Strongly_Connected_Components(void);
void Find_Shortest_Path(void);
void Quit(void);

int menu(void);


void Read_Data_Files(void)
{
	printf("0. Read data files\n");
	return;
}
void Display_Statistics(void)
{
	printf("1. display statistics\n");
	return;	
}
void Top_5_Most_Tweeted_Words(void)
{
	printf("2. Top 5 most tweeted words\n");
	return;
}
void Top_5_Most_Tweeted_Users(void)
{
	printf("3. Top 5 most tweeted users\n");
	return;
}
void Find_Users(void)
{
	printf("4. Find users who tweeted a word (e.g., ’연세대’)\n");
	return;
}
void Find_All_Friends(void)
{
	printf("5. Find all people who are friends of the above users\n");
	return;
}
void Delete_All_Mentions(void)
{
	printf("6. Delete all mentions of a word\n");
	return;
}
void Delete_All_Users(void)
{
	printf("7. Delete all users who mentioned a word\n");
	return;
}
void Find_Strongly_Connected_Components(void)
{
	printf("8. Find strongly connected components\n");
	return;
}
void Find_Shortest_Path(void)
{
	printf("9. Find shortest path from a given user\n");
	return;
}
void Quit(void)
{
	printf("bye!");
	return;
}


int menu(void)
{
	int r;

	printf("WELCOME TO THE TWEET ANALYSIS PROGRAM\n\n\n");

	printf("0. Read data files\n");
	printf("1. display statistics\n");
	printf("2. Top 5 most tweeted words\n");
	printf("3. Top 5 most tweeted users\n");
	printf("4. Find users who tweeted a word (e.g., ’연세대’)\n");
	printf("5. Find all people who are friends of the above users\n");
	printf("6. Delete all mentions of a word\n");
	printf("7. Delete all users who mentioned a word\n");
	printf("8. Find strongly connected components\n");
	printf("9. Find shortest path from a given user\n");
	printf("99. Quit\n");
	
	printf("Select the menu!(0~9, 99)\n");
	scanf("%d", &r);
	return r;
}


void main(void)
{
	int sel;
	while(sel = menu())
	{
		switch(sel)
		{
		case 0: { Read_Data_Files(); break; }
		case 1: { Display_Statistics(); break; }
		case 2: { Top_5_Most_Tweeted_Words(); break; }
		case 3: { Top_5_Most_Tweeted_Users(); break; }
		case 4: { Find_Users(); break; }
		case 5: { Find_All_Friends(); break; }
		case 6: { Delete_All_Mentions(); break; }
		case 7: { Delete_All_Users(); break; }
		case 8: { Find_Strongly_Connected_Components(); break; }
		case 9: { Find_Shortest_Path(); break; }
		case 99: { Quit(); return;}
		}
	}
	return;
}

