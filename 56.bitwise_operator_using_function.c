/*-----------Program Bitwise Operator dengan Constarain untuk mencari Nilai Maksimum------------*/


#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

//funsgi hitung nilai maximum
void hitung_nilai_maximum (int n, int k){
	//inisiasi
	int maxAnd  =0;
	int maxOr	=0;
	int maxXor 	=0;
	
	//Nested looping
	int i,j;
	for (i=1;i<=n;i++){
		for (j=i+1;j<=n;j++){
			if ( ((i&j) > maxAnd) && ((i&j)<k) ){
				maxAnd 	= i&j;
			}
			if ( ((i|j) >maxOr) && ((i|j)<k) ){
				maxOr	= i|j;
			}
			if ( ((i^j) > maxXor ) && ((i|j)<k) ){
				maxXor	= i^j;
		}
	}
}	
		printf ("\n");
		printf ("Hasil add\t\t:%d \nHasil or\t\t:%d \nHasil Eklusive Or\t:%d\n",maxAnd,maxOr,maxXor);
}


int main (){
	//variabel
	int n,k;
	/*		
	int i=5;
	int j=4;
	*/
	
	printf ("input n\t:  " ); scanf ("%d",&n);
	printf ("\ninput k\t: " ); scanf ("%d",&k);
	
	hitung_nilai_maximum (n,k);
	return 0;
	
}
