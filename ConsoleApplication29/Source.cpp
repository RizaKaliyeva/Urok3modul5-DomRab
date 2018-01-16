#include <stdio.h>
#include <locale.h>
#include <iostream>
#include <math.h>
#include <conio.h>
#include <time.h>
using namespace std;

#define sizeArr 20

int main()
{
	srand(time(NULL));
	setlocale(LC_ALL, "Russian");
	int z;
	do
	{
		cout << "Kakoe zadanie?" << endl;
		cin >> z;
		switch (z)
		{
		case 1:
		{
			/*1.	Ââåñòè äâà ìàññèâà äåéñòâèòåëüíûõ ÷èñåë, ñîñòîÿùèõ èç 9 è 7 ýëåìåíòîâ.
			Ñôîðìèðîâàòü òðåòèé ìàññèâ èç óïîðÿäî÷åííûõ ïî âîçðàñòàíèþ çíà÷åíèé îáîèõ ìàññèâîâ*/
			int arr[9], arr2[7], arr3[16], min, temp;
			for (int i = 0; i < 9; i++)
			{
				arr[i] = 1 + rand() % 30;
				cout << i << " - " << arr[i] << endl;
			}
			for (int i = 0; i < 7; i++)
			{
				arr2[i] = 1 + rand() % 30;
				cout << i << " - " << arr[i] << endl;
			}
			cout << "------------------------------" << endl;
			for (int i = 0; i < 9; i++)
			{
				arr3[i] = arr[i];
			}
			for (int i = 9; i < 16; i++)
			{
				arr3[i] = arr2[i];
			}
			for (int i = 0; i < 16; i++)
			{
				min = i;

				for (int j = i + 1; j < 16; j++)
				{
					if (arr3[j] < arr3[min])
						min = j;
				}
				temp = arr3[i];
				arr3[i] = arr3[min];
				arr3[min] = temp;
			}
			for (int i = 0; i < 16; i++)
			{
				cout << i << " - " << arr3[i] << endl;
			}
		}
		break;

		case 2:
		{
			/*2.	Â çàäàííîì öåëî÷èñëåííîì ìàññèâå R(9) îïðåäåëèòü èíäåêñ íàèáîëüøåãî
			èç íå÷åòíûõ ïî çíà÷åíèþ ïîëîæèòåëüíûõ ýëåìåíòîâ*/
			int R[9], max = 0, count = 0;
			for (int i = 0; i < 9; i++)
			{
				R[i] = 1 + rand() % 30;
				cout << i << " - " << R[i] << endl;
			}
			int imax = -1;
			for (int i = 0; i < 9; i++)
				if (R[i] % 2 == 1)
				{
					if (imax == -1)
						imax = i;
					else
						if (R[imax] < R[i])
							imax = i;
				}

			if (imax == -1) // åñëè íå÷åòíûõ íåò âîîáùå
				cout << "net nechetnyh" << endl;
			else
			{   // âûâîä íà êîíñîëü íàèáîëüøåãî íå÷åòíîãî
				cout << "Max nechetnoe =  " << R[imax] << endl;
				cout << "index  nechetnogo : " << imax << endl;
			}
		}
		break;

		case 3:
		{
			/*3.	Ââåñòè ìàññèâ, ñîñòîÿùèé èç 9 ýëåìåíòîâ(äåâÿòü äâóçíà÷íûõ ÷èñåë)
			öåëîãî òèïà.Ïîëó÷èòü íîâûé ìàññèâ, ñîñòîÿùèé èç ñóìì öèôð ýëåìåíòîâ èñõîäíîãî ìàññèâà*/
			int R[9], sum = 0, arr[9];
			for (int i = 0; i < 9; i++)
			{
				R[i] = 10 + rand() % 80;
				cout << i << " - " << R[i] << endl;
			}
			for (int i = 0; i < 9; i++)
			{
				sum += R[i];
				arr[i] = sum;
			}
			for (int i = 0; i < 9; i++)
			{
				cout << i << " - " << arr[i] << endl;
			}
		}
		break;

		case 4:
		{
			/*4.	Äàíû äåéñòâèòåëüíûå ÷èñëà c1, c2, …, cn.
			Íàéòè ïðîèçâåäåíèå ñóììû ÷èñåë ñ ÷åòíûìè èíäåêñàìè è ñóììû ÷èñåë ñ íå÷åòíûìè èíäåêñàìè.*/
			int R[20], sum = 0, sum1 = 0;
			for (int i = 0; i < 20; i++)
			{
				R[i] = 1 + rand() % 99;
				cout << i << " - " << R[i] << endl;
			}
			for (int i = 0; i < 20; i++)
			{
				if (R[i] % 2 == 0)
					sum += R[i];
				if (R[i] % 2 != 0)
					sum1 += R[i];
			}
			cout << "Summa chetnyh = " << sum << endl;
			cout << "Summa nechetnyh = " << sum1 << endl;
		}
		break;

		case 5:
		{
			/*5.	Ââåñòè ìàññèâ, ñîñòîÿùèé èç 14 ýëåìåíòîâ äåéñòâèòåëüíîãî òèïà.
			Ïîìåíÿòü ìåñòàìè ïåðâóþ ïîëîâèíó ñî âòîðîé.Îïðåäåëèòü êîëè÷åñòâî ïðîèçâåäåííûõ ïðè ýòîì ïåðåñòàíîâîê.*/
			int R[14], count = 0, r[7];
			for (int i = 0; i < 14; i++)
			{
				R[i] = 1 + rand() % 99;
				cout << i << " - " << R[i] << endl;
			}
			for (int i = 0; i < 14; i++)
			{
				r[i] = R[i];
				R[i] = R[i + 7];
				count++;
			}
			for (int i = 0; i < 14; i++)
			{
				R[i + 7] = r[i];
				count++;
			}
			cout << endl;
			for (int i = 0; i < 14; i++)
			{
				cout << i << " - " << R[i] << endl;
			}
			cout << "Perestanovok = " << count << endl;
		}
		break;

		case 6:
		{
			/*6.	Îïðåäåëèòü êîëè÷åñòâî ëîêàëüíûõ ìàêñèìóìîâ â çàäàííîì ÷èñëîâîì ìàññèâå.
			(Ëîêàëüíûé ìàêñèìóì â ÷èñëîâîì ìàññèâå – ýòî ïîñëåäîâàòåëüíîñòü òðåõ ðÿäîì ñòîÿùèõ ÷èñåë,
			â êîòîðîé ñðåäíåå ÷èñëî áîëüøå ñòîÿùèõ ñëåâà è ñïðàâà îò íåãî).*/
			int k[11], b = 0;
			for (int i = 0; i < 11; i++)
			{
				k[i] = 1 + rand() % 80;
				cout << k[i] << endl;
			}
			for (int i = 0; i < 11; i++)
			{
				if (k[i] < k[i + 1] && k[i + 1] > k[i + 2])
				{
					b++;
				}
			}
			cout << "------------" << endl;
			cout << b << endl;
		}
		break;

		case 7:
		{
			/*7.	Â çàäàííîì ÷èñëîâîì ìàññèâå îïðåäåëèòü è âûâåñòè èíäåêñû ïîñëåäîâàòåëüíîñòåé ÷èñåë,
			êîòîðûå ìîíîòîííî óáûâàþò(êàæäîå ñëåäóþùåå ÷èñëî ìåíüøå ïðåäûäóùåãî).*/
			int R[20], count = 0;
			for (int i = 0; i < 20; i++)
			{
				R[i] = 1 + rand() % 20;
				cout << i << " - " << R[i] << endl;
			}
			for (int i = 0; i < 20; i++)
			{
				if (R[i] > R[i + 1])
					count++;
			}
			cout << "Kol-vo (êàæäîå ñëåäóþùåå ÷èñëî ìåíüøå ïðåäûäóùåãî) = " << count << endl;
		}
		break;

		case 8:
		{
			/*8.	Ââåñòè ìàññèâ, ñîñòîÿùèé èç 10 ýëåìåíòîâ(äåñÿòü äâóçíà÷íûõ ÷èñåë) öåëîãî òèïà.
			Ïîëó÷èòü íîâûé ìàññèâ, ñîñòîÿùèé èç ðàçíîñòåé öèôð ýëåìåíòîâ èñõîäíîãî ìàññèâà.*/
			int R[10], raz = 0, arr[10];
			for (int i = 0; i < 10; i++)
			{
				R[i] = 10 + rand() % 80;
				cout << i << " - " << R[i] << endl;
			}
			for (int i = 0; i < 10; i++)
			{
				raz = raz - R[i];
				arr[i] = raz;
			}
			for (int i = 0; i < 10; i++)
			{
				cout << i << " - " << arr[i] << endl;
			}
		}
		break;

		case 9:
		{
			/*9.	Çàäàí öåëî÷èñëåííûé ìàññèâ.Îïðåäåëèòü êîëè÷åñòâî ó÷àñòêîâ ìàññèâà,
			íà êîòîðîì ýëåìåíòû ìîíîòîííî âîçðàñòàþò(êàæäîå ñëåäóþùåå ÷èñëî áîëüøå ïðåäûäóùåãî)*/
			int R[20], count = 0;
			for (int i = 0; i < 20; i++)
			{
				R[i] = 1 + rand() % 20;
				cout << i << " - " << R[i] << endl;
			}
			for (int i = 0; i < 20; i++)
			{
				if (R[i] < R[i + 1])
					count++;
			}
			cout << "Kol-vo (êàæäîå ñëåäóþùåå ÷èñëî áîëüøå ïðåäûäóùåãî) = " << count << endl;

		}
		break;

		case 10:
		{
			/*10.	Ââåñòè äâà ìàññèâà äåéñòâèòåëüíûõ ÷èñåë.
			Îïðåäåëèòü ìàêñèìàëüíûå ýëåìåíòû â êàæäîì ìàññèâå è ïîìåíÿòü èõ ìåñòàìè.*/
			int arr[10], arr2[10], max = 0, max1 = 0, k, l;
			for (int i = 0; i < 10; i++)
			{
				arr[i] = 1 + rand() % 90;
				cout << i << " - " << arr[i] << endl;
			}
			for (int i = 0; i < 10; i++)
			{
				arr2[i] = 1 + rand() % 90;
				cout << i << " - " << arr2[i] << endl;
			}
			cout << "--------" << endl;
			for (int i = 0; i < 10; i++)
			{

				if (arr[i] > arr[max])
					max = i;

				if (arr2[i] > arr2[max1])
					max1 = i;

				int max2 = max1;
				arr2[max1] = arr[max];
				arr[max] = arr2[max2];

			}

			for (int i = 0; i < 10; i++)
			{
				cout << i << " - " << arr[i] << endl;
			}
			cout << "--------" << endl;
			for (int i = 0; i < 10; i++)
			{
				cout << i << " - " << arr2[i] << endl;
			}
		}
		break;
		}
	} while (z <= 0);

	system("pause");
}