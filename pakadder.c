#include <stdio.h>
#include <stdlib.h>
#include <string.h>

FILE *tdf;
FILE *output;
FILE *datnum;
FILE *cfgfile;
char temp[255];
//    char fishstinks[255];
char name[255], tempname[255], tclean[1];
char writeme[1024];
char *p;
char *ptr;
char xcoord[20];
char ycoord[20];
int x, y, ch_nuke = 2, xres = 0, yres = 0;
int cityh = 0, num = 1, px = 0, Select = 0, facnum = 0, owner = 0, cotrl = 0;
int objects = 1, skipper = 0;

char myself[] = "PAK Adder v0.1b1 - TDF 2 CSV converter (c) PMC 2002 - 2015";

int SEL = 0, facx = 0, facy = 0;

int create_stuff()
{
	printf("temp: %s\n", temp);
	return 0;
}

int get_selected_village()
{
	int rnd = 0;

	rnd = 1 + (int) (29.0 * rand() / (RAND_MAX + 1.0));
	SEL = 0;

	if (rnd == 0)
		SEL = 1555;
	if (rnd == 1)
		SEL = 1555;
	if (rnd == 2)
		SEL = 1558;
	if (rnd == 3)
		SEL = 1569;
	if (rnd == 4)
		SEL = 1572;
	if (rnd == 5)
		SEL = 1573;
	if (rnd == 6)
		SEL = 1574;
	if (rnd == 7)
		SEL = 1576;
	if (rnd == 8)
		SEL = 1577;
	if (rnd == 9)
		SEL = 1578;
	if (rnd == 10)
		SEL = 1580;
	if (rnd == 11)
		SEL = 1584;
	if (rnd == 12)
		SEL = 1585;
	if (rnd == 13)
		SEL = 1586;
	if (rnd == 14)
		SEL = 1587;
	if (rnd == 15)
		SEL = 1588;
	if (rnd == 16)
		SEL = 1590;
	if (rnd == 17)
		SEL = 1591;
	if (rnd == 18)
		SEL = 1592;
	if (rnd == 19)
		SEL = 1593;
	if (rnd == 20)
		SEL = 1594;
	if (rnd == 21)
		SEL = 1595;
	if (rnd == 22)
		SEL = 1917;
	if (rnd == 23)
		SEL = 1926;
	if (rnd == 24)
		SEL = 1927;
	if (rnd == 25)
		SEL = 1928;
	if (rnd == 26)
		SEL = 1929;
	if (rnd == 27)
		SEL = 1930;
	if (rnd == 28)
		SEL = 1931;
	if (rnd == 29)
		SEL = 1932;

	if (rnd == 0)
		printf("Alright rnd 0\n");

	return 0;
}

int get_selected_city()
{
	int rnd = 0;

	rnd = 1 + (int) (38.0 * rand() / (RAND_MAX + 1.0));
	SEL = 0;

	if (rnd == 0)
		SEL = 231;
	if (rnd == 1)
		SEL = 231;
	if (rnd == 2)
		SEL = 859;
	if (rnd == 3)
		SEL = 1070;
	if (rnd == 4)
		SEL = 1187;
	if (rnd == 5)
		SEL = 1535;
	if (rnd == 6)
		SEL = 1537;
	if (rnd == 7)
		SEL = 1538;
	if (rnd == 8)
		SEL = 1539;
	if (rnd == 9)
		SEL = 1566;
	if (rnd == 10)
		SEL = 1567;
	if (rnd == 11)
		SEL = 1579;
	if (rnd == 12)
		SEL = 1582;
	if (rnd == 13)
		SEL = 1597;
	if (rnd == 14)
		SEL = 1598;
	if (rnd == 15)
		SEL = 1600;
	if (rnd == 16)
		SEL = 1602;
	if (rnd == 17)
		SEL = 1604;
	if (rnd == 18)
		SEL = 1606;
	if (rnd == 19)
		SEL = 1623;
	if (rnd == 20)
		SEL = 1625;
	if (rnd == 21)
		SEL = 1626;
	if (rnd == 22)
		SEL = 1629;
	if (rnd == 23)
		SEL = 1630;
	if (rnd == 24)
		SEL = 1631;
	if (rnd == 25)
		SEL = 1632;
	if (rnd == 26)
		SEL = 1633;
	if (rnd == 27)
		SEL = 1634;
	if (rnd == 28)
		SEL = 1635;
	if (rnd == 29)
		SEL = 1636;
	if (rnd == 30)
		SEL = 1637;
	if (rnd == 31)
		SEL = 1638;
	if (rnd == 32)
		SEL = 1639;
	if (rnd == 33)
		SEL = 1906;
	if (rnd == 34)
		SEL = 1911;
	if (rnd == 35)
		SEL = 1912;
	if (rnd == 36)
		SEL = 1913;
	if (rnd == 37)
		SEL = 1914;
	if (rnd == 38)
		SEL = 1915;

	if (rnd == 0)
		printf("Alright rnd 0\n");

	return 0;
}

