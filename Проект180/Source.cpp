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
	arr[0] = { "Toyota","A","Бензин","Седан","АКП","Передний привод","Праворульный","894GKR" };
	arr[1] = { "BMW","B","Бензин","Седан","МКП","Задний привод","Леворульный","654KDD" };
	arr[2] = { "Mercedes","C","Газ","Седан","МКП","Задний привод","Леворульный","354LJG" };
	arr[3] = { "Mazda","D","Газ","Универсал","МКП","Передний привод","Леворульный","987BDL" };
	arr[4] = { "Volkswagen","E","Бензин","Хэтчбек","ВКП","Передний привод","Леворульный","489HKL" };
	arr[5] = { "Toyota","F","Газ","Лифтбек","РКП","Задний привод","Праворульный","953UDX" };
	arr[6] = { "Mercedes","G","Газ","Купе","ВКП","Задний привод","Леворульный","765OPD" };
	arr[7] = { "Mitsubishi","H","Газ","Внедорожник","АКП","Полный привод","Праворульный","245BGJ" };
	arr[8] = { "Lada","I","Бензин","Седан","МКП","Задний привод","Леворульный","126KFH" };
	arr[9] = { "Citroen","J","Электрический","Хэтчбек","РКП","Передний привод","Праворульный","863SJZ" };
	arr[10] = { "Reno","K","Электрический","Хэтчбек","АКП","Задний привод","Праворульный","195DRS" };
	arr[11] = { "Peugeot","L","Газ","Хэтчбек","ВКП","Задний привод","Леворульный","741UAT" };
	arr[12] = { "Geely","M","Бензин","Кроссовер","АКП","Полный привод","Праворульный","197RUY" };
	arr[13] = { "Toyota","N","Бензин","Пикап","АКП","Передний привод","Праворульный","467FBV" };
	int kol = 14;
	Marshrut mas[50];
	mas[0] = { 1,15,"894GKR","ул.A 1",6,0,7,45,0,15 };
	mas[1] = { 2,64,"654KDD","ул.B 2",20,45,21,0,0,9 };
	mas[2] = { 3 ,13,"354LJG","ул.C 3",12,50,14,48,0,6 };
	mas[3] = { 4,78,"987BDL","ул.D 4-4-2",11,32,14,35,0,2 };
	mas[4] = { 5,95,"489HKL","ул.D 4.1",12,10,13,42,0,3 };
	mas[5] = { 6,62,"195DRS","ул.EE 5",16,54,18,51,0,12 };
	mas[6] = { 7,45,"126KFH","ул.FA 7-6.2",12,6,15,45,0,26 };
	mas[7] = { 8,89,"197RUY","ул.GF 8.3",7,55,8,59,0,24 };
	mas[8] = { 9,45,"953UDX","ул.CFL 9",9,42,11,21,0,15 };
	mas[9] = { 10,21,"765OPD","ул.JO 10-11",8,22,9,12,0,35 };
	mas[10] = { 11,29,"195DRS","ул.LH 54",10,10,11,11,0,5 };
	mas[11] = { 12,56,"245BGJ","ул.JOP 65",13,22,14,10,0,7 };
	mas[12] = { 13,59,"467FBV","ул.FIK 15",14,30,15,40,0,9 };
	mas[13] = { 14,12,"863SJZ","ул.XCR 32",15,20,15,40,0,4 };
	mas[14] = { 15,33,"741UAT","ул.CGN 84-1",17,0,18,35,0,7 };
	mas[15] = { 16,38,"987BDL","ул.LL 95 G2",20,20,21,5,0,1 };
	mas[16] = { 17,89,"197RUY","ул.KO 47.5",21,50,22,40,0,5 };
	mas[17] = { 18,66,"894GKR","ул.SY 44 H6",22,23,23,15,0,10 };
	int col = 18;
	int condition = 10;
	while (true)
	{
		
		printf("1: Вывести информацию по всем машинам\n\n2: Добавить машину\n\n3: Вывести информацию по всем маршрутам\n\n4: Вывести информацию о маршрутах, выезд которых планируется в \n   указанный интервал времени и длительность времени обмена почты \n   не превышает %d минут\n\n5: Подсчитать количество маршрутов, время прибытия которых приходится на вторую\n   половину дня (после 12:00) и вывести все сведения о них\n\n6: Найти самый длинный по времени пути маршрут\n\n7: Сохранить\n\n\n8: Выход\n",condition);
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
		printf("#%d. Марка : %s\n", i + 1, mas[i].mark);
		printf("     Модель : %s\n", mas[i].model);
		printf("     Тип двигателя : %s\n", mas[i].typeOfMotor);
		printf("     Кузов : %s\n", mas[i].kuzov);
		printf("     КПП : %s\n", mas[i].Gear);
		printf("     Привод : %s\n", mas[i].privod);
		printf("     Положение руля : %s\n", mas[i].polozhenieRulja);
		printf("     Номер :  [%s]", mas[i].Nomer);
		printf("\n______________________________________\n");
	}
}
void add_car(car mas[], int &kol)
{
	printf("Марка : ");
	scanf("%s",&mas[kol].mark);
	printf("Модель : ");
	scanf("%s", &mas[kol].model);
	printf("Тип двигателя : ");
	scanf("%s", &mas[kol].typeOfMotor);
	printf("Кузов : ");
	scanf("%s", &mas[kol].kuzov);
	printf("КПП : ");
	scanf("%s",& mas[kol].Gear);
	printf("Привод : ");
	scanf("%s", &mas[kol].privod);
	printf("Положение руля : ");
	scanf("%s", &mas[kol].polozhenieRulja);
	
	while (true)
	{
		printf("Номер : ");
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
			printf("Введенный вами номер машины иммет не верный формат!\n Пример : AAA111,BCD123\n");
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
		printf("#%d\tНомер маршрута   : № %d\n", i + 1, arr[i].nomerOfMarshrut);
		printf("   \tНомер машины(рб) : № %d\n", arr[i].nomerOfCar);
		printf("   \tНомер машины(гос): [%s]\n",arr[i].nomerOfCarSSS);
		printf("   \tПункт назначения : %s\n", arr[i].destination);
		printf("   \tВремя выезда     : %d : %d\n", arr[i].TimeOfViezd.H, arr[i].TimeOfViezd.M);
		printf("   \tВремя прибытия   : %d : %d\n", arr[i].TimeofPribytja.H, arr[i].TimeofPribytja.M);
		printf("\n  Длительность времени обмена почты : %d минут(ы)\n", arr[i].TimeOfPereda4a.M);
		printf("\n  Время затраченное на прибытие : %d минут(ы)\n ", ((arr[i].TimeofPribytja.H - arr[i].TimeOfViezd.H)*60) + (arr[i].TimeofPribytja.M - arr[i].TimeOfViezd.M));
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
			printf("Введите интервал времени с ");
			scanf("%d %d", &S, &Ms);
			printf(" до ");
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
				printf("\n\nЗаданный интервал времени имеет неправильный формат!\n");
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
				printf("#%d\tНомер маршрута   : № %d\n", i + 1, arr[i].nomerOfMarshrut);
				printf("   \tНомер машины(рб) : № %d\n", arr[i].nomerOfCar);
				printf("   \tНомер машины(гос): [%s]\n", arr[i].nomerOfCarSSS);
				printf("   \tПункт назначения : %s\n", arr[i].destination);
				printf("   \tВремя выезда     : %d : %d\n", arr[i].TimeOfViezd.H, arr[i].TimeOfViezd.M);
				printf("   \tВремя прибытия   : %d : %d\n", arr[i].TimeofPribytja.H, arr[i].TimeofPribytja.M);
				printf("\n  Длительность времени обмена почты : %d минут(ы)\n", arr[i].TimeOfPereda4a.M);
				printf("\n  Время затраченное на прибытие : %d минут(ы)\n ", ((arr[i].TimeofPribytja.H - arr[i].TimeOfViezd.H) * 60) + (arr[i].TimeofPribytja.M - arr[i].TimeOfViezd.M));
				printf("\n______________________________________\n");
			}
			else
			{
				printf("Маршрутов в указанное время не существует, либо не совпадает с вашими условиями.\n");
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
	printf("Количество маршрутов, время прибытия которых\n приходится на вторую половину дня (после 12:00) равна : %d", counter);
	Sleep(1500);
	for (int i = 0;i < col;i++)
	{
		if (arr[i].TimeofPribytja.H >= 12)
		{printf("\n______________________________________\n");
			printf("#%d\tНомер маршрута   : № %d\n", i + 1, arr[i].nomerOfMarshrut);
			printf("   \tНомер машины(рб) : № %d\n", arr[i].nomerOfCar);
			printf("   \tНомер машины(гос): [%s]\n", arr[i].nomerOfCarSSS);
			printf("   \tПункт назначения : %s\n", arr[i].destination);
			printf("   \tВремя выезда     : %d : %d\n", arr[i].TimeOfViezd.H, arr[i].TimeOfViezd.M);
			printf("   \tВремя прибытия   : %d : %d\n", arr[i].TimeofPribytja.H, arr[i].TimeofPribytja.M);
			printf("\n  Длительность времени обмена почты : %d минут(ы)\n", arr[i].TimeOfPereda4a.M);
			printf("\n  Время затраченное на прибытие : %d минут(ы)\n ", ((arr[i].TimeofPribytja.H - arr[i].TimeOfViezd.H) * 60) + (arr[i].TimeofPribytja.M - arr[i].TimeOfViezd.M));
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
	printf("Время cамого длинного по времени пути маршрута составляет %d минут(ы).", max);
	Sleep(1500);
	printf("\n______________________________________\n");
	printf("#%d\tНомер маршрута   : № %d\n", x , arr[x].nomerOfMarshrut);
	printf("   \tНомер машины(рб) : № %d\n", arr[x].nomerOfCar);
	printf("   \tНомер машины(гос): [%s]\n", arr[x].nomerOfCarSSS);
	printf("   \tПункт назначения : %s\n", arr[x].destination);
	printf("   \tВремя выезда     : %d : %d\n", arr[x].TimeOfViezd.H, arr[x].TimeOfViezd.M);
	printf("   \tВремя прибытия   : %d : %d\n", arr[x].TimeofPribytja.H, arr[x].TimeofPribytja.M);
	printf("\n  Длительность времени обмена почты : %d минут(ы)\n", arr[x].TimeOfPereda4a.M);
	printf("\n  Время затраченное на прибытие : %d минут(ы)\n ", ((arr[x].TimeofPribytja.H - arr[x].TimeOfViezd.H) * 60) + (arr[x].TimeofPribytja.M - arr[x].TimeOfViezd.M));
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
					fprintf(FP,"#%d\tНомер маршрута   : № %d\n", i + 1, arr[i].nomerOfMarshrut);
					fprintf(FP,"   \tНомер машины(рб) : № %d\n", arr[i].nomerOfCar);
					fprintf(FP,"   \tНомер машины(гос): [%s]\n", arr[i].nomerOfCarSSS);
					fprintf(FP,"   \tПункт назначения : %s\n", arr[i].destination);
					fprintf(FP,"   \tВремя выезда     : %d : %d\n", arr[i].TimeOfViezd.H, arr[i].TimeOfViezd.M);
					fprintf(FP,"   \tВремя прибытия   : %d : %d\n", arr[i].TimeofPribytja.H, arr[i].TimeofPribytja.M);
					fprintf(FP,"\n  Длительность времени обмена почты : %d минут(ы)\n", arr[i].TimeOfPereda4a.M);
					fprintf(FP,"\n  Время затраченное на прибытие : %d минут(ы)\n ", ((arr[i].TimeofPribytja.H - arr[i].TimeOfViezd.H) * 60) + (arr[i].TimeofPribytja.M - arr[i].TimeOfViezd.M));
					fprintf(FP,"\n______________________________________\n");
				}
				if (arr[i].TimeOfViezd.H >= 12)
				{
					fprintf(FL, "\n______________________________________\n");
					fprintf(FL, "#%d\tНомер маршрута   : № %d\n", i + 1, arr[i].nomerOfMarshrut);
					fprintf(FL, "   \tНомер машины(рб) : № %d\n", arr[i].nomerOfCar);
					fprintf(FL, "   \tНомер машины(гос): [%s]\n", arr[i].nomerOfCarSSS);
					fprintf(FL, "   \tПункт назначения : %s\n", arr[i].destination);
					fprintf(FL, "   \tВремя выезда     : %d : %d\n", arr[i].TimeOfViezd.H, arr[i].TimeOfViezd.M);
					fprintf(FL, "   \tВремя прибытия   : %d : %d\n", arr[i].TimeofPribytja.H, arr[i].TimeofPribytja.M);
					fprintf(FL, "\n  Длительность времени обмена почты : %d минут(ы)\n", arr[i].TimeOfPereda4a.M);
					fprintf(FL, "\n  Время затраченное на прибытие : %d минут(ы)\n ", ((arr[i].TimeofPribytja.H - arr[i].TimeOfViezd.H) * 60) + (arr[i].TimeofPribytja.M - arr[i].TimeOfViezd.M));
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
			printf("Ошибка");
			exit(1);//exit(EXIT_FAILURE);
		}
	}
	if (fclose(FP) == 0)
	{
		printf("\nFile closed successfull!\n");
	}
	else
	{
		printf("Ошибка");
		exit(1);//exit(EXIT_FAILURE);
	}
}