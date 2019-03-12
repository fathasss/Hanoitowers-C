#include "pch.h"
#include <iostream>
#include <string>
using namespace std;
void hanoi(int n, char kaynak, char hedef, char aralik)
{
	if (n == 1)
	{
		cout<<"\n kaynaktaki 1 diski tasiyin"<<kaynak<<" tan hedefe "<<hedef;
		return;
	}
	hanoi(n - 1, kaynak, aralik, hedef);
	cout << "\n Diskler" << n << " kaynaktan " << kaynak << "Hedef:" << hedef;
	hanoi(n - 1, aralik, hedef, kaynak);
}
int main()
{
	int sayi;
	cout << "Bir sayi degeri giriniz: ";
	cin>>sayi;
    hanoi(sayi, 'A', 'C', 'B');
	return 0;
}
