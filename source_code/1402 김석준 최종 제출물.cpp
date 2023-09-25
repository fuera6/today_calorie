#include <stdio.h>
#include <windows.h>
#include <conio.h>

#define UP 0
#define DOWN 1
#define SUBMIT 2

void BasicInfo(char sex, int grade, int group, int number);
void BasicMenu(char sex, int grade, int group, int number);
int Controller();
void gotoxy(int, int);
int MenuDraw();
void asking();
void Ending();

int SchoolPath();
int SchoolMeal();
int SchoolExe();

int main(void)
{
char name[5];
char sex;
int grade, group, number;
int right1, right2;

system("mode con cols=70 lines=40");
printf("대곽1인을 위한 오늘의 calorie에 오신 것을 환영합니다!\n");
printf("프로그램을 시작하기 전, 여러분이 누구인지 소개해주세요!\n");
printf("\n\n");
//Intro 

printf("[사용자 이름]\n");
while(1)
{
	printf("이름을 입력해 주세요!\n");
	printf("이름: ");
	scanf("%s", name);
    printf("본인 이름이 %s이(가) 맞으신가요? 맞다면 1을, 틀리다면 아무거나 입력해주세요.\n", name);
    scanf("%d", &right1);
    if(right1==1)
        break;
	else
        printf("\n정보가 틀렸나요? 다시 입력해주세요!\n\n");  
}
printf("\n\n");
//이름 입력 단계 

printf("[사용자 기본정보]\n");
while(1)
{
printf("\n");
printf("성별(남자이면 M, 여자이면 F를 입력해주세요): ");
fflush(stdin);
scanf("%c", &sex);
printf("학년(1, 2, 3중 써주세요): ");
scanf("%d", &grade);
printf("반: ");
scanf("%d", &group);
printf("번호: ");
scanf("%d", &number);
printf("\n");
BasicInfo(sex, grade, group, number);
printf("이 정보가 맞으신가요? 맞다면 1을, 틀리다면 아무거나 입력해주세요.\n");
scanf("%d", &right2);
if(right2==1)
    break;
else
    printf("\n정보가 틀렸나요? 다시 입력해주세요!\n");  
}
printf("\n");
//사용자 기본 정보 입력 

printf("자기 소개가 완료되었습니다. 3초후 기본 창으로 전환됩니다!\n");
Sleep(3000);
Main:
system("cls");
SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 10);
//사용자창 종료 


printf("\n\n\n\n\n\n");
printf("         오늘의 calorie : 대곽1인을 위한 맞춤형 열량계산기\n");
printf("         **************************************************\n");
printf("\n");
SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 11);
printf("             안녕하세요, %s님! 메뉴를 골라주세요!\n", name);
BasicMenu(sex, grade, group, number);
//기본 창 윗부분

int menuCode = MenuDraw();

if(menuCode==0)
{
    int y;
	SchoolPath:
	system("cls");
	int SchoolPath();
	y = SchoolPath();
	if(y==1)
	    goto SchoolPath;
	else
	    goto Main;
}
else if(menuCode==1)
{
	int y;
	SchoolMeal:
	system("cls");
	int SchoolMeal();
	y = SchoolMeal();
	if(y==1)
	    goto SchoolMeal;
	else
	    goto Main;
}
else if(menuCode==2)
{
	int y;
	SchoolExercise:
	system("cls");
	int SchoolExe();
	y = SchoolExe();
	if(y==1)
	    goto SchoolExercise;
	else
	    goto Main;
}
else if(menuCode==3)
{
	asking();
	goto Main;
}
else if(menuCode==4)
{
	system("cls");
	Ending();
}
return 0;
}
//main함수 종료 


void BasicInfo(char sex, int grade, int group, int number) //정보확인단계 
{
printf("입력하신 정보가 모두 맞는지 확인해주세요.\n");

printf("%c", 1);
for(int c=0; c<21; c++) 
    printf("%c", 6);
printf("%c", 2);
printf("\n");
//네모 상자 윗부분 그리기 

if((sex=='M')||(sex=='m'))
    printf("%c성별: 남자           %c\n", 5, 5);
else if((sex=='F')||(sex=='f'))
    printf("%c성별: 여자           %c\n", 5, 5);
else
    printf("%c성별: ???            %c\n", 5, 5);
if(grade==1)
printf("%c학년: 1학년          %c\n", 5, 5);
else if(grade==2)
printf("%c학년: 2학년          %c\n", 5, 5);
else if(grade==3)
printf("%c학년: 3학년          %c\n", 5, 5);
else
printf("%c학년: ???            %c\n", 5, 5);
if(group<10)
    printf("%c반: %d                %c\n", 5, group, 5);
else
    printf("%c반: %d               %c\n", 5, group, 5);
if(number<10)
    printf("%c번호: %d              %c\n", 5, number, 5);
else
    printf("%c번호: %d             %c\n", 5, number, 5);
//네모 상자 옆부분 및 내용 구성 

printf("%c", 3);
for(int d=0; d<21; d++)
    printf("%c", 6);
printf("%c", 4);
printf("\n");
}
//네모 상자 아랫부분 그리기 

