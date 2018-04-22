#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <time.h>
#include <windows.h>
struct Time
{
	int H;
	int M;
};
struct car
{
	char mark[20];
	char model[20];
	char typeOfMotor[20];
	char kuzov[20];
	char Gear[20];
	char privod[20];
	char polozhenieRulja[20];
	char Nomer[20];
};
struct Marshrut
{
	int nomerOfMarshrut;
	int nomerOfCar;
	char *nomerOfCarSSS;
	char *destination;
	Time TimeOfViezd;
	Time TimeofPribytja;
	Time TimeOfPereda4a;
};

void vivod(car mas[], int &kol);
void add_car(car mas[], int &kol);
void vivodMarshrut(Marshrut arr[], int &col);
void vivodMarInInterval(Marshrut arr[], int &col, int &condition);
void countMar(Marshrut arr[], int &col);
void Maxlen(Marshrut arr[], int &col);
void print(Marshrut arr[], int &col);

void main()
{
	setlocale(0, "");
	srand(time(0));
	rand();
	car arr[50];
	arr[0] = { "Toyota","A","������","�����","���","�������� ������","������������","894GKR" };
	arr[1] = { "BMW","B","������","�����","���","������ ������","�����������","654KDD" };
	arr[2] = { "Mercedes","C","���","�����","���","������ ������","�����������","354LJG" };
	arr[3] = { "Mazda","D","���","���������","���","�������� ������","�����������","987BDL" };
	arr[4] = { "Volkswagen","E","������","�������","���","�������� ������","�����������","489HKL" };
	arr[5] = { "Toyota","F","���","�������","���","������ ������","������������","953UDX" };
	arr[6] = { "Mercedes","G","���","����","���","������ ������","�����������","765OPD" };
	arr[7] = { "Mitsubishi","H","���","�����������","���","������ ������","������������","245BGJ" };
	arr[8] = { "Lada","I","������","�����","���","������ ������","�����������","126KFH" };
	arr[9] = { "Citroen","J","�������������","�������","���","�������� ������","������������","863SJZ" };
	arr[10] = { "Reno","K","�������������","�������","���","������ ������","������������","195DRS" };
	arr[11] = { "Peugeot","L","���","�������","���","������ ������","�����������","741UAT" };
	arr[12] = { "Geely","M","������","���������","���","������ ������","������������","197RUY" };
	arr[13] = { "Toyota","N","������","�����","���","�������� ������","������������","467FBV" };
	int kol = 14;
	Marshrut mas[50];
	mas[0] = { 1,15,"894GKR","��.A 1",6,0,7,45,0,15 };
	mas[1] = { 2,64,"654KDD","��.B 2",20,45,21,0,0,9 };
	mas[2] = { 3 ,13,"354LJG","��.C 3",12,50,14,48,0,6 };
	mas[3] = { 4,78,"987BDL","��.D 4-4-2",11,32,14,35,0,2 };
	mas[4] = { 5,95,"489HKL","��.D 4.1",12,10,13,42,0,3 };
	mas[5] = { 6,62,"195DRS","��.EE 5",16,54,18,51,0,12 };
	mas[6] = { 7,45,"126KFH","��.FA 7-6.2",12,6,15,45,0,26 };
	mas[7] = { 8,89,"197RUY","��.GF 8.3",7,55,8,59,0,24 };
	mas[8] = { 9,45,"953UDX","��.CFL 9",9,42,11,21,0,15 };
	mas[9] = { 10,21,"765OPD","��.JO 10-11",8,22,9,12,0,35 };
	mas[10] = { 11,29,"195DRS","��.LH 54",10,10,11,11,0,5 };
	mas[11] = { 12,56,"245BGJ","��.JOP 65",13,22,14,10,0,7 };
	mas[12] = { 13,59,"467FBV","��.FIK 15",14,30,15,40,0,9 };
	mas[13] = { 14,12,"863SJZ","��.XCR 32",15,20,15,40,0,4 };
	mas[14] = { 15,33,"741UAT","��.CGN 84-1",17,0,18,35,0,7 };
	mas[15] = { 16,38,"987BDL","��.LL 95 G2",20,20,21,5,0,1 };
	mas[16] = { 17,89,"197RUY","��.KO 47.5",21,50,22,40,0,5 };
	mas[17] = { 18,66,"894GKR","��.SY 44 H6",22,23,23,15,0,10 };
	int col = 18;
	int condition = 10;
	while (true)
	{
		
		printf("1: ������� ���������� �� ���� �������\n\n2: �������� ������\n\n3: ������� ���������� �� ���� ���������\n\n4: ������� ���������� � ���������, ����� ������� ����������� � \n   ��������� �������� ������� � ������������ ������� ������ ����� \n   �� ��������� %d �����\n\n5: ���������� ���������� ���������, ����� �������� ������� ���������� �� ������\n   �������� ��� (����� 12:00) � ������� ��� �������� � ���\n\n6: ����� ����� ������� �� ������� ���� �������\n\n7: ���������\n\n\n8: �����\n",condition);
		int x;
		scanf("%d", &x);
		if (x == 1)
		{
			system("cls");
			vivod(arr, kol);
			system("pause");
			system("cls");
		}
		if (x == 2)
		{
			system("cls");
			add_car(arr, kol);
			system("cls");
		}
		if (x == 3)
		{
			system("cls");
			vivodMarshrut(mas, col);
			system("pause");
			system("cls");
		}
		if (x == 4)
		{
			system("cls");
			vivodMarInInterval(mas,col,condition);
			system("pause");
			system("cls");
		}
		if (x == 5)
		{
			system("cls");
			countMar(mas, col);
			system("pause");
			system("cls");
		}	
		if (x == 6)
		{
			system("cls");
			Maxlen(mas, col);
			system("pause");
			system("cls");
		}
		if (x == 7)
		{
			system("cls");
			print(mas, col);
			system("pause");
			system("cls");
		}
		if (x == 8)
		{
			break;
		}
	}
	system("pause");
}

