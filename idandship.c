#include <stdio.h>

int main(void) {
	// your code goes here
	int t;
	scanf("%d",&t);
	for(int i=1;i<=t;i++){
	    char ch;
	    scanf("%c",&ch);
	    if(ch=='B'||ch=='b')
	       printf("BattleShip\n");
	    else if(ch=='C'||ch=='c')
	       printf("Cruiser\n");
	    else if(ch=='d'||ch=='D')
	       printf("Destroyer\n");
	    else if(ch=='F'||ch=='f')
	       printf("Frigate\n");
	}
	return 0;
}

