#include<stdio.h>
int main(){
int fila,col;
printf("En este problema graficaremos una serie de ordenamientos:\n");
for(fila=1;fila<8;fila++){
	switch(fila){
			case 1:case 7: for(col=1;col<8;col++){if(col==4)printf("*");
			       	       			      else if(col==7)printf("o\n");
			                                      else printf("o"); }
							      break;		    
			case 2:case 6: for(col=1;col<8;col++){if((col==3)||(col==4)||(col==5))printf("*");
			                                      else if(col==7)printf("o\n");
			                                      else printf("o");} 
							      break;	
			case 3:case 5: for(col=1;col<8;col++){if(col==1)printf("o");
			                                      else if(col==7)printf("o\n");
			                                      else printf("*");}
							      break;	    
			case 4: for(col=1;col<8;col++) {if(col==7) printf("*\n");
							else printf("*");}
							      break;	    	    
			}	
			  }
return 0;
}