int get_selected_factory()
{
	int rnd = 0;

	rnd = 1 + (int) (70.0 * rand() / (RAND_MAX + 1.0));
	SEL = 0;

	if (rnd == 0)
		SEL = 218;
	if (rnd == 1)
		SEL = 218;
	if (rnd == 2)
		SEL = 230;
	if (rnd == 3)
		SEL = 234;
	if (rnd == 4)
		SEL = 872;
	if (rnd == 5)
		SEL = 1344;
	if (rnd == 6)
		SEL = 1347;
	if (rnd == 7)
		SEL = 1348;
	if (rnd == 8)
		SEL = 1349;
	if (rnd == 9)
		SEL = 1350;
	if (rnd == 10)
		SEL = 1351;
	if (rnd == 11)
		SEL = 1353;
	if (rnd == 12)
		SEL = 1354;
	if (rnd == 13)
		SEL = 1355;
	if (rnd == 14)
		SEL = 1356;
	if (rnd == 15)
		SEL = 1357;
	if (rnd == 16)
		SEL = 1358;
	if (rnd == 17)
		SEL = 1595;
	if (rnd == 18)
		SEL = 1810;
	if (rnd == 19)
		SEL = 1811;
	if (rnd == 20)
		SEL = 1814;
	if (rnd == 21)
		SEL = 1815;
	if (rnd == 22)
		SEL = 1816;
	if (rnd == 23)
		SEL = 1817;
	if (rnd == 24)
		SEL = 1819;
	if (rnd == 25)
		SEL = 1820;
	if (rnd == 26)
		SEL = 1821;
	if (rnd == 27)
		SEL = 1823;
	if (rnd == 28)
		SEL = 1824;
	if (rnd == 29)
		SEL = 1825;
	if (rnd == 30)
		SEL = 1826;
	if (rnd == 31)
		SEL = 1828;
	if (rnd == 32)
		SEL = 1829;
	if (rnd == 33)
		SEL = 1830;
	if (rnd == 34)
		SEL = 1832;
	if (rnd == 35)
		SEL = 1833;
	if (rnd == 36)
		SEL = 1834;
	if (rnd == 37)
		SEL = 1836;
	if (rnd == 38)
		SEL = 1838;
	if (rnd == 39)
		SEL = 1840;
	if (rnd == 40)
		SEL = 1841;
	if (rnd == 41)
		SEL = 1842;
	if (rnd == 42)
		SEL = 1843;
	if (rnd == 43)
		SEL = 1844;
	if (rnd == 44)
		SEL = 1845;
	if (rnd == 45)
		SEL = 1846;
	if (rnd == 46)
		SEL = 1847;
	if (rnd == 47)
		SEL = 1848;
	if (rnd == 48)
		SEL = 1849;
	if (rnd == 49)
		SEL = 1849;
	if (rnd == 50)
		SEL = 1851;
	if (rnd == 51)
		SEL = 1852;
	if (rnd == 52)
		SEL = 1854;
	if (rnd == 53)
		SEL = 1855;
	if (rnd == 54)
		SEL = 1856;
	if (rnd == 55)
		SEL = 1910;
	if (rnd == 56)
		SEL = 245;
	if (rnd == 57)
		SEL = 1412;
	if (rnd == 58)
		SEL = 1479;
	if (rnd == 59)
		SEL = 1728;
	if (rnd == 60)
		SEL = 1729;
	if (rnd == 61)
		SEL = 230;
	if (rnd == 62)
		SEL = 1441;
	if (rnd == 63)
		SEL = 1720;
	if (rnd == 64)
		SEL = 1721;
	if (rnd == 65)
		SEL = 1722;
	if (rnd == 66)
		SEL = 1724;
	if (rnd == 67)
		SEL = 1725;
	if (rnd == 68)
		SEL = 1726;
	if (rnd == 69)
		SEL = 1816;
	if (rnd == 70)
		SEL = 1910;

	if (rnd == 0)
		printf("Alright rnd 0\n");

	return 0;
}

