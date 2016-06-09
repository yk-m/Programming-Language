/***  p08ex03.c  ***/
/***  s12169  2J34  松尾祐佳  ***/

#include <stdio.h>
#include <string.h>

typedef struct {
	char name[64];		/*名前*/
	char country[64];	/*ゆかりの地*/
	int YofBirth;		/*生年*/
	int YofDeath;		/*没年*/
} busho_t;

busho_t myCollection[]={
	{"Tokugawa Ieyasu","Mikawa",1543,1616},
	{"Ishida Mitsunari","Omi",1560,1600},
	{"Date Masamune","Oshu",1567,1636},
	{"Sanada Yukimura","Shinano",1570,1615},
	{"Otani Yoshitugu","Tsuruga",1559,1600},
	{"Honda Tadakatu","Mikawa",1548,1610},
	{"Chosokabe Mototika","Tosa",1539,1599},
	{"Mori Motonari","Aki",1497,1571},
	{"Saika Magoichi","Kii",1534,1589},
	{"Maeda keiji","Kyoto",1533,1612},
	{"Shimazu Yoshihiro","Satsuma",1535,1619},
	{"Oda Nobunaga","Owari",1534,1582},
	{"Toyotomi Hideyoshi","Osaka",1537,1598},
	{"Hojo Ujimasa","Sagami",1538,1590},
	{"Kobayakawa Hideaki","Bizen",1582,1602},
	{"Akechi Mitsuhide","Mino",1528,1582},
	{"Tachibana Muneshige","Chikugo",1567,1642},
	{"Otomo Sorin","Bungo",1530,1587},
	{"Katakura Kojuro","Oshu",1557,1615},
	{"Uesugi Kenshin","Echigo",1530,1578},
};

/*生年順ソート*/
void sortYearOfBirth(busho_t busho[],int number)
{
	int i,j;
	busho_t tmp;
	for (i=0;i<number-1;i++) {
		for (j=i+1;j<number;j++) {
			if (busho[i].YofBirth>busho[j].YofBirth) {
				tmp=busho[i];
				busho[i]=busho[j];
				busho[j]=tmp;
			}
		}
	}
}

/*没年順ソート*/
void sortYearOfDeath(busho_t busho[],int number)
{
	int i,j;
	busho_t tmp;
	for (i=0;i<number-1;i++) {
		for (j=i+1;j<number;j++) {
			if (busho[i].YofDeath>busho[j].YofDeath) {
				tmp=busho[i];
				busho[i]=busho[j];
				busho[j]=tmp;
			}
		}
	}
}

/*名前順ソート*/
void sortBushoName(busho_t busho[],int number)
{
	int i,j;
	busho_t tmp;
	for (i=0;i<number-1;i++) {
		for (j=i+1;j<number;j++) {
			if (0<strcmp(busho[i].name,busho[j].name)) {
				tmp=busho[i];
				busho[i]=busho[j];
				busho[j]=tmp;
			}
		}
	}
}

/*全映画表示*/
void printBusho(busho_t busho[],int number)
{
	int i;
	for (i=0;i<number;i++) {
		printf("%-24s %-10s %4d %4d\n",
			busho[i].name,
			busho[i].country,
			busho[i].YofBirth,
			busho[i].YofDeath);
	}
}

int main()
{
	int numberOfBusho=sizeof(myCollection)/sizeof(busho_t);

	printf("** Original data **\n");
	printBusho(myCollection,numberOfBusho);

	sortBushoName(myCollection,numberOfBusho);
	printf("\n** Name order **\n");
	printBusho(myCollection,numberOfBusho);

	sortYearOfBirth(myCollection,numberOfBusho);
	printf("\n** Year of Birth order **\n");
	printBusho(myCollection,numberOfBusho);

	sortYearOfDeath(myCollection,numberOfBusho);
	printf("\n** Year of Death order **\n");
	printBusho(myCollection,numberOfBusho);
	return 0;
}