void BasicMenu(char sex, int grade, int group, int number) //기본창 [나의 정보]칸 
{
	printf("            %c", 1);
	for(int e=0; e<42; e++)
	    printf("%c", 6);
	printf("%c", 2);
	printf("\n");
	
	printf("            %c", 5);
	printf("[나의 정보]");
	printf("                               %c\n", 5);
	
	printf("            %c", 5);
	if((sex=='M')||(sex=='m'))
    printf("성별: 남자                                %c\n", 5, 5);
else if((sex=='F')||(sex=='f'))
    printf("성별: 여자                                %c\n", 5, 5);
else
    printf("성별: ???                                 %c\n", 5, 5);
    
    printf("            %c", 5);
if(grade==1)
printf("학년: 1학년                               %c\n", 5, 5);
else if(grade==2)
printf("학년: 2학년                               %c\n", 5, 5);
else if(grade==3)
printf("학년: 3학년                               %c\n", 5, 5);
else
printf("학년: ???                                 %c\n", 5, 5);

printf("            %c", 5);
if(group<10)
    printf("반: %d                                     %c\n", group, 5);
else
    printf("반: %d                                    %c\n", group, 5);
    
printf("            %c", 5);    
if(number<10)
    printf("번호: %d                                   %c\n", number, 5);
else
    printf("번호: %d                                  %c\n", number, 5);

printf("            %c", 3);
for(int f=0; f<42; f++)
    printf("%c", 6);
printf("%c", 4);
printf("\n");
}

int Controller() //gotoxy함수를 쓰기 위한 준비작업 
{
	char way = getch();
	
	if((way=='w')||(way=='W'))
	    return UP;
	else if((way=='s')||(way=='S'))
	    return DOWN;
	else if(way == ' ')
	    return SUBMIT;
}

void gotoxy(int x, int y) // 메뉴 선택 
{
	HANDLE consoleHandle = GetStdHandle(STD_OUTPUT_HANDLE);
	COORD pos;
	pos.X = x;
	pos.Y = y;
	SetConsoleCursorPosition(consoleHandle, pos);
}

int MenuDraw() //메뉴 디자인 
{
	int x = 18;
	int y = 22;
	gotoxy(x-2, y);
	printf("> 오늘의 경로 칼로리 소모량 계산");
	gotoxy(x, y+1);
	printf("오늘의 음식 칼로리 섭취량 계산");
	gotoxy(x, y+2);
	printf("오늘의 운동 칼로리 소모량 계산");
	gotoxy(x, y+3);
	printf("도움말");
	gotoxy(x, y+4);
	printf("종료하기");
	gotoxy(x-3, y+9);
	printf("(조작을 위해 위로는 w, 아래로는 s를,");
	gotoxy(x-3, y+10);
	printf("선택으로는 스페이스바를 눌러주세요!)");
	gotoxy(x+2, y+13);
	printf("(혹시 작동이 되지 않는다면");
	gotoxy(x-8, y+14);
	printf("현재 키보드가 영어가 아닌 한글인지 확인해주세요!)\n");
	while(1)
	{
		int n = Controller();
		if(n==UP)
				{
					if(y>22)
			    {
			    	gotoxy(x-2, y);
			    	printf(" ");
			    	gotoxy(x-2, --y);
			    	printf(">");
				}

				}
		else if(n==DOWN)
				{
					if(y<26)
				{
					gotoxy(x-2, y);
					printf(" ");
					gotoxy(x-2, ++y);
					printf(">");
				}
		        }
				
		else if(n==SUBMIT)
				{
					return y-22;
					break;
				}
	    
    }
}

void asking() //도움말 
{
	int end;
	system("cls");
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 10);
	printf("\n");
	printf("                             도움말\n");
	printf("                           **********\n");
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 11);
	printf("                    내려가려면 0을 눌러주세요.\n\n");

	printf("<이 프로그램은 무엇인가요?>\n");
	printf("-본 프로그램은 공부와 컵라면에 찌들려 사는 우리 대곽 학생들을\n");
	printf(" 위해 제작된 대곽 1학년 전용 열량 계산기입니다.\n");
	printf("-이 프로그램을 통해 그동안 몰랐던 자신의 칼로리 실태를 간편하게\n");
	printf(" 확인할 수 있습니다.\n");
	printf("-자신의 생활 상태를 확인해보시고 습관을 바꿔보시는건 어떨까요?\n");
	while(1)
	{
		scanf("%d", &end);
	    if(end==0);
	    break;
	}
	
	printf("\n\n\n<이 프로그램의 특징은 무엇인가요?>\n");
	printf("-본 프로그램은 대곽 1학년 학생들의 일상을 참고한 작품입니다.\n");
	printf(" 즉, 여러분의 일상 생활에서 겪는 모든 일에서의 열량을 계산해\n");
	printf(" 줍니다.\n");
	printf("-본 프로그램은 경로 소모량 계산, 음식 섭취량 계산, 운동 소모량\n");
	printf(" 계산의 세가지로 구성되어 있습니다.\n");
	while(1)
	{
		scanf("%d", &end);
	    if(end==0);
	    break;
	}
	
	printf("\n\n\n<이 정보는 신뢰성이 있나요?>\n");
	printf("-본 프로그램은 신뢰도 높은 정보만을 선별하여 계산하기 때문에\n");
	printf(" 믿으셔도 좋습니다.\n");
	printf("-그러나, 칼로리 소모량보다는 얼마나 지속적으로 하느냐가 더\n");
	printf(" 중요하다는 연구결과도 있습니다.\n");
	printf("-너무 이 정보에만 의존하지 마시고 스스로 계획을 세워 꾸준히\n");
	printf(" 운동을 진행해 보세요!\n");
	while(1)
	{
		scanf("%d", &end);
	    if(end==0);
	    break;
	}
	
	printf("\n\n\n<출처>\n");
	printf("-핏짜 등산 바이블_정확한 칼로리 구하는 공식을 아시나요?\n");
	printf("-농심\n");
	printf("-오뚜기\n");
	printf("-AP SOFT\n");
	printf("-mwultong Blog\n");
	printf("-이근둥_근둥이의 블로그\n");
	
	printf("\n\n\n");
	printf("                                              made by 김석준");
	
	while(1)
	{
		scanf("%d", &end);
	    if(end==0);
	    break;
	}
}

