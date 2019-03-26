/****************************************************************************
 *                                                                          *
 * File    : main.c                                                         *
 *                                                                          *
 * Purpose : Console mode (command line) program.                           *
 *                                                                          *
 * History : Date      Reason                                               *
 *           00/00/00  Created                                              *
 *                                                                          *
 ****************************************************************************/

#include <stdio.h>

/****************************************************************************
 *                                                                          *
 * Function: main                                                           *
 *                                                                          *
 * Purpose : Main entry point.                                              *
 *                                                                          *
 * History : Date      Reason                                               *
 *           00/00/00  Created                                              *
 *                                                                          *
 ****************************************************************************/

int main(int argc, char *argv[])
{
    int fn,f1,f2;
	int n;

	printf("Valor? ");
	scanf("%d",&n);

	f1 = 1;
	f2 = 0;
	for (int i=1;i<=n;i++){
		fn = f1 + f2;
		f1 = f2;
		f2 = fn;
		printf("Ordem %d - %d\n",i,fn);
	}

    return 0;
}

