#include <stdio.h>
#include <stdlib.h>


int main() {
	
	char text[50], shift[10];
	int x;
	int i;
	
	printf("Enter the text which will be encrypted.\n");
	gets(text);
	
	printf("Enter shift direction. ('right' or 'left')\n");
	gets(shift);
	
	printf("Enter the number of shift operation\n");
	scanf("%d",&x);
	
	i=0;
	int r=0,l=0;
	char test1[]={'r','i','g','h','t'};
	char test2[]={'l','e','f','t'};
	
	while(shift[i]!='\0'){
		if(shift[i]==test1[i])
		r++;
		else if(shift[i]==test2[i])
		l++;
		
		i++;
	}
	
	if(l==4){
		x=x*-1;
	}
	else if (r!=5){
		printf("Bad arguments, wrong shift direction.\n");
		return -1;
	}
	
	
    i=0;
    while(text[i]!='\0'){
    	if(text[i]<=90 && text[i]>=65){
    		if ( text[i]+x>90 ){
    		  text[i]=(text[i]+x)%91+65;	
			}
			else if(text[i]+x <65){
    			text[i]= (text[i]+x)+26;
			}
			else
			text[i] = (text[i]+x);
		}
		
		else if (text[i]<=122 && text[i]>=97){
			if ( text[i]+x>122 ){
			  text[i]=(text[i]+x)%123+97 ;	
			}
			else if (text[i]+x <97){
				text[i]= (text[i]+x)+26;
    			
			}
			else
			text[i] = (text[i]+x);
			
		}
		
    	
		
    	
    	i++;
	}
	
	printf("Encrypted text: ");
	puts(text);
	printf("\n");
	
	//*****************************************************************
	//decryption
	
	//simply, we use x for decryption, but in reverse way.
	
	x=-1*x;
	
	i=0;
    while(text[i]!='\0'){
    	if(text[i]<=90 && text[i]>=65){
    		if ( text[i]+x>90 ){
    		  text[i]=(text[i]+x)%91+65;	
			}
			else if(text[i]+x <65){
    			text[i]= (text[i]+x)+26;
			}
			else
			text[i] = (text[i]+x);
		}
		
		else if (text[i]<=122 && text[i]>=97){
			if ( text[i]+x>122 ){
			  text[i]=(text[i]+x)%123+97 ;	
			}
			else if (text[i]+x <97){
				text[i]= (text[i]+x)+26;
    			
			}
			else
			text[i] = (text[i]+x);
			
		}
		
    	
		
    	
    	i++;
	}
	
	
	printf("Decrypted text: ");
	puts(text);
	printf("\n");
	
	
	return 0;
}
