
#include<stdio.h>
#include<stdint.h>
#define DIM 2
uint32_t set_array(int bits[DIM], int len);
int main() {
  int bits[DIM];
  int i,len=5;
  uint32_t risultato;
  
  for(i=0;i<DIM;i++){
  printf("inserisci il valore numero %d:  ",i+1);
  scanf("%d",&bits[i]);}
  
  risultato=set_array(bits,len);
  printf("%u",risultato);
  return 0;}
  
  
uint32_t set_array(int bits[DIM], int len){
 	int j;
 	uint32_t b[len];
 	uint32_t risultato=0;
 	
 	for(j=0;j<len;j++){
 		b[j]=1<<bits[j];
 		risultato=risultato|b[j];}
	 
	 return risultato;
 }
  

  
  
   