void Ending() //종료하기 
{
	system("cls");
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 10);
	printf("\n\n\n\n\n\n");
printf("                       ****감사합니다!****\n");
printf("                 ****다음에 또 이용해주세요!****\n");
SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 11);
printf("\n\n\n\n");
printf("                           ***********       \n");
printf("                   **************************\n");
printf("                   *                        *\n");
printf("           *********        *********       *********\n");
printf("            ********        ****    *       ********\n");
printf("             *******        *    ****       *******\n");
printf("              ******        ******* *       ******\n");
printf("                ****        *   *****       ****\n");
printf("                  **        *********       **\n");
printf("                   *                        *\n");
printf("                   **************************\n");
printf("                       *******************       \n");
printf("\n\n\n\n");
printf("                                               made by 1402 김석준\n");
}

int SchoolPath() //경로 칼로리 계산 
{
	int place1, place2, place3, place4, place5, place6, place7;
	double distance=0;
	int then;
	system("cls");
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 10);
	printf("\n\n\n");
	printf("                  오늘의 경로 칼로리 소모량 계산\n");
	printf("                 ********************************\n\n");
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 11);
	printf("   오늘의 경로 칼로리를 계산하기 위하여 가는 순서대로 적어주세요!\n");
	
	printf("           *가는 곳 순서대로 번호를 입력하고 엔터를 치세요!*\n\n");
	
	printf("                      1. 본관 3층 : 체육관\n\n");
	printf("               2. 본관 5층 : 영어, 정보과학, 영어회화\n\n");
	printf("                  3. 본관 6층 : 홈룸, 수학, 물리학\n\n");
	printf("                  4. 본관 7층 : 한국사, 사회, 국어\n\n"); 
	printf("                       5. 궁리관 1층 : 화학\n\n");
	printf("                       6. 궁리관 2층 : 생명과학\n\n");
	printf("                      7. 궁리관 3층 : 융합과학(화학)\n\n");
	printf("                       8. 궁리관 4층 : 물리학\n\n");
	printf("            9. 궁리관 5층 : 지구과학, 융합과학(지구과학)\n\n");
	printf("\n");
	
	printf("아침 : 기숙사\n");
	
	printf("아침 : 독서동\n");
	
	printf("아침조회 : 홈룸\n");
	
	while(1)
	{
	printf("1교시 : ");
	fflush(stdin);
	scanf("%d", &place1);
	if(place1==1)
	{
		distance += 35+20*2+21;
		break;
	}
    else if(place1==2)
    {
    	distance += 35+20*1+18;
    	break;
	}
    else if(place1==3)
    {
    	distance += 0+20*0+10;
    	break;
	}
    else if(place1==4)
    {
        distance += 35+20*1+35;
		break;	
	}
    else if(place1==5)
    {
    	distance += 35+2.*3+32+20*1;
    	break;
	}
    else if(place1>=6 && place1<=9)
    {
        distance += 35+20*3+32+20*(place1-6);
		break;    	
	}
    else
        printf("다시입력해주세요!\n\n");    
    }
    
    while(1)
	{
	printf("2교시 : ");
	fflush(stdin);
	scanf("%d", &place2);
	if(place1==1)
	{
		if(place2==1)
		{
			distance+=0;
			break;
		}
		else if(place2>=2 && place2<=4)
		{
			distance += 21+20*1+32+20*(place2-1)+35;
			break;
		}
		else if(place2==5)
		{
			distance += 21+20*1+32+20*1;
			break;
		}
		else if(place2>=6 && place2<=9)
		{
			distance += 21+20*1+32+20*(place2-6);
			break;
		}
		else
		    printf("다시입력해주세요!\n\n");
	}
	else if(place1>=2 && place1<=4)
	{
		if(place2==1)
		{
			distance += 35+20*place1+21;
		}
		else if(place2>=2 && place2<=4)
		{
		    distance += (place2>place1) ? 70+20*(place2-place1) : 70+20*(place1-place2);
		    break;
		}
		else if(place2==5)
		{
		    distance += 35+20*place1+32+20*1;
		    break;
		}
		else if(place2>=6 && place2<=9)
		{
		    distance += 35+20*place1+32+20*(place2-6);
		    break;
		}
		else
		    printf("다시입력해주세요!\n\n");
	}
	else if(place1==5)
	{
		if(place2==1)
		{
		    distance += 20*1+32+20*1+70+21;
		    break;
		}
		else if(place2>=2 && place2<=4)
		{
			distance += 20*1+32+20*place2+35;
			break;
		}
		else if(place2==5)
		{
			distance += 0;
			break;
		}
		else if(place2>=6 && place2<=9)
		{
		    distance += 20*(place2-5);
			break;	
		}
		else
		    printf("다시입력해주세요!\n\n");
	}
	else if(place1>=6 && place1<=9)
	{
		if(place2==1)
		{
		    distance += 20*(place1-6)+32+20*1+70+21;
		    break;
		}
		else if(place2>=2 && place2<=4)
		{
		    distance += 20*(place1-6)+32+20*place2+35;
		    break;
		}
		else if(place2==5)
		{
		    distance += 20*(place1-5);
		    break;
		}
		else if(place2>=6 && place2<=9)
		{
			distance += (place2>place1) ? 20*(place2-place1) : 20*(place1-place2);
			break;
		}
		else
		    printf("다시입력해주세요!\n\n");
	}
    }
    
   while(1)
	{
	printf("3교시 : ");
	fflush(stdin);
	scanf("%d", &place3);
	if(place2==1)
	{
		if(place3==1)
		{
			distance+=0;
			break;
		}
		else if(place3>=2 && place3<=4)
		{
			distance += 21+20*1+32+20*(place3-1)+35;
			break;
		}
		else if(place3==5)
		{
			distance += 21+20*1+32+20*1;
			break;
		}
		else if(place3>=6 && place3<=9)
		{
			distance += 21+20*1+32+20*(place3-6);
			break;
		}
		else
		    printf("다시입력해주세요!\n\n");
	}
	else if(place2>=2 && place2<=4)
	{
		if(place3==1)
		{
			distance += 35+20*place2+21;
		}
		else if(place3>=2 && place3<=4)
		{
		    distance += (place3>place2) ? 70+20*(place3-place2) : 70+20*(place2-place3);
		    break;
		}
		else if(place3==5)
		{
		    distance += 35+20*place2+32+20*1;
		    break;
		}
		else if(place3>=6 && place3<=9)
		{
		    distance += 35+20*place2+32+20*(place3-6);
		    break;
		}
		else
		    printf("다시입력해주세요!\n\n");
	}
	else if(place2==5)
	{
		if(place3==1)
		{
		    distance += 20*1+32+20*1+70+21;
		    break;
		}
		else if(place3>=2 && place3<=4)
		{
			distance += 20*1+32+20*place3+35;
			break;
		}
		else if(place3==5)
		{
			distance += 0;
			break;
		}
		else if(place3>=6 && place3<=9)
		{
		    distance += 20*(place3-5);
			break;	
		}
		else
		    printf("다시입력해주세요!\n\n");
	}
	else if(place2>=6 && place2<=9)
	{
		if(place3==1)
		{
		    distance += 20*(place2-6)+32+20*1+70+21;
		    break;
		}
		else if(place3>=2 && place3<=4)
		{
		    distance += 20*(place2-6)+32+20*place3+35;
		    break;
		}
		else if(place3==5)
		{
		    distance += 20*(place2-5);
		    break;
		}
		else if(place3>=6 && place3<=9)
		{
			distance += (place3>place2) ? 20*(place3-place2) : 20*(place2-place3);
			break;
		}
		else
		    printf("다시입력해주세요!\n\n");
	}
    }
    
    while(1)
	{
	printf("4교시 : ");
	fflush(stdin);
	scanf("%d", &place4);
	if(place3==1)
	{
		if(place4==1)
		{
			distance+=0;
			break;
		}
		else if(place4>=2 && place4<=4)
		{
			distance += 21+20*1+32+20*(place4-1)+35;
			break;
		}
		else if(place4==5)
		{
			distance += 21+20*1+32+20*1;
			break;
		}
		else if(place4>=6 && place4<=9)
		{
			distance += 21+20*1+32+20*(place4-6);
			break;
		}
		else
		    printf("다시입력해주세요!\n\n");
	}
	else if(place3>=2 && place3<=4)
	{
		if(place4==1)
		{
			distance += 35+20*place3+21;
		}
		else if(place4>=2 && place4<=4)
		{
		    distance += (place4>place3) ? 70+20*(place4-place3) : 70+20*(place3-place4);
		    break;
		}
		else if(place4==5)
		{
		    distance += 35+20*place3+32+20*1;
		    break;
		}
		else if(place4>=6 && place4<=9)
		{
		    distance += 35+20*place3+32+20*(place4-6);
		    break;
		}
		else
		    printf("다시입력해주세요!\n\n");
	}
	else if(place3==5)
	{
		if(place4==1)
		{
		    distance += 20*1+32+20*1+70+21;
		    break;
		}
		else if(place4>=2 && place4<=4)
		{
			distance += 20*1+32+20*place4+35;
			break;
		}
		else if(place4==5)
		{
			distance += 0;
			break;
		}
		else if(place4>=6 && place4<=9)
		{
		    distance += 20*(place4-5);
			break;	
		}
		else
		    printf("다시입력해주세요!\n\n");
	}
	else if(place3>=6 && place3<=9)
	{
		if(place4==1)
		{
		    distance += 20*(place3-6)+32+20*1+70+21;
		    break;
		}
		else if(place4>=2 && place4<=4)
		{
		    distance += 20*(place3-6)+32+20*place4+35;
		    break;
		}
		else if(place4==5)
		{
		    distance += 20*(place3-5);
		    break;
		}
		else if(place4>=6 && place4<=9)
		{
			distance += (place4>place3) ? 20*(place4-place3) : 20*(place3-place4);
			break;
		}
		else
		    printf("다시입력해주세요!\n\n");
	}
    }
    
    while(1)
	{
	printf("5교시 : ");
	fflush(stdin);
	scanf("%d", &place5);
	if(place4==1)
	{
		if(place5==1)
		{
			distance+=0;
			break;
		}
		else if(place5>=2 && place5<=4)
		{
			distance += 21+20*1+32+20*(place5-1)+35;
			break;
		}
		else if(place5==5)
		{
			distance += 21+20*1+32+20*1;
			break;
		}
		else if(place5>=6 && place5<=9)
		{
			distance += 21+20*1+32+20*(place5-6);
			break;
		}
		else
		    printf("다시입력해주세요!\n\n");
	}
	else if(place4>=2 && place4<=4)
	{
		if(place5==1)
		{
			distance += 35+20*place4+21;
		}
		else if(place5>=2 && place5<=4)
		{
		    distance += (place5>place4) ? 70+20*(place5-place4) : 70+20*(place4-place5);
		    break;
		}
		else if(place5==5)
		{
		    distance += 35+20*place4+32+20*1;
		    break;
		}
		else if(place5>=6 && place5<=9)
		{
		    distance += 35+20*place4+32+20*(place5-6);
		    break;
		}
		else
		    printf("다시입력해주세요!\n\n");
	}
	else if(place4==5)
	{
		if(place5==1)
		{
		    distance += 20*1+32+20*1+70+21;
		    break;
		}
		else if(place5>=2 && place5<=4)
		{
			distance += 20*1+32+20*place5+35;
			break;
		}
		else if(place5==5)
		{
			distance += 0;
			break;
		}
		else if(place5>=6 && place5<=9)
		{
		    distance += 20*(place5-5);
			break;	
		}
		else
		    printf("다시입력해주세요!\n\n");
	}
	else if(place4>=6 && place4<=9)
	{
		if(place5==1)
		{
		    distance += 20*(place4-6)+32+20*1+70+21;
		    break;
		}
		else if(place5>=2 && place5<=4)
		{
		    distance += 20*(place4-6)+32+20*place5+35;
		    break;
		}
		else if(place5==5)
		{
		    distance += 20*(place4-5);
		    break;
		}
		else if(place5>=6 && place5<=9)
		{
			distance += (place5>place4) ? 20*(place5-place4) : 20*(place4-place5);
			break;
		}
		else
		    printf("다시입력해주세요!\n\n");
	}
    }
    
    while(1)
	{
	printf("6교시 : ");
	fflush(stdin);
	scanf("%d", &place6);
	if(place5==1)
	{
		if(place6==1)
		{
			distance+=0;
			break;
		}
		else if(place6>=2 && place6<=4)
		{
			distance += 21+20*1+32+20*(place6-1)+35;
			break;
		}
		else if(place6==5)
		{
			distance += 21+20*1+32+20*1;
			break;
		}
		else if(place6>=6 && place6<=9)
		{
			distance += 21+20*1+32+20*(place6-6);
			break;
		}
		else
		    printf("다시입력해주세요!\n\n");
	}
	else if(place5>=2 && place5<=4)
	{
		if(place6==1)
		{
			distance += 35+20*place5+21;
		}
		else if(place6>=2 && place6<=4)
		{
		    distance += (place6>place5) ? 70+20*(place6-place5) : 70+20*(place5-place6);
		    break;
		}
		else if(place6==5)
		{
		    distance += 35+20*place5+32+20*1;
		    break;
		}
		else if(place6>=6 && place6<=9)
		{
		    distance += 35+20*place5+32+20*(place6-6);
		    break;
		}
		else
		    printf("다시입력해주세요!\n\n");
	}
	else if(place5==5)
	{
		if(place6==1)
		{
		    distance += 20*1+32+20*1+70+21;
		    break;
		}
		else if(place6>=2 && place6<=4)
		{
			distance += 20*1+32+20*place6+35;
			break;
		}
		else if(place6==5)
		{
			distance += 0;
			break;
		}
		else if(place6>=6 && place6<=9)
		{
		    distance += 20*(place6-5);
			break;	
		}
		else
		    printf("다시입력해주세요!\n\n");
	}
	else if(place5>=6 && place5<=9)
	{
		if(place6==1)
		{
		    distance += 20*(place5-6)+32+20*1+70+21;
		    break;
		}
		else if(place6>=2 && place6<=4)
		{
		    distance += 20*(place5-6)+32+20*place6+35;
		    break;
		}
		else if(place6==5)
		{
		    distance += 20*(place5-5);
		    break;
		}
		else if(place6>=6 && place6<=9)
		{
			distance += (place6>place5) ? 20*(place6-place5) : 20*(place5-place6);
			break;
		}
		else
		    printf("다시입력해주세요!\n\n");
	}
    }
    
    while(1)
	{
	printf("7교시 : ");
	fflush(stdin);
	scanf("%d", &place7);
	if(place6==1)
	{
		if(place7==1)
		{
			distance+=0;
			break;
		}
		else if(place7>=2 && place7<=4)
		{
			distance += 21+20*1+32+20*(place7-1)+35;
			break;
		}
		else if(place7==5)
		{
			distance += 21+20*1+32+20*1;
			break;
		}
		else if(place7>=6 && place7<=9)
		{
			distance += 21+20*1+32+20*(place7-6);
			break;
		}
		else
		    printf("다시입력해주세요!\n\n");
	}
	else if(place6>=2 && place6<=4)
	{
		if(place7==1)
		{
			distance += 35+20*place6+21;
		}
		else if(place7>=2 && place7<=4)
		{
		    distance += (place7>place6) ? 70+20*(place7-place6) : 70+20*(place6-place7);
		    break;
		}
		else if(place7==5)
		{
		    distance += 35+20*place6+32+20*1;
		    break;
		}
		else if(place7>=6 && place7<=9)
		{
		    distance += 35+20*place6+32+20*(place7-6);
		    break;
		}
		else
		    printf("다시입력해주세요!\n\n");
	}
	else if(place6==5)
	{
		if(place7==1)
		{
		    distance += 20*1+32+20*1+70+21;
		    break;
		}
		else if(place7>=2 && place7<=4)
		{
			distance += 20*1+32+20*place7+35;
			break;
		}
		else if(place7==5)
		{
			distance += 0;
			break;
		}
		else if(place7>=6 && place7<=9)
		{
		    distance += 20*(place7-5);
			break;	
		}
		else
		    printf("다시입력해주세요!\n\n");
	}
	else if(place6>=6 && place6<=9)
	{
		if(place7==1)
		{
		    distance += 20*(place6-6)+32+20*1+70+21;
		    break;
		}
		else if(place7>=2 && place7<=4)
		{
		    distance += 20*(place6-6)+32+20*place7+35;
		    break;
		}
		else if(place7==5)
		{
		    distance += 20*(place6-5);
		    break;
		}
		else if(place7>=6 && place7<=9)
		{
			distance += (place7>place6) ? 20*(place7-place6) : 20*(place6-place7);
			break;
		}
		else
		    printf("다시입력해주세요!\n\n");
	}
    }
   
    //각각 어떤 장소에 다른 장소로 이동하는 것을 표현. distance는 걸음 수를 나타내며, 실제로 측정한 걸음수를 바탕으로 distance를 재었음. 걸음수 값은 숫자로 첨부 
		
	printf("\n");
    printf("자, 모든 경로 열량계산이 끝났습니다!\n");
    printf("오늘의 칼로리 소모량은...\n");
    Sleep(2000);
    printf("  >> -%.2fkcal\n", distance*0.03);
    printf("\n");
    while(1)
    {
    printf("다시하려면 1을, 기본창으로 돌아가려면 0을 눌러주세요!\n");
    printf("입력 : ");
    scanf("%d", &then);
    
    if(then==1)
        return 1;
    else if(then==0)
        return 0;
	else
        printf("다시 입력해주세요!\n\n");
    }
}

