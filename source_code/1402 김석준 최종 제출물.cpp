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
printf("���1���� ���� ������ calorie�� ���� ���� ȯ���մϴ�!\n");
printf("���α׷��� �����ϱ� ��, �������� �������� �Ұ����ּ���!\n");
printf("\n\n");
//Intro 

printf("[����� �̸�]\n");
while(1)
{
	printf("�̸��� �Է��� �ּ���!\n");
	printf("�̸�: ");
	scanf("%s", name);
    printf("���� �̸��� %s��(��) �����Ű���? �´ٸ� 1��, Ʋ���ٸ� �ƹ��ų� �Է����ּ���.\n", name);
    scanf("%d", &right1);
    if(right1==1)
        break;
	else
        printf("\n������ Ʋ�ȳ���? �ٽ� �Է����ּ���!\n\n");  
}
printf("\n\n");
//�̸� �Է� �ܰ� 

printf("[����� �⺻����]\n");
while(1)
{
printf("\n");
printf("����(�����̸� M, �����̸� F�� �Է����ּ���): ");
fflush(stdin);
scanf("%c", &sex);
printf("�г�(1, 2, 3�� ���ּ���): ");
scanf("%d", &grade);
printf("��: ");
scanf("%d", &group);
printf("��ȣ: ");
scanf("%d", &number);
printf("\n");
BasicInfo(sex, grade, group, number);
printf("�� ������ �����Ű���? �´ٸ� 1��, Ʋ���ٸ� �ƹ��ų� �Է����ּ���.\n");
scanf("%d", &right2);
if(right2==1)
    break;
else
    printf("\n������ Ʋ�ȳ���? �ٽ� �Է����ּ���!\n");  
}
printf("\n");
//����� �⺻ ���� �Է� 

printf("�ڱ� �Ұ��� �Ϸ�Ǿ����ϴ�. 3���� �⺻ â���� ��ȯ�˴ϴ�!\n");
Sleep(3000);
Main:
system("cls");
SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 10);
//�����â ���� 


printf("\n\n\n\n\n\n");
printf("         ������ calorie : ���1���� ���� ������ ��������\n");
printf("         **************************************************\n");
printf("\n");
SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 11);
printf("             �ȳ��ϼ���, %s��! �޴��� ����ּ���!\n", name);
BasicMenu(sex, grade, group, number);
//�⺻ â ���κ�

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
//main�Լ� ���� 


void BasicInfo(char sex, int grade, int group, int number) //����Ȯ�δܰ� 
{
printf("�Է��Ͻ� ������ ��� �´��� Ȯ�����ּ���.\n");

printf("%c", 1);
for(int c=0; c<21; c++) 
    printf("%c", 6);
printf("%c", 2);
printf("\n");
//�׸� ���� ���κ� �׸��� 

if((sex=='M')||(sex=='m'))
    printf("%c����: ����           %c\n", 5, 5);
else if((sex=='F')||(sex=='f'))
    printf("%c����: ����           %c\n", 5, 5);
else
    printf("%c����: ???            %c\n", 5, 5);
if(grade==1)
printf("%c�г�: 1�г�          %c\n", 5, 5);
else if(grade==2)
printf("%c�г�: 2�г�          %c\n", 5, 5);
else if(grade==3)
printf("%c�г�: 3�г�          %c\n", 5, 5);
else
printf("%c�г�: ???            %c\n", 5, 5);
if(group<10)
    printf("%c��: %d                %c\n", 5, group, 5);
else
    printf("%c��: %d               %c\n", 5, group, 5);
if(number<10)
    printf("%c��ȣ: %d              %c\n", 5, number, 5);
else
    printf("%c��ȣ: %d             %c\n", 5, number, 5);
//�׸� ���� ���κ� �� ���� ���� 

printf("%c", 3);
for(int d=0; d<21; d++)
    printf("%c", 6);
printf("%c", 4);
printf("\n");
}
//�׸� ���� �Ʒ��κ� �׸��� 

