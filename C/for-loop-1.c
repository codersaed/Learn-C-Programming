#include <stdio.h>

int main(){
 int v = 30;
 for (int i=10; i<=v; i++) {
    printf("%d\n", i);
 }

};

/*Variants for loop */
int main(){

 for (int i=1, n=9; i<=n; i++, n--) {
    printf("%d %d\n", i, 10-i);
 }

};


int main(){
 int n;
 scanf("%d",&n);

 int sum = 0;
 for (int i=1; i<=n; i++) {
    sum += 2*i;
    printf("%d %d\n", i,sum);
 };

 printf("final sum = %d\n", sum);

};











