#include <stdio.h>
char a[100003];
int lena = 0;
int min(int a,int b) {
	return a<b?a:b;
}
char b[23333][23];
int lenw[23333];
int cnt;

int pd1(int x,int y) {
	int minlen = min(lenw[x],lenw[y]);
	for(int i = 1 ; i <= minlen ; ++i) {
		if(b[y][i] > b[x][i]) return 1;
	}
	if(lenw[y]>lenw[x]) return 1;
	return 0;
}
int equal_(int i,int j) {
	if(lenw[i]!=lenw[j]) return 0;
    for(int k = 1 ; k <= lenw[i] ; ++k) {
    	if(b[i][k]!=b[j][k]) return 0;
    }
    return 1;
}
int main() {
	while((a[lena]=getchar())!=EOF) {
		if('A'<=a[lena] && a[lena]<='Z') 
		a[lena] += 'a'-'A';//全部转换为小写 
		
		lena++;	//总字符数 包含空格 
	}
	for(int i = 0 ; i < lena ; ++i) {
		if('a'<=a[i] && a[i]<='z') {
			cnt++;
			lenw[cnt]++;
			b[cnt][lenw[cnt]] = a[i];
			while('a'<=a[i+1] && a[i+1]<='z') {
				i++;
				lenw[cnt]++;
				b[cnt][lenw[cnt]] = a[i];
			}
		}
	}
	
	int maxcnt = 0,pos = 0;
	for(int i = 1 ; i <= cnt ; ++i) {
		
		int nowcnt = 0;
		
		for(int j = 1 ; j <= cnt ; ++j) 
		if(equal_(i,j)) nowcnt++;
		
		if(nowcnt==maxcnt) {
			if(pd1(pos,i)) pos = i;
		}
		
		if(nowcnt>maxcnt) {
			pos = i;
			maxcnt = nowcnt;
		}
	}
	
	for(int i = 1 ; i <= lenw[pos] ; ++i) 
	printf("%c",b[pos][i]);
	
	printf(" %d",maxcnt);
}