int SchoolMeal() //음식 칼로리 계산 
{
	int breakfast, bcal;
	int lunch, lcal;
	int dinner, dcal;
	int nighttimemeal, ncal;
	int elsething;
	int then;
	int sum=0;
	
	system("cls");
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 10); 
	printf("\n\n\n");
	printf("                  오늘의 음식 칼로리 섭취량 계산\n");
	printf("                 ********************************\n\n");
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 11);
	printf("    오늘의 음식 칼로리를 계산하기 위하여 아래 문항들에 답해주세요!\n");
	printf("   (참고로, 칼로리는 '식품안전나라' 누리집에 자세히 나와있습니다.)\n\n");
	
	printf("<아침>\n");
	while(1)
	{
	printf("1. 아침을 드셨나요?(맞으면 1, 아니면 0을 눌러주세요)");
	scanf("%d", &breakfast);
	if(breakfast==1)
	{
		printf("2. 오늘의 아침식사 칼로리 섭취량은 얼마인가요?(kcal단위로 써주세요)\n");
		printf("열량 : ");
		scanf("%d", &bcal);
		sum+=bcal;
		break; 
	}
	else if(breakfast==0)
	    break;
	else
	    printf("다시 입력해주세요!\n\n");
    }
    
    printf("\n\n\n<점심>\n");
	while(1)
	{
	printf("1. 점심을 드셨나요?(맞으면 1, 아니면 0을 눌러주세요)");
	scanf("%d", &lunch);
	if(lunch==1)
	{
		printf("2. 오늘의 점심식사 칼로리 섭취량은 얼마인가요?(kcal단위로 써주세요)\n");
		printf("열량 : ");
		scanf("%d", &lcal);
		sum+=lcal;
		break; 
	}
	else if(lunch==0)
	    break;
	else
	    printf("다시 입력해주세요!\n\n");
    }
    
    printf("\n\n\n<저녁>\n");
	while(1)
	{
	printf("1. 저녁을 드셨나요?(맞으면 1, 아니면 0을 눌러주세요)");
	scanf("%d", &dinner);
	if(dinner==1)
	{
		printf("2. 오늘의 저녁식사 칼로리 섭취량은 얼마인가요?(kcal단위로 써주세요)\n");
		printf("열량 : ");
		scanf("%d", &dcal);
		sum+=dcal;
		break; 
	}
	else if(dinner==0)
	    break;
	else
	    printf("다시 입력해주세요!\n\n");
    }
    
    printf("\n\n\n<야식>\n");
	while(1)
	{
	printf("1. 야식을 드셨나요?(맞으면 1, 아니면 0을 눌러주세요)");
	scanf("%d", &nighttimemeal);
	
	if(nighttimemeal==1)
	{
	while(1)
	{
	printf("2. 라면을 드셨나요?(맞으면 1, 아니면 0을 눌러주세요)");
	scanf("%d", &ncal);
	if(ncal==1)
	{
		printf("3. 다음중 자신이 먹은 라면을 모두 골라주세요.\n");
		printf("   (번호를 입력하시고 엔터를 누르시면 저장됩니다.\n");
		printf("    0을 누르시면 입력이 종료됩니다.)\n\n");
		printf("1. 육개장사발면          2. 불닭볶음면          3. 불닭볶음면(작은컵)\n\n");
		printf("4. 치즈불닭볶음면        5. 까르보불닭볶음면    6. 콕콕 스파게티\n\n");
		printf("7. 콕콕 치즈볶이         8. 콕콕 라면볶이       9. 짜파게티\n\n");
		printf("10. 짜파게티 범벅        11. 비빔면             12. 리얼치즈라면\n\n");
		printf("13. 신라면               14. 신라면(작은컵)     15. 신라면 블랙\n\n");
		printf("16. 신라면 블랙(작은컵)  17. 진짜장             18. 진짬뽕\n\n");
		printf("19. 스낵면               20. 사리곰탕           21. 나가사끼짬뽕\n\n");
		printf("22. 튀김우동             23. 튀김우동(작은컵)   24. 왕뚜껑\n\n");
		printf("25. 너구리               26. 열라면             27. 열라면(작은컵)\n\n");
		printf("28. 진라면               29. 진라면(작은컵)     30. 참깨라면\n\n");
		printf("31. 참깨라면(작은컵)     32. 삼양라면           33. 삼양라면(작은컵)\n\n");
		printf("34. 기타");
		printf("\n\n");
		for(int i=1; i!=0; )
		{
			printf("번호 입력: ");
			scanf("%d", &i);
			if(i==1)
			    sum+=675;
			else if(i==2)
			    sum+=425;
			else if(i==3)
			    sum+=280;
			else if(i==4)
			    sum+=430;
			else if(i==5)
			    sum+=425;
			else if(i==6)
			    sum+=485;
			else if(i==7)
			    sum+=410;
			else if(i==8)
			    sum+=475;
			else if(i==9)
			    sum+=560;
			else if(i==10)
			    sum+=315;
			else if(i==11)
			    sum+=465;
			else if(i==12)
			    sum+=480; 
			else if(i==13)
			    sum+=490;
			else if(i==14)
			    sum+=300;
			else if(i==15)
			    sum+=445;
			else if(i==16)
			    sum+=440;
			else if(i==17)
			    sum+=475;
			else if(i==18)
			    sum+=475;
			else if(i==19)
			    sum+=265;
			else if(i==20)
			    sum+=490;
			else if(i==21)
			    sum+=450;
			else if(i==22)
			    sum+=495;
			else if(i==23)
			    sum+=315;
			else if(i==24)
			    sum+=485;
			else if(i==25)
			    sum+=460;
			else if(i==27)
			    sum+=255;
			else if(i==28)
			    sum+=500;
			else if(i==29)
			    sum+=280;
			else if(i==30)
			    sum+=450;
			else if(i==31)
			    sum+=285;
			else if(i==32)
			    sum+=490;
			else if(i==33)
			    sum+=295;
			else if(i==34)
			    i=0;
			else if(i!=0)
			    printf("등록되지 않은 번호입니다. 다시 입력해주세요!\n");
			//추가하시고 싶으시면 더 추가하셔도 좋습니다. 
		}
		printf("4. 오늘 드신 다른 야식의 칼로리를 입력해주세요!(kcal단위로 써주세요.)\n");
		printf("열량 : ");
		scanf("%d", &elsething);
		sum+=elsething;
		break;
	}
	else if(ncal==0)
	{
		printf("\n");
		printf("3. 오늘 드신 다른 야식의 칼로리를 입력해주세요!(kcal단위로 써주세요.)\n");
		printf("열량 : ");
		scanf("%d", &elsething);
		sum+=elsething;
		break;
	}
	else
	    printf("다시 입력해주세요!\n\n");
    }
		break; 
	}
	
	else if(nighttimemeal==0)
		break;
		
	else
	    printf("다시 입력해주세요!\n\n");
    }
    printf("\n");
    printf("자, 모든 음식 열량계산이 끝났습니다!\n");
    printf("오늘의 칼로리 섭취량은...\n");
    Sleep(2000);
    printf("  >> %dkcal\n", sum);
    printf("\n");
    while(1)
    {
    printf("다시하려면 1을, 기본창으로 돌아가려면 0을 눌러주세요!\n");
    printf("입력 : ");
    scanf("%d", &then);
    if(then==1)
        return 1;
    else if(then==0)
        return 0;
    else
        printf("다시 입력해주세요!\n\n");
    }
}

