 # include<stdio.h>
   
int main (){
   
      int len,widt ;
   
      printf("length: ");
      scanf("%d",&len);
   
      printf("width: ");
      scanf("%d",&widt);
  
      int per = (len + widt)*2;
      int area = len * widt;
  
      printf("Perimeter of rectangle is: %d\n",per);
      printf("Area of rectangle is: %d\n", area);
  
      return 0;
  }