void BasicMenu(char sex, int grade, int group, int number) //�⺻â [���� ����]ĭ 
{
	printf("            %c", 1);
	for(int e=0; e<42; e++)
	    printf("%c", 6);
	printf("%c", 2);
	printf("\n");
	
	printf("            %c", 5);
	printf("[���� ����]");
	printf("                               %c\n", 5);
	
	printf("            %c", 5);
	if((sex=='M')||(sex=='m'))
    printf("����: ����                                %c\n", 5, 5);
else if((sex=='F')||(sex=='f'))
    printf("����: ����                                %c\n", 5, 5);
else
    printf("����: ???                                 %c\n", 5, 5);
    
    printf("            %c", 5);
if(grade==1)
printf("�г�: 1�г�                               %c\n", 5, 5);
else if(grade==2)
printf("�г�: 2�г�                               %c\n", 5, 5);
else if(grade==3)
printf("�г�: 3�г�                               %c\n", 5, 5);
else
printf("�г�: ???                                 %c\n", 5, 5);

printf("            %c", 5);
if(group<10)
    printf("��: %d                                     %c\n", group, 5);
else
    printf("��: %d                                    %c\n", group, 5);
    
printf("            %c", 5);    
if(number<10)
    printf("��ȣ: %d                                   %c\n", number, 5);
else
    printf("��ȣ: %d                                  %c\n", number, 5);

printf("            %c", 3);
for(int f=0; f<42; f++)
    printf("%c", 6);
printf("%c", 4);
printf("\n");
}

int Controller() //gotoxy�Լ��� ���� ���� �غ��۾� 
{
	char way = getch();
	
	if((way=='w')||(way=='W'))
	    return UP;
	else if((way=='s')||(way=='S'))
	    return DOWN;
	else if(way == ' ')
	    return SUBMIT;
}

void gotoxy(int x, int y) // �޴� ���� 
{
	HANDLE consoleHandle = GetStdHandle(STD_OUTPUT_HANDLE);
	COORD pos;
	pos.X = x;
	pos.Y = y;
	SetConsoleCursorPosition(consoleHandle, pos);
}

int MenuDraw() //�޴� ������ 
{
	int x = 18;
	int y = 22;
	gotoxy(x-2, y);
	printf("> ������ ��� Į�θ� �Ҹ� ���");
	gotoxy(x, y+1);
	printf("������ ���� Į�θ� ���뷮 ���");
	gotoxy(x, y+2);
	printf("������ � Į�θ� �Ҹ� ���");
	gotoxy(x, y+3);
	printf("����");
	gotoxy(x, y+4);
	printf("�����ϱ�");
	gotoxy(x-3, y+9);
	printf("(������ ���� ���δ� w, �Ʒ��δ� s��,");
	gotoxy(x-3, y+10);
	printf("�������δ� �����̽��ٸ� �����ּ���!)");
	gotoxy(x+2, y+13);
	printf("(Ȥ�� �۵��� ���� �ʴ´ٸ�");
	gotoxy(x-8, y+14);
	printf("���� Ű���尡 ��� �ƴ� �ѱ����� Ȯ�����ּ���!)\n");
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

void asking() //���� 
{
	int end;
	system("cls");
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 10);
	printf("\n");
	printf("                             ����\n");
	printf("                           **********\n");
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 11);
	printf("                    ���������� 0�� �����ּ���.\n\n");

	printf("<�� ���α׷��� �����ΰ���?>\n");
	printf("-�� ���α׷��� ���ο� �Ŷ�鿡 ���� ��� �츮 ��� �л�����\n");
	printf(" ���� ���۵� ��� 1�г� ���� ���� �����Դϴ�.\n");
	printf("-�� ���α׷��� ���� �׵��� ������ �ڽ��� Į�θ� ���¸� �����ϰ�\n");
	printf(" Ȯ���� �� �ֽ��ϴ�.\n");
	printf("-�ڽ��� ��Ȱ ���¸� Ȯ���غ��ð� ������ �ٲ㺸�ô°� ����?\n");
	while(1)
	{
		scanf("%d", &end);
	    if(end==0);
	    break;
	}
	
	printf("\n\n\n<�� ���α׷��� Ư¡�� �����ΰ���?>\n");
	printf("-�� ���α׷��� ��� 1�г� �л����� �ϻ��� ������ ��ǰ�Դϴ�.\n");
	printf(" ��, �������� �ϻ� ��Ȱ���� �޴� ��� �Ͽ����� ������ �����\n");
	printf(" �ݴϴ�.\n");
	printf("-�� ���α׷��� ��� �Ҹ� ���, ���� ���뷮 ���, � �Ҹ�\n");
	printf(" ����� �������� �����Ǿ� �ֽ��ϴ�.\n");
	while(1)
	{
		scanf("%d", &end);
	    if(end==0);
	    break;
	}
	
	printf("\n\n\n<�� ������ �ŷڼ��� �ֳ���?>\n");
	printf("-�� ���α׷��� �ŷڵ� ���� �������� �����Ͽ� ����ϱ� ������\n");
	printf(" �����ŵ� �����ϴ�.\n");
	printf("-�׷���, Į�θ� �Ҹ𷮺��ٴ� �󸶳� ���������� �ϴ��İ� ��\n");
	printf(" �߿��ϴٴ� ��������� �ֽ��ϴ�.\n");
	printf("-�ʹ� �� �������� �������� ���ð� ������ ��ȹ�� ���� ������\n");
	printf(" ��� ������ ������!\n");
	while(1)
	{
		scanf("%d", &end);
	    if(end==0);
	    break;
	}
	
	printf("\n\n\n<��ó>\n");
	printf("-��¥ ��� ���̺�_��Ȯ�� Į�θ� ���ϴ� ������ �ƽó���?\n");
	printf("-���\n");
	printf("-���ѱ�\n");
	printf("-AP SOFT\n");
	printf("-mwultong Blog\n");
	printf("-�̱ٵ�_�ٵ����� ��α�\n");
	
	printf("\n\n\n");
	printf("                                              made by �輮��");
	
	while(1)
	{
		scanf("%d", &end);
	    if(end==0);
	    break;
	}
}