void vivod(car mas[], int &kol)
{
	for (int i = 0;i < kol;i++)
	{
		printf("\n______________________________________\n");
		printf("#%d. ����� : %s\n", i + 1, mas[i].mark);
		printf("     ������ : %s\n", mas[i].model);
		printf("     ��� ��������� : %s\n", mas[i].typeOfMotor);
		printf("     ����� : %s\n", mas[i].kuzov);
		printf("     ��� : %s\n", mas[i].Gear);
		printf("     ������ : %s\n", mas[i].privod);
		printf("     ��������� ���� : %s\n", mas[i].polozhenieRulja);
		printf("     ����� :  [%s]", mas[i].Nomer);
		printf("\n______________________________________\n");
	}
}
void add_car(car mas[], int &kol)
{
	printf("����� : ");
	scanf("%s",&mas[kol].mark);
	printf("������ : ");
	scanf("%s", &mas[kol].model);
	printf("��� ��������� : ");
	scanf("%s", &mas[kol].typeOfMotor);
	printf("����� : ");
	scanf("%s", &mas[kol].kuzov);
	printf("��� : ");
	scanf("%s",& mas[kol].Gear);
	printf("������ : ");
	scanf("%s", &mas[kol].privod);
	printf("��������� ���� : ");
	scanf("%s", &mas[kol].polozhenieRulja);
	
	while (true)
	{
		printf("����� : ");
		scanf("%s", &mas[kol].Nomer);
		if ((int)mas[kol].Nomer[0] > 64 &&
			(int)mas[kol].Nomer[0] < 91 &&
			(int)mas[kol].Nomer[1] > 64 &&
			(int)mas[kol].Nomer[1] < 91 &&
			(int)mas[kol].Nomer[2] > 64 &&
			(int)mas[kol].Nomer[2] < 91 &&
			(int)mas[kol].Nomer[3] > 47 &&
			(int)mas[kol].Nomer[3] < 58 &&
			(int)mas[kol].Nomer[4] > 47 &&
			(int)mas[kol].Nomer[4] < 58 &&
			(int)mas[kol].Nomer[5] > 47 &&
			(int)mas[kol].Nomer[5] < 58)
		{
			break;
		}
		else
		{
			printf("��������� ���� ����� ������ ����� �� ������ ������!\n ������ : AAA111,BCD123\n");
			system("pause");
			system("cls");
		}
		
	}
	kol++;

}
void vivodMarshrut(Marshrut arr[], int &col)
{
	for (int i = 0;i < col;i++)
	{
		printf("\n______________________________________\n");
		printf("#%d\t����� ��������   : � %d\n", i + 1, arr[i].nomerOfMarshrut);
		printf("   \t����� ������(��) : � %d\n", arr[i].nomerOfCar);
		printf("   \t����� ������(���): [%s]\n",arr[i].nomerOfCarSSS);
		printf("   \t����� ���������� : %s\n", arr[i].destination);
		printf("   \t����� ������     : %d : %d\n", arr[i].TimeOfViezd.H, arr[i].TimeOfViezd.M);
		printf("   \t����� ��������   : %d : %d\n", arr[i].TimeofPribytja.H, arr[i].TimeofPribytja.M);
		printf("\n  ������������ ������� ������ ����� : %d �����(�)\n", arr[i].TimeOfPereda4a.M);
		printf("\n  ����� ����������� �� �������� : %d �����(�)\n ", ((arr[i].TimeofPribytja.H - arr[i].TimeOfViezd.H)*60) + (arr[i].TimeofPribytja.M - arr[i].TimeOfViezd.M));
		printf("\n______________________________________\n");
	}
}
void vivodMarInInterval(Marshrut arr[], int &col, int &condition)
{
	while (true)
	{
		int S, Ms, F, Mf;
		bool x = false;

		while (true)
		{
			printf("������� �������� ������� � ");
			scanf("%d %d", &S, &Ms);
			printf(" �� ");
			scanf("%d %d", &F, &Mf);
			if (S >= 0 && S < 24 &&
				Ms >= 0 && Ms < 60 &&
				F >= S&&F < 24 &&
				Mf >= 0 && Mf < 60)
			{
				system("cls");
				break;
			}
			else
			{
				printf("\n\n�������� �������� ������� ����� ������������ ������!\n");
				system("pause");
				system("cls");
			}
		}
		for (int i = 0;i < col;i++)
		{
			if (S <= arr[i].TimeOfViezd.H &&
				Ms <= arr[i].TimeOfViezd.M &&
				F >= arr[i].TimeOfViezd.H &&
				Mf >= arr[i].TimeOfViezd.M && 
				arr[i].TimeOfPereda4a.M <= condition)
			{
				printf("\n______________________________________\n");
				printf("#%d\t����� ��������   : � %d\n", i + 1, arr[i].nomerOfMarshrut);
				printf("   \t����� ������(��) : � %d\n", arr[i].nomerOfCar);
				printf("   \t����� ������(���): [%s]\n", arr[i].nomerOfCarSSS);
				printf("   \t����� ���������� : %s\n", arr[i].destination);
				printf("   \t����� ������     : %d : %d\n", arr[i].TimeOfViezd.H, arr[i].TimeOfViezd.M);
				printf("   \t����� ��������   : %d : %d\n", arr[i].TimeofPribytja.H, arr[i].TimeofPribytja.M);
				printf("\n  ������������ ������� ������ ����� : %d �����(�)\n", arr[i].TimeOfPereda4a.M);
				printf("\n  ����� ����������� �� �������� : %d �����(�)\n ", ((arr[i].TimeofPribytja.H - arr[i].TimeOfViezd.H) * 60) + (arr[i].TimeofPribytja.M - arr[i].TimeOfViezd.M));
				printf("\n______________________________________\n");
			}
			else
			{
				printf("��������� � ��������� ����� �� ����������, ���� �� ��������� � ������ ���������.\n");
			}
		}
		if (x == true)
		{
			break;
		}
	}
}
void countMar(Marshrut arr[], int &col)
{
	int counter=0;

	for (int i = 0;i < col;i++)
	{
		if (arr[i].TimeofPribytja.H >= 12)
		{
			counter++;
		}
	}
	printf("���������� ���������, ����� �������� �������\n ���������� �� ������ �������� ��� (����� 12:00) ����� : %d", counter);
	Sleep(1500);
	for (int i = 0;i < col;i++)
	{
		if (arr[i].TimeofPribytja.H >= 12)
		{printf("\n______________________________________\n");
			printf("#%d\t����� ��������   : � %d\n", i + 1, arr[i].nomerOfMarshrut);
			printf("   \t����� ������(��) : � %d\n", arr[i].nomerOfCar);
			printf("   \t����� ������(���): [%s]\n", arr[i].nomerOfCarSSS);
			printf("   \t����� ���������� : %s\n", arr[i].destination);
			printf("   \t����� ������     : %d : %d\n", arr[i].TimeOfViezd.H, arr[i].TimeOfViezd.M);
			printf("   \t����� ��������   : %d : %d\n", arr[i].TimeofPribytja.H, arr[i].TimeofPribytja.M);
			printf("\n  ������������ ������� ������ ����� : %d �����(�)\n", arr[i].TimeOfPereda4a.M);
			printf("\n  ����� ����������� �� �������� : %d �����(�)\n ", ((arr[i].TimeofPribytja.H - arr[i].TimeOfViezd.H) * 60) + (arr[i].TimeofPribytja.M - arr[i].TimeOfViezd.M));
			printf("\n______________________________________\n");
			
		}
		Sleep(500);
	}
}
void Maxlen(Marshrut arr[], int &col)
{
	int x = 0;
	int max = ((arr[0].TimeofPribytja.H - arr[0].TimeOfViezd.H) * 60) + (arr[0].TimeofPribytja.M - arr[0].TimeOfViezd.M);
	for (int i = 0;i < col;i++)
	{
		if (((arr[i].TimeofPribytja.H - arr[i].TimeOfViezd.H) * 60) + (arr[i].TimeofPribytja.M - arr[i].TimeOfViezd.M) > max)
		{
			max = ((arr[i].TimeofPribytja.H - arr[i].TimeOfViezd.H) * 60) + (arr[i].TimeofPribytja.M - arr[i].TimeOfViezd.M);
			x = i;
		}
	}
	printf("����� c����� �������� �� ������� ���� �������� ���������� %d �����(�).", max);
	Sleep(1500);
	printf("\n______________________________________\n");
	printf("#%d\t����� ��������   : � %d\n", x , arr[x].nomerOfMarshrut);
	printf("   \t����� ������(��) : � %d\n", arr[x].nomerOfCar);
	printf("   \t����� ������(���): [%s]\n", arr[x].nomerOfCarSSS);
	printf("   \t����� ���������� : %s\n", arr[x].destination);
	printf("   \t����� ������     : %d : %d\n", arr[x].TimeOfViezd.H, arr[x].TimeOfViezd.M);
	printf("   \t����� ��������   : %d : %d\n", arr[x].TimeofPribytja.H, arr[x].TimeofPribytja.M);
	printf("\n  ������������ ������� ������ ����� : %d �����(�)\n", arr[x].TimeOfPereda4a.M);
	printf("\n  ����� ����������� �� �������� : %d �����(�)\n ", ((arr[x].TimeofPribytja.H - arr[x].TimeOfViezd.H) * 60) + (arr[x].TimeofPribytja.M - arr[x].TimeOfViezd.M));
	printf("\n______________________________________\n");
}
void print(Marshrut arr[], int &col)
{
	FILE *FP, *FL;
	if ((FP = fopen("Before 12 00.txt", "w")) == NULL)
	{
		printf("Error!\n");
		exit(1);
	}
	else
	{
		if ((FL = fopen("After 12 00.txt", "w")) == NULL)
		{
			printf("Error!\n");
			exit(1);
		}
		else
		{
			for (int i = 0;i < col;i++)
			{
				if (arr[i].TimeOfViezd.H < 12)
				{
					fprintf(FP,"\n______________________________________\n");
					fprintf(FP,"#%d\t����� ��������   : � %d\n", i + 1, arr[i].nomerOfMarshrut);
					fprintf(FP,"   \t����� ������(��) : � %d\n", arr[i].nomerOfCar);
					fprintf(FP,"   \t����� ������(���): [%s]\n", arr[i].nomerOfCarSSS);
					fprintf(FP,"   \t����� ���������� : %s\n", arr[i].destination);
					fprintf(FP,"   \t����� ������     : %d : %d\n", arr[i].TimeOfViezd.H, arr[i].TimeOfViezd.M);
					fprintf(FP,"   \t����� ��������   : %d : %d\n", arr[i].TimeofPribytja.H, arr[i].TimeofPribytja.M);
					fprintf(FP,"\n  ������������ ������� ������ ����� : %d �����(�)\n", arr[i].TimeOfPereda4a.M);
					fprintf(FP,"\n  ����� ����������� �� �������� : %d �����(�)\n ", ((arr[i].TimeofPribytja.H - arr[i].TimeOfViezd.H) * 60) + (arr[i].TimeofPribytja.M - arr[i].TimeOfViezd.M));
					fprintf(FP,"\n______________________________________\n");
				}
				if (arr[i].TimeOfViezd.H >= 12)
				{
					fprintf(FL, "\n______________________________________\n");
					fprintf(FL, "#%d\t����� ��������   : � %d\n", i + 1, arr[i].nomerOfMarshrut);
					fprintf(FL, "   \t����� ������(��) : � %d\n", arr[i].nomerOfCar);
					fprintf(FL, "   \t����� ������(���): [%s]\n", arr[i].nomerOfCarSSS);
					fprintf(FL, "   \t����� ���������� : %s\n", arr[i].destination);
					fprintf(FL, "   \t����� ������     : %d : %d\n", arr[i].TimeOfViezd.H, arr[i].TimeOfViezd.M);
					fprintf(FL, "   \t����� ��������   : %d : %d\n", arr[i].TimeofPribytja.H, arr[i].TimeofPribytja.M);
					fprintf(FL, "\n  ������������ ������� ������ ����� : %d �����(�)\n", arr[i].TimeOfPereda4a.M);
					fprintf(FL, "\n  ����� ����������� �� �������� : %d �����(�)\n ", ((arr[i].TimeofPribytja.H - arr[i].TimeOfViezd.H) * 60) + (arr[i].TimeofPribytja.M - arr[i].TimeOfViezd.M));
					fprintf(FL, "\n______________________________________\n");
				}
			}
		}
		if (fclose(FL) == 0)
		{
			printf("\nFile closed successfull!\n");
		}
		else
		{
			printf("������");
			exit(1);//exit(EXIT_FAILURE);
		}
	}
	if (fclose(FP) == 0)
	{
		printf("\nFile closed successfull!\n");
	}
	else
	{
		printf("������");
		exit(1);//exit(EXIT_FAILURE);
	}
}