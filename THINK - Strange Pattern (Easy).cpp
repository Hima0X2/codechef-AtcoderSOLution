#include <stdio.h>

int count(int x){

 return 2+(x)/2-(x-2)/2;

}

int main(){

 for( int i=1 ; i-1001 ; i++ ) printf("%d %d\n",i,count(i));

 return 0;
}