void Ending() //�����ϱ� 
{
	system("cls");
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 10);
	printf("\n\n\n\n\n\n");
printf("                       ****�����մϴ�!****\n");
printf("                 ****������ �� �̿����ּ���!****\n");
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
printf("                                               made by 1402 �輮��\n");
}

int SchoolPath() //��� Į�θ� ��� 
{
	int place1, place2, place3, place4, place5, place6, place7;
	double distance=0;
	int then;
	system("cls");
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 10);
	printf("\n\n\n");
	printf("                  ������ ��� Į�θ� �Ҹ� ���\n");
	printf("                 ********************************\n\n");
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 11);
	printf("   ������ ��� Į�θ��� ����ϱ� ���Ͽ� ���� ������� �����ּ���!\n");
	
	printf("           *���� �� ������� ��ȣ�� �Է��ϰ� ���͸� ġ����!*\n\n");
	
	printf("                      1. ���� 3�� : ü����\n\n");
	printf("               2. ���� 5�� : ����, ��������, ����ȸȭ\n\n");
	printf("                  3. ���� 6�� : Ȩ��, ����, ������\n\n");
	printf("                  4. ���� 7�� : �ѱ���, ��ȸ, ����\n\n"); 
	printf("                       5. �ø��� 1�� : ȭ��\n\n");
	printf("                       6. �ø��� 2�� : �������\n\n");
	printf("                      7. �ø��� 3�� : ���հ���(ȭ��)\n\n");
	printf("                       8. �ø��� 4�� : ������\n\n");
	printf("            9. �ø��� 5�� : ��������, ���հ���(��������)\n\n");
	printf("\n");
	
	printf("��ħ : �����\n");
	
	printf("��ħ : ������\n");
	
	printf("��ħ��ȸ : Ȩ��\n");
	
	while(1)
	{
	printf("1���� : ");
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
        printf("�ٽ��Է����ּ���!\n\n");    
    }
    
    while(1)
	{
	printf("2���� : ");
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
		    printf("�ٽ��Է����ּ���!\n\n");
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
		    printf("�ٽ��Է����ּ���!\n\n");
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
		    printf("�ٽ��Է����ּ���!\n\n");
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
		    printf("�ٽ��Է����ּ���!\n\n");
	}
    }
    
   while(1)
	{
	printf("3���� : ");
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
		    printf("�ٽ��Է����ּ���!\n\n");
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
		    printf("�ٽ��Է����ּ���!\n\n");
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
		    printf("�ٽ��Է����ּ���!\n\n");
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
		    printf("�ٽ��Է����ּ���!\n\n");
	}
    }
    
    while(1)
	{
	printf("4���� : ");
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
		    printf("�ٽ��Է����ּ���!\n\n");
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
		    printf("�ٽ��Է����ּ���!\n\n");
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
		    printf("�ٽ��Է����ּ���!\n\n");
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
		    printf("�ٽ��Է����ּ���!\n\n");
	}
    }
    
    while(1)
	{
	printf("5���� : ");
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
		    printf("�ٽ��Է����ּ���!\n\n");
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
		    printf("�ٽ��Է����ּ���!\n\n");
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
		    printf("�ٽ��Է����ּ���!\n\n");
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
		    printf("�ٽ��Է����ּ���!\n\n");
	}
    }
    
    while(1)
	{
	printf("6���� : ");
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
		    printf("�ٽ��Է����ּ���!\n\n");
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
		    printf("�ٽ��Է����ּ���!\n\n");
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
		    printf("�ٽ��Է����ּ���!\n\n");
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
		    printf("�ٽ��Է����ּ���!\n\n");
	}
    }
    
    while(1)
	{
	printf("7���� : ");
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
		    printf("�ٽ��Է����ּ���!\n\n");
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
		    printf("�ٽ��Է����ּ���!\n\n");
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
		    printf("�ٽ��Է����ּ���!\n\n");
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
		    printf("�ٽ��Է����ּ���!\n\n");
	}
    }
   
    //���� � ��ҿ� �ٸ� ��ҷ� �̵��ϴ� ���� ǥ��. distance�� ���� ���� ��Ÿ����, ������ ������ �������� �������� distance�� �����. ������ ���� ���ڷ� ÷�� 
		
	printf("\n");
    printf("��, ��� ��� ��������� �������ϴ�!\n");
    printf("������ Į�θ� �Ҹ���...\n");
    Sleep(2000);
    printf("  >> -%.2fkcal\n", distance*0.03);
    printf("\n");
    while(1)
    {
    printf("�ٽ��Ϸ��� 1��, �⺻â���� ���ư����� 0�� �����ּ���!\n");
    printf("�Է� : ");
    scanf("%d", &then);
    
    if(then==1)
        return 1;
    else if(then==0)
        return 0;
	else
        printf("�ٽ� �Է����ּ���!\n\n");
    }
}

