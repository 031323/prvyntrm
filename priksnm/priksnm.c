#include "yugyntrm.h"

#include "dvyastktntrm.h"

#include <stdio.h>

#define Y(a, b) (nvm(&s, a, b, 0))
#define M(a) murdgrhnm(&s, a)

void gopah(char gopym, void * pdm)
{
	putc(gopym, (FILE *) pdm);
}

char ropkm(void * pdm)
{
	return getc((FILE *) pdm);
}

void prtmpriksnm()
{
	smbrnm s = nvsmbrnm();
	yugm a = Y(0, 0);
	M(a);
	yugm b = Y(0, 0);
	yugm c = Y(0, 0);
	yugm d = Y(0, 0);
	lekh(&s);
	yugm p = Y(a, Y(b, Y(a, Y(a, 0))));
	yugm r = Y(SMTVKM, Y(Y(Y(ANYKM, a), DISTRUPKM), Y(Y(ANYKM, c), Y(ANYKM, d))));
	yugm f = Y(ATIDESKM, Y(SMTVKM, Y(Y(Y(ANYKM, 0), DISTRUPKM), Y(Y(ANYKM, 0), Y(Y(YOGKM, Y(Y(ANYKM, r), SVYKM)), Y(YOGKM, Y(Y(ANYKM, ATIDESYKM), DKSINKM)))))));
	
	yugm n = nvm(&s, f, p, 1);
	M(n);
	lekh(&s);
	lekh(&s);
	FILE * outf = fopen("yugtntrm", "w+");
	gopnm(&s, &gopah, (void *) outf);
	fclose(outf);
	visrgh(&s);
	FILE * inf = fopen("yugtntrm", "r");
	s = ropnm(&ropkm, (void *) inf);
	lekh(&s);
	lekh(&s);
	visrgh(&s);
}

void dvyastktntrpriksnm()
{
	smbrnm s = dvyastktntrm();
	char * a = "abcd";
	yugm y = dvyastktnteryugtntih(&s, a, 4);
	int i;
	printf("%s\n", yugtnterdvyastktntih(&s, y, &i));
}

int main()
{
	dvyastktntrpriksnm();
	return 0;
}