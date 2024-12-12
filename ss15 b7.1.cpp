#include<stdio.h>
#include<string.h>
int main(){ 
int a=0;
int b=0;
int c=0;
   char arr[50]="Hello my gmail is test123@gmail.com";
   for(int i =0 ;i < strlen(arr) ;i++){
   		if(arr[i]>= 'a' && arr[i]<= 'z' ||arr[i]>= 'A' && arr[i]<= 'Z'){
   			a++;	
			}else {
			if (arr[i]>= 48 && arr[i]<= 57){
				b++;
			}
			else{
				c++;
			}
  	 }
}
  
   printf("\nso so chu la : %d",a);	 
   printf("\nso ki tu so la : %d",b);
   printf("\nso ki tu dac biet: %d",c);	   
return 0;
}
