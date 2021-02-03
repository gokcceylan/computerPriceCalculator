#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
//this program calculates the price of n computers
//uses dynamic memory allocation to change the allocated space according to the input number
// @gokcceylan

typedef struct{
    int ram;
    int core;
    }comp;
    
int main()
{
    int n, i, k;
	//n is # of computers
	//i is index
	//k is another index
    comp*ptr;
    print("# of computers you would like to know the price of:")
    scanf("%d", &n);
    ptr=(comp*)calloc(n,sizeof(comp));//malloc(n*sizeof(comp))
    
for(i=0;i<n;i++)
{
    scanf("%d", &(ptr+i)->core);
    scanf("%d", &(ptr+i)->ram);
}

int price[n];

for (k=0; k<n; k++){
    price[k]=(ptr+k)->core*300 + (ptr+k)->ram*100;
    printf("Price of Computer_%d: %d\n", k+1, price[k]);
}


 return 0;
}