int SchoolExe() //운동 칼로리 계산 
{
	int mornexe; 
	int PE, kind1, time1, Acal;
	int gapexe, kind2, time2, Bcal;
	int chedan, speed, kind3, time3, Ccal;
	int elsecal; 
	int then;
	double tot=0;
	system("cls");
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 10);
	printf("\n\n\n");
	printf("                  오늘의 운동 칼로리 소모량 계산\n");
	printf("                 ********************************\n\n");
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 11);
	printf("    오늘의 운동 칼로리를 계산하기 위하여 아래 문항들에 답해주세요!\n\n");
	
	printf("<아침운동>\n");
	while(1)
	{
	printf("1. 아침운동을 하셨나요?(맞으면 1, 아니면 0을 눌러주세요)");
	scanf("%d", &mornexe);
	if(mornexe==1)
	{
		tot+=5;
		break; 
	}
	else if(mornexe==0)
	    break;
	else
	    printf("다시 입력해주세요!\n\n");
    }
	
	printf("\n\n\n<체육>\n");
	while(1)
	{
	printf("1. 오늘 체육을 하셨나요?(맞으면 1, 아니면 0을 눌러주세요)");
	scanf("%d", &PE);
	if(PE==1)
	{
		printf("2. 어떤 종목을 하셨나요?\n");
		printf("   (번호를 입력하시고 엔터를 누르시면 됩니다.)\n\n");
		printf("1. 축구     2. 농구     3. 배드민턴     4. 탁구\n");
		printf("5. 아무것도 안하고 그냥 쉼\n\n");
		printf("종목 : ");
		scanf("%d", &kind1);
		if(kind1!=5)
		{
			printf("\n");
			printf("3. 몇분 하셨나요?(분단위로 적어주세요.)\n");
	     	printf("시간 : ");
		    scanf("%d", &time1); 
		} 
		if(kind1==1)
		{
			tot+=6.1*time1;
			break;
		}
		else if(kind1==2)
		{
			tot+=7.1*time1;
			break;
		}
		else if(kind1==3)
		{
			tot+=4.4*time1;
			break;
		}
		else if(kind1==4)
		{
			tot+=3.5*time1;
			break;
		}
		else if(kind1==5)
		{
			break;
		}
	}
	else if(PE==0)
	    break;
	else
	    printf("다시 입력해주세요!\n\n");
    }
    
    printf("\n\n\n<틈틈이 운동>\n");
	while(1)
	{
	printf("1. 급식시간 틈틈이 운동을 하셨나요?(맞으면 1, 아니면 0을 눌러주세요)");
	scanf("%d", &gapexe);
	if(gapexe==1)
	{
		printf("2. 어떤 종목을 하셨나요?\n");
		printf("   (번호를 입력하시고 엔터를 누르시면 됩니다.)\n\n");
		printf("1. 축구    2. 농구    3. 배드민턴    4. 탁구    5. 걷기    6. 기타\n\n");
		printf("종목 : ");
		scanf("%d", &kind2);
		if(kind2!=6)
		{
			printf("3. 몇분 하셨나요?(분단위로 적어주세요.)\n");
	     	printf("시간 : ");
		    scanf("%d", &time2); 
		} 
		if(kind2==1)
		{
			tot+=6.1*time2;
			break;
		}
		else if(kind2==2)
		{
			tot+=7.1*time2;
			break;
		}
		else if(kind2==3)
		{
			tot+=4.4*time2;
			break;
		}
		else if(kind2==4)
		{
			tot+=3.5*time2;
			break;
		}
		else if(kind2==5)
		{
			tot+=5.4*time2;
			break;
		}
		else if(kind2==6)
		{
			printf("3. 오늘 한 운동의 칼로리를 적어주세요.(kcal단위로 써주세요.)\n");
			printf("칼로리 : ");
			scanf("%d", &elsecal);
			tot+=elsecal;
		}
		    break;
		
	}
	else if(gapexe==0)
	    break;
	else
	    printf("다시 입력해주세요!\n\n");
    }
    
    printf("\n\n\n<체력단련실>\n");
	while(1)
	{
	printf("1. 체력단련실에서 운동을 하셨나요?(맞으면 1, 아니면 0을 눌러주세요)");
	scanf("%d", &chedan);
	if(chedan==1)
	{
		printf("2. 어떤 운동을 하셨나요?\n");
		printf("   (번호를 입력하시고 엔터를 누르시면 됩니다.)\n\n");
		printf("1. 러닝머신     2. 역도     3. 자전거 달리기     4. 복싱\n\n");
		printf("5. 승마머신     6. 덜덜이   7. 노젓기            8. 여기 없는데요\n\n");
		printf("종목 : ");
		scanf("%d", &kind3);
		if(kind3!=8)
		{
			printf("3. 몇분 하셨나요?(분단위로 적어주세요.)\n");
	     	printf("시간 : ");
		    scanf("%d", &time3); 
		}
		if(kind3==1)
		{
			printf("4. 얼마의 스피드로 달리셨나요?\n");
			printf("speed : ");
			scanf("%d", &speed);
			tot+=0.0157*((0.1*speed+3.5)/3.5)*60*time3;
			break;
		}
		else if(kind3==2)
		{
			tot+=3.3*time3;
			break;
		}
		else if(kind3==3)
		{
			tot+=6.63*time3;
			break;
		}
		else if(kind3==4)
		{
			tot+=9.75*time3;
			break;
		}
		else if(kind3==5)
		{
			tot+=4.8*time3;
			break;
		}
		else if(kind3==6)
		{
			tot+=0*time3;
			break;
		}
		else if(kind3==7)
		{
			tot+=8.3*time3;
			break;
		}
		else if(kind3==8)
		{
			printf("4. 운동의 대략적인 칼로리 소모량을 적어주세요.(kcal단위로 써주세요)\n");
	     	printf("칼로리 : ");
		    scanf("%d", &Ccal); 
			tot+=Ccal;
			break;
		}
		else
		    printf("다시 입력해주세요!\n\n");
	}
	else if(gapexe==0)
	    break;
	else
	    printf("다시 입력해주세요!\n\n");
    }
    
    printf("\n");
    printf("자, 모든 운동 열량계산이 끝났습니다!\n");
    printf("오늘의 칼로리 소모량은...\n");
    Sleep(2000);
    printf("  >> -%.2fkcal\n", tot);
    printf("\n");
    while(1)
    {
    printf("다시하려면 1을, 기본창으로 돌아가려면 0을 눌러주세요!\n");
    printf("입력 : ");
    scanf("%d", &then);
    
    if(then==1)
        return 1;
    else if(then==0)
        return 0;
	else
        printf("다시 입력해주세요!\n\n");
    }
    
}