/**************** 実行結果 *****************

** Original data **
Tokugawa Ieyasu          Mikawa     1543 1616
Ishida Mitsunari         Omi        1560 1600
Date Masamune            Oshu       1567 1636
Sanada Yukimura          Shinano    1570 1615
Otani Yoshitugu          Tsuruga    1559 1600
Honda Tadakatu           Mikawa     1548 1610
Chosokabe Mototika       Tosa       1539 1599
Mori Motonari            Aki        1497 1571
Saika Magoichi           Kii        1534 1589
Maeda keiji              Kyoto      1533 1612
Shimazu Yoshihiro        Satsuma    1535 1619
Oda Nobunaga             Owari      1534 1582
Toyotomi Hideyoshi       Osaka      1537 1598
Hojo Ujimasa             Sagami     1538 1590
Kobayakawa Hideaki       Bizen      1582 1602
Akechi Mitsuhide         Mino       1528 1582
Tachibana Muneshige      Chikugo    1567 1642
Otomo Sorin              Bungo      1530 1587
Katakura Kojuro          Oshu       1557 1615
Uesugi Kenshin           Echigo     1530 1578

** Name order **
Akechi Mitsuhide         Mino       1528 1582
Chosokabe Mototika       Tosa       1539 1599
Date Masamune            Oshu       1567 1636
Hojo Ujimasa             Sagami     1538 1590
Honda Tadakatu           Mikawa     1548 1610
Ishida Mitsunari         Omi        1560 1600
Katakura Kojuro          Oshu       1557 1615
Kobayakawa Hideaki       Bizen      1582 1602
Maeda keiji              Kyoto      1533 1612
Mori Motonari            Aki        1497 1571
Oda Nobunaga             Owari      1534 1582
Otani Yoshitugu          Tsuruga    1559 1600
Otomo Sorin              Bungo      1530 1587
Saika Magoichi           Kii        1534 1589
Sanada Yukimura          Shinano    1570 1615
Shimazu Yoshihiro        Satsuma    1535 1619
Tachibana Muneshige      Chikugo    1567 1642
Tokugawa Ieyasu          Mikawa     1543 1616
Toyotomi Hideyoshi       Osaka      1537 1598
Uesugi Kenshin           Echigo     1530 1578

** Year of Birth order **
Mori Motonari            Aki        1497 1571
Akechi Mitsuhide         Mino       1528 1582
Otomo Sorin              Bungo      1530 1587
Uesugi Kenshin           Echigo     1530 1578
Maeda keiji              Kyoto      1533 1612
Saika Magoichi           Kii        1534 1589
Oda Nobunaga             Owari      1534 1582
Shimazu Yoshihiro        Satsuma    1535 1619
Toyotomi Hideyoshi       Osaka      1537 1598
Hojo Ujimasa             Sagami     1538 1590
Chosokabe Mototika       Tosa       1539 1599
Tokugawa Ieyasu          Mikawa     1543 1616
Honda Tadakatu           Mikawa     1548 1610
Katakura Kojuro          Oshu       1557 1615
Otani Yoshitugu          Tsuruga    1559 1600
Ishida Mitsunari         Omi        1560 1600
Tachibana Muneshige      Chikugo    1567 1642
Date Masamune            Oshu       1567 1636
Sanada Yukimura          Shinano    1570 1615
Kobayakawa Hideaki       Bizen      1582 1602

** Year of Death order **
Mori Motonari            Aki        1497 1571
Uesugi Kenshin           Echigo     1530 1578
Akechi Mitsuhide         Mino       1528 1582
Oda Nobunaga             Owari      1534 1582
Otomo Sorin              Bungo      1530 1587
Saika Magoichi           Kii        1534 1589
Hojo Ujimasa             Sagami     1538 1590
Toyotomi Hideyoshi       Osaka      1537 1598
Chosokabe Mototika       Tosa       1539 1599
Otani Yoshitugu          Tsuruga    1559 1600
Ishida Mitsunari         Omi        1560 1600
Kobayakawa Hideaki       Bizen      1582 1602
Honda Tadakatu           Mikawa     1548 1610
Maeda keiji              Kyoto      1533 1612
Sanada Yukimura          Shinano    1570 1615
Katakura Kojuro          Oshu       1557 1615
Tokugawa Ieyasu          Mikawa     1543 1616
Shimazu Yoshihiro        Satsuma    1535 1619
Date Masamune            Oshu       1567 1636
Tachibana Muneshige      Chikugo    1567 1642

*******************************************/