int SchoolMeal() //���� Į�θ� ��� 
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
	printf("                  ������ ���� Į�θ� ���뷮 ���\n");
	printf("                 ********************************\n\n");
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 11);
	printf("    ������ ���� Į�θ��� ����ϱ� ���Ͽ� �Ʒ� ���׵鿡 �����ּ���!\n");
	printf("   (�����, Į�θ��� '��ǰ��������' �������� �ڼ��� �����ֽ��ϴ�.)\n\n");
	
	printf("<��ħ>\n");
	while(1)
	{
	printf("1. ��ħ�� ��̳���?(������ 1, �ƴϸ� 0�� �����ּ���)");
	scanf("%d", &breakfast);
	if(breakfast==1)
	{
		printf("2. ������ ��ħ�Ļ� Į�θ� ���뷮�� ���ΰ���?(kcal������ ���ּ���)\n");
		printf("���� : ");
		scanf("%d", &bcal);
		sum+=bcal;
		break; 
	}
	else if(breakfast==0)
	    break;
	else
	    printf("�ٽ� �Է����ּ���!\n\n");
    }
    
    printf("\n\n\n<����>\n");
	while(1)
	{
	printf("1. ������ ��̳���?(������ 1, �ƴϸ� 0�� �����ּ���)");
	scanf("%d", &lunch);
	if(lunch==1)
	{
		printf("2. ������ ���ɽĻ� Į�θ� ���뷮�� ���ΰ���?(kcal������ ���ּ���)\n");
		printf("���� : ");
		scanf("%d", &lcal);
		sum+=lcal;
		break; 
	}
	else if(lunch==0)
	    break;
	else
	    printf("�ٽ� �Է����ּ���!\n\n");
    }
    
    printf("\n\n\n<����>\n");
	while(1)
	{
	printf("1. ������ ��̳���?(������ 1, �ƴϸ� 0�� �����ּ���)");
	scanf("%d", &dinner);
	if(dinner==1)
	{
		printf("2. ������ ����Ļ� Į�θ� ���뷮�� ���ΰ���?(kcal������ ���ּ���)\n");
		printf("���� : ");
		scanf("%d", &dcal);
		sum+=dcal;
		break; 
	}
	else if(dinner==0)
	    break;
	else
	    printf("�ٽ� �Է����ּ���!\n\n");
    }
    
    printf("\n\n\n<�߽�>\n");
	while(1)
	{
	printf("1. �߽��� ��̳���?(������ 1, �ƴϸ� 0�� �����ּ���)");
	scanf("%d", &nighttimemeal);
	
	if(nighttimemeal==1)
	{
	while(1)
	{
	printf("2. ����� ��̳���?(������ 1, �ƴϸ� 0�� �����ּ���)");
	scanf("%d", &ncal);
	if(ncal==1)
	{
		printf("3. ������ �ڽ��� ���� ����� ��� ����ּ���.\n");
		printf("   (��ȣ�� �Է��Ͻð� ���͸� �����ø� ����˴ϴ�.\n");
		printf("    0�� �����ø� �Է��� ����˴ϴ�.)\n\n");
		printf("1. �������߸�          2. �Ҵߺ�����          3. �Ҵߺ�����(������)\n\n");
		printf("4. ġ��Ҵߺ�����        5. ����Ҵߺ�����    6. ���� ���İ�Ƽ\n\n");
		printf("7. ���� ġ���         8. ���� ��麺��       9. ¥�İ�Ƽ\n\n");
		printf("10. ¥�İ�Ƽ ����        11. �����             12. ����ġ����\n\n");
		printf("13. �Ŷ��               14. �Ŷ��(������)     15. �Ŷ�� ��\n\n");
		printf("16. �Ŷ�� ��(������)  17. ��¥��             18. ��«��\n\n");
		printf("19. ������               20. �縮����           21. �����糢«��\n\n");
		printf("22. Ƣ��쵿             23. Ƣ��쵿(������)   24. �նѲ�\n\n");
		printf("25. �ʱ���               26. �����             27. �����(������)\n\n");
		printf("28. �����               29. �����(������)     30. �������\n\n");
		printf("31. �������(������)     32. �����           33. �����(������)\n\n");
		printf("34. ��Ÿ");
		printf("\n\n");
		for(int i=1; i!=0; )
		{
			printf("��ȣ �Է�: ");
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
			    printf("��ϵ��� ���� ��ȣ�Դϴ�. �ٽ� �Է����ּ���!\n");
			//�߰��Ͻð� �����ø� �� �߰��ϼŵ� �����ϴ�. 
		}
		printf("4. ���� ��� �ٸ� �߽��� Į�θ��� �Է����ּ���!(kcal������ ���ּ���.)\n");
		printf("���� : ");
		scanf("%d", &elsething);
		sum+=elsething;
		break;
	}
	else if(ncal==0)
	{
		printf("\n");
		printf("3. ���� ��� �ٸ� �߽��� Į�θ��� �Է����ּ���!(kcal������ ���ּ���.)\n");
		printf("���� : ");
		scanf("%d", &elsething);
		sum+=elsething;
		break;
	}
	else
	    printf("�ٽ� �Է����ּ���!\n\n");
    }
		break; 
	}
	
	else if(nighttimemeal==0)
		break;
		
	else
	    printf("�ٽ� �Է����ּ���!\n\n");
    }
    printf("\n");
    printf("��, ��� ���� ��������� �������ϴ�!\n");
    printf("������ Į�θ� ���뷮��...\n");
    Sleep(2000);
    printf("  >> %dkcal\n", sum);
    printf("\n");
    while(1)
    {
    printf("�ٽ��Ϸ��� 1��, �⺻â���� ���ư����� 0�� �����ּ���!\n");
    printf("�Է� : ");
    scanf("%d", &then);
    if(then==1)
        return 1;
    else if(then==0)
        return 0;
    else
        printf("�ٽ� �Է����ּ���!\n\n");
    }
}