int fish(int jepx, int jepy, int xres, int yres)
{
	int oldx = facx;
	int oldy = facy;

	facx = 0;
	facy = 0;

	while (1)
	{
		facx = jepx + (int) (5.0 * rand() / (RAND_MAX + 1.0)) - 2;
		facy = jepy + (int) (5.0 * rand() / (RAND_MAX + 1.0)) - 2;

		if (facx > xres)
			facx = xres;
		if (facy > yres)
			facy = yres;

// check for not UNDER the boundary
		if (facx < 1)
			facx = 1;
		if (facy < 1)
			facy = 1;

//printf("facx == %i, facy == %i\n",facx,facy);

		if ( ((facx != jepx) || (facy != jepy)) && ((oldx != facx) || (oldy != facy)) )
			return 0;
	}
}

int ReadCFG()
{
	cfgfile = fopen("village.cfg", "rt");
	if (!cfgfile)
	{
		printf("error opening village.cfg! exiting.\n");
		exit(1);
	}

	fgets(temp, 10, cfgfile);
	ch_nuke = atoi(temp);     /* characters to nuke */
	fgets(temp, 10, cfgfile);
	xres = atoi(temp);        /* x resolution */
	fgets(temp, 10, cfgfile);
	yres = atoi(temp);        /* y resolution */
	fgets(temp, 10, cfgfile);
	owner = atoi(temp);       /* owner   */
	fgets(temp, 10, cfgfile);
	cotrl = atoi(temp);       /* control */
	fgets(temp, 10, cfgfile);
	if (strstr(temp, "yes"))
		skipper = 1;               /* nonames? */

	fclose(cfgfile);

	if (xres < 1024 || yres < 1024)
	{
		printf("learn to configure village.cfg, dork!\n");
		exit(1);
	}

	printf("\n\t%s\n\ncfg file configs, ch_nuke: %i, xres: %i, yres: %i\n", myself, ch_nuke, xres, yres);

	return 0;
}

int ReadDATfile()
{
	datnum = fopen("village.dat", "rt");
	if (!datnum)
	{
		printf("error opening village.dat (reading), resetting to 4\n");
		num = 4;
	}
	else
	{
		fgets(temp, 10, datnum);
		num = atoi(temp);
		fclose(datnum);
		printf("First object number: %i\n", num);
	}

	return 0;
}

int WriteMe()
{
//printf("name: %s - select: %i - cityh: %i\n",name,Select,cityh);

	if (px <= 3 && skipper)
	{
		fgets(temp, 255, tdf);
		return 0;
	}
	if (num > 4002 && num < 4030)
		num = 4030;
	if (num > 5994 && num < 6005)
		num = 6005;

	if (x > 0 && y > 0 && x < xres && y < yres)
	{
		if (Select == 1)
			sprintf(writeme, "%s, Airbase, 01_19 Airbase, %i, 1772, %s, %s, 0, 0, 0, 0, %i, %i, 0, 33024, 235, 235, 0,15, 50, 0, %i, 0, 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0,\n", name, num, xcoord, ycoord, owner, num, cotrl);
		if (Select == 2)
		{
			if (cityh == 2)
			{
				get_selected_city();
				sprintf(writeme, "%s, City, 20, %i, %i, %s, %s, 0, 0, 0, 0, %i, %i, 0, 33024, 235, 235, 0, 2, 50, 0, %i, 0, 0 0 0,\n", name, num, SEL, xcoord, ycoord, owner, num, cotrl);

				fputs(writeme, output);
				get_selected_factory();
				fish(x, y, xres, yres);
				sprintf(writeme, "Nowhere, Factory, 20, %i, %i, %i, %i, 0, 0, 0, 2, %i, %i, 0, 32768, 0, 0, 0, 2, 30, %i, %i, 0, 0 0 0,\n", num + 1, SEL, facx, facy, owner, num + 1, num, cotrl);
				if (SEL == 0)
					printf("first factory SEL: %i\n", SEL);
				num++;
				facnum++;
				objects++;

				fputs(writeme, output);
				get_selected_factory();
				fish(x, y, xres, yres);
				sprintf(writeme, "Nowhere, Factory, 20, %i, %i, %i, %i, 0, 0, 0, 2, %i, %i, 0, 32768, 0, 0, 0, 2, 30, %i, %i, 0, 0 0 0,\n", (num + 1), SEL, facx, facy, owner, (num + 1), num, cotrl);
				if (SEL == 0)
					printf("second.... SEL: %i\n", SEL);
				num++;
				objects++;
			}

			if (cityh == 1 || cityh == 0)
			{
				get_selected_village();
				sprintf(writeme, "%s, Village, 20, %i, %i, %s, %s, 0, 0, 0, 0, %i, %i, 0, 0, 0, 0, 0, 3, 10, 0, %i, 0, 0 0 0 0, 22, 35, 35, 26, 15, 13, 255, 255, 0,\n", name, num, SEL, xcoord, ycoord, owner, num, cotrl);
			}
		}

		Select = 0;
		cityh = 0;

		num++;
		objects++;
		fputs(writeme, output);
	}
	fgets(temp, 255, tdf);

	return 0;
}

int Looper()
{
	int pnum = 0, pri = 0;
	char tempname[255];
	fgets(temp, 255, tdf);
	fgets(temp, 255, tdf);

	while (!feof(tdf))
	{
		pnum = 0;
		ptr = (char *)&temp;

		while (*ptr)
		{
			if (*ptr == ',')
			{
				pnum++;
				if (pnum == 19)
				{
					//printf("PNUM: %i - %s\n",pnum,ptr+1);
					strcpy(tempname, ptr + 1);
					p = strtok(tempname, " ");
					pri = atoi(p);
					//printf("joo p: %s - %i\n",p,pri);
					if (pri > 80)
						create_stuff();
				}
			}
			ptr++;
		}

		fgets(temp, 255, tdf);
	}

	fclose(tdf);
	fclose(output);

	return 0;
}

int fix_dat()
{
	datnum = fopen("village.dat", "wt");
	if (!datnum)
	{
		printf("error opening village.dat (writing)\n");
		exit(1);
	}

	sprintf(temp, "%i", num);
	fputs(temp, datnum);
	fclose(datnum);

	printf("Added %i factories.  Added %i objectives.  %i highest objectives num\n", facnum, objects, num);

	if (num > 28000)
		printf("\nYour objectives number is larger than 28,000, note that Falcon 4.0\ncampaign might have some problems with 28k.\n");

	printf("\n\thttp://tactical.nekromantix.com\n");
	return 0;
}

int OpenOurFiles()
{
	tdf = fopen("pakcitys.csv", "rt");
	if (!tdf)
	{
		printf("error opening pakcitys.csv!\n");
		exit(1);
	}

	output = fopen("pakadds1.csv", "wt");
	if (!output)
	{
		printf("error opening pakadds1.csv!\n");
		exit(1);
	}

	strcpy(writeme, "1.0 Objective Export Thu Dec 28 02:58:41 2000\n");
	fputs(writeme, output);
	strcpy(writeme, "Name, Type, Subtype, ID, Objective, X, Y, Z, STime, SFlag, BFlags, Owner, XID, LastRep, OFlags, Supply, Fuel, Losses, FCount, Priority, Parent, FOwner, LCount, Features, Links, Radar,\n");
	fputs(writeme, output);

	fgets(temp, 255, tdf);

	return 0;
}

int main()
{
	ReadCFG();

	ReadDATfile();

	OpenOurFiles();

	Looper();

	fix_dat();

	return 0;
}
