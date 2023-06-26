#include "types.h"
#include "stat.h"
#include "user.h"

#define N 3000		//global array size - change to see effect. Try 3000, 5000, 10000
int glob[N];
int main(){
	glob[0]=2;	//initialize with any integer value
	printf (1, "global addr from user space: %x\n", glob);
	for (int i=1;i<N;i++){
		glob[i]=glob[i-1];
		if (i%1000 == 0)
			pgtPrint();
	}	
	printf (1, "Printing final page table:\n");
	pgtPrint();
	printf(1, "Value: %d\n", glob[N-1]);
	
exit();
}

