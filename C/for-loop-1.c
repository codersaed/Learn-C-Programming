#include <stdio.h>

int main(){
 int v = 30;
 for (int i=10; i<=v; i++) {
    printf("%d\n", i);
 }

};

/*Variants for loop*/
int main(){

 for (int i=1, n=9; i<=n; i++, n--) {
    printf("%d %d\n", i, 10-i);
 }

};


