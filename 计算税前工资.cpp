#include<stdio.h>
int main(){
	int i,m;
	double s;
	scanf("%d",&i);
	if(i<=3500)
	s=i;
	if(i>3500 && i<=4955)
	s=(i-3500*0.03)/(1-0.03);
	if(i>4955 && i<=8655)
	s=(i+45-5000*0.1)/(1-0.1);
	if(i>8655 && i<=11255)
	s=(i+345-9000*0.2)/(1-0.2);
	if(i>11255 && i<=30755)
	s=(i+1245-12500*0.25)/(1-0.25);
	if(i>30755 && i<=44755)
	s=(i+1245+6500-38500*0.3)/(1-0.3);
	if(i>44755 && i<=61905)
	s=(i+12500+1245-58500*0.35)/(1-0.35);
	if(i>61905)
	s=(i+12500+87500+1245-83500*0.45)/(1-0.45);
	m=s/100*100;
	printf("%d",m);
	return 0;
	 
} 