int SchoolExe() //� Į�θ� ��� 
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
	printf("                  ������ � Į�θ� �Ҹ� ���\n");
	printf("                 ********************************\n\n");
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 11);
	printf("    ������ � Į�θ��� ����ϱ� ���Ͽ� �Ʒ� ���׵鿡 �����ּ���!\n\n");
	
	printf("<��ħ�>\n");
	while(1)
	{
	printf("1. ��ħ��� �ϼ̳���?(������ 1, �ƴϸ� 0�� �����ּ���)");
	scanf("%d", &mornexe);
	if(mornexe==1)
	{
		tot+=5;
		break; 
	}
	else if(mornexe==0)
	    break;
	else
	    printf("�ٽ� �Է����ּ���!\n\n");
    }
	
	printf("\n\n\n<ü��>\n");
	while(1)
	{
	printf("1. ���� ü���� �ϼ̳���?(������ 1, �ƴϸ� 0�� �����ּ���)");
	scanf("%d", &PE);
	if(PE==1)
	{
		printf("2. � ������ �ϼ̳���?\n");
		printf("   (��ȣ�� �Է��Ͻð� ���͸� �����ø� �˴ϴ�.)\n\n");
		printf("1. �౸     2. ��     3. ������     4. Ź��\n");
		printf("5. �ƹ��͵� ���ϰ� �׳� ��\n\n");
		printf("���� : ");
		scanf("%d", &kind1);
		if(kind1!=5)
		{
			printf("\n");
			printf("3. ��� �ϼ̳���?(�д����� �����ּ���.)\n");
	     	printf("�ð� : ");
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
	    printf("�ٽ� �Է����ּ���!\n\n");
    }
    
    printf("\n\n\n<ƴƴ�� �>\n");
	while(1)
	{
	printf("1. �޽Ľð� ƴƴ�� ��� �ϼ̳���?(������ 1, �ƴϸ� 0�� �����ּ���)");
	scanf("%d", &gapexe);
	if(gapexe==1)
	{
		printf("2. � ������ �ϼ̳���?\n");
		printf("   (��ȣ�� �Է��Ͻð� ���͸� �����ø� �˴ϴ�.)\n\n");
		printf("1. �౸    2. ��    3. ������    4. Ź��    5. �ȱ�    6. ��Ÿ\n\n");
		printf("���� : ");
		scanf("%d", &kind2);
		if(kind2!=6)
		{
			printf("3. ��� �ϼ̳���?(�д����� �����ּ���.)\n");
	     	printf("�ð� : ");
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
			printf("3. ���� �� ��� Į�θ��� �����ּ���.(kcal������ ���ּ���.)\n");
			printf("Į�θ� : ");
			scanf("%d", &elsecal);
			tot+=elsecal;
		}
		    break;
		
	}
	else if(gapexe==0)
	    break;
	else
	    printf("�ٽ� �Է����ּ���!\n\n");
    }
    
    printf("\n\n\n<ü�´ܷý�>\n");
	while(1)
	{
	printf("1. ü�´ܷýǿ��� ��� �ϼ̳���?(������ 1, �ƴϸ� 0�� �����ּ���)");
	scanf("%d", &chedan);
	if(chedan==1)
	{
		printf("2. � ��� �ϼ̳���?\n");
		printf("   (��ȣ�� �Է��Ͻð� ���͸� �����ø� �˴ϴ�.)\n\n");
		printf("1. ���׸ӽ�     2. ����     3. ������ �޸���     4. ����\n\n");
		printf("5. �¸��ӽ�     6. ������   7. ������            8. ���� ���µ���\n\n");
		printf("���� : ");
		scanf("%d", &kind3);
		if(kind3!=8)
		{
			printf("3. ��� �ϼ̳���?(�д����� �����ּ���.)\n");
	     	printf("�ð� : ");
		    scanf("%d", &time3); 
		}
		if(kind3==1)
		{
			printf("4. ���� ���ǵ�� �޸��̳���?\n");
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
			printf("4. ��� �뷫���� Į�θ� �Ҹ��� �����ּ���.(kcal������ ���ּ���)\n");
	     	printf("Į�θ� : ");
		    scanf("%d", &Ccal); 
			tot+=Ccal;
			break;
		}
		else
		    printf("�ٽ� �Է����ּ���!\n\n");
	}
	else if(gapexe==0)
	    break;
	else
	    printf("�ٽ� �Է����ּ���!\n\n");
    }
    
    printf("\n");
    printf("��, ��� � ��������� �������ϴ�!\n");
    printf("������ Į�θ� �Ҹ���...\n");
    Sleep(2000);
    printf("  >> -%.2fkcal\n", tot);
    printf("\n");
    while(1)
    {
    printf("�ٽ��Ϸ��� 1��, �⺻â���� ���ư����� 0�� �����ּ���!\n");
    printf("�Է� : ");
    scanf("%d", &then);
    
    if(then==1)
        return 1;
    else if(then==0)
        return 0;
	else
        printf("�ٽ� �Է����ּ���!\n\n");
    }
    
}



