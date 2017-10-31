#include <stdio.h>
int main (){
	int hand,i;
	do{
	printf("亲爱的张吉辛请从0-9之间选择一个数：");
	scanf("%d",&hand);
    }while(hand<0||hand>9);
    
    printf("你选择了下辈子成为…");
	switch(hand){
	    case 3:
	    case 4:
	    case 5:
	    case 6:
	    case 7:
	    case 8:
	    case 9:
	    case 2:
	    case 0:puts("林奕彤的猪^(*￣(oo)￣)^"); break;
		case 1:puts("林奕彤的小仙女"); break; 
    }
	printf("要从新选择吗？【yes……0/no……9】");
	scanf("%d",&i);
	if(i==0) 
	puts("还是只能作林奕彤的猪.  哈哈哈哈哈哈~~\n\n");
	
    return 0;
}
