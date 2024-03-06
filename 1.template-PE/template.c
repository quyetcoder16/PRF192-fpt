#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

//int code =0;
//	for(code=0;code<=255;code++){
//		printf("%c : %d, %o, %X\n", code, code, code, code); code in ra ki tu ,thap phan, bat phan , thap luc phan
//		if(code !=0 && code %20==0) getchar();
//	}

//====================================================== xu ly mang

void add(int value,int *a,int *pn){
	a[*pn] = value;
	(*pn)++;
}

int removeOne (int pos,int *a,int *pn){
	if(pos<0||pos>*pn) return 0;
	int i;
	for(i=pos;i<*pn-1;i++) a[i] = a[i+1];
	(*pn)--;
	return 1;
}

int removeAll(int x,int *a,int *pn){
	int res = 0;
	int i,j;
	for(i=(*pn)-1;i>=0;i--){
		if(a[i]==x){
			res =1;
			for(j=i;j<(*pn)-1;j++) a[j] = a[j+1];
			(*pn)--;
		}
	}
	return res;
}

int binarySearch(int x,int a[],int n){
	int i=0,j=n-1,c;
	while(i<=j){
		c=(i+j)/2;
		if(x==a[c]) return c;
		if(x<a[c]) j=c-1;
		else i=c+1;
	}
	return -1;
}

void ascSelectionSort(int *a,int n){
	int minIndex;
	int i,j;
	for(i=0;i<n-1;i++){
		minIndex = i;
		for(j=i+1;j<n;j++) if(a[minIndex]>a[j]) minIndex = j;
		if(minIndex > i){
			int  t = a[minIndex];
			a[minIndex] = a[i];
			a[i] = t;
		}
	}
}

void ascBubleSort(int *a,int n){
	int i,j;
	for(i=0;i<n-1;i++){
		for(j=n-1;j>i;j--){
			if(a[j]<a[j-1]){
				int t = a[j];
				a[j] = a[j-1];
				a[j-1] = t;
			}
		}
	}
}

int firstLinearSearch(int x,int a[],int n){
	int i;
	for(i=0;i<n;i++){
		if(x==a[i]) return i;
	}
	return -1;
}

int lastLinearSearch(int x,int a[],int n){
	int i;
	for(i=n-1;i>=0;i--){
		if(x==a[i]) return i;
	}
	return -1;
}

void input(int *a,int n){
	int i;
	for(i=0;i<n;i++) scanf("%d",&a[i]);
}

int max(int a[],int n){
	int res = a[0];
	int i;
	for(i=1;i<n;i++)
		if(res<a[i]) res = a[i];
	return res;
}

void sort(float *a,int size){
	int i,j;
	float t =0;
	for(i=0;i<size-1;i++){
		for(j=i+1;j<size;j++){
			if(a[i]>a[j]){
    			t=a[i];
    			a[i]=a[j];
    			a[j]=t;
			}
		}
	}
}

//sort don't change root array
void sortArray(float *array, int size) {
    float** adds = (float**)calloc(size,sizeof(float*));
    int i,j;
    for(i=0;i<size;i++) adds[i] = &array[i];
    int *t;
    for(i=0;i<size-1;i++){
    	for(j=i+1;j<size;j++){
    		if(*adds[i]>*adds[j]){
    			t=adds[i];
    			adds[i]=adds[j];
    			adds[j]=t;
			}
		}
	}
	for(i=0;i<size;i++) printf("%.2f ",*adds[i]);
	free(adds);
	printf("\n");
}

void printArr(float *a,int size){
	int i = 0;
	for(i=0;i<size;i++) {
		printf("%.2f ",a[i]);
	}
	printf("\n");
}

//======================check date
int isValidDate(int day, int month, int year) {
    if (year < 0 || month < 1 || month > 12 || day < 1)
        return 0;
    int maxDays;
    switch (month) {
        case 2:
            if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
                maxDays = 29;
            else
                maxDays = 28;
            break;
        case 4:
        case 6:
        case 9:
        case 11:
            maxDays = 30;
            break;
        default:
            maxDays = 31;
    }
    return day <= maxDays;
}

int checkDate(int d,int m,int y){
	int maxd = 31;
	if(d<1||d>31) return 0;
	if (m==4||m==6||m==9||m==11) maxd = 30;
	if(m==2){
		if(y%400==0||(y%4==0&&y%100!=0)) maxd=29;
		else maxd=28;
	}
	return d>maxd;
}

//=========check so nguyen to
int isPrime(long long n){
	if(n<2) return 0;
	long long i = 2;
	for(i=2;i<=sqrt(n);i++){
		if(n%i==0) return 0;
	}
	return 1;
}

int sumDigits(long long n){
	long res = 0;
	while(n>0){
		res+=(n%10);
		n/=10;
	}
	return res;
}

long long gcd(long long a,long long b){
	while(b!=0){
		long long tmp = b;
		b = a%b;
		a = tmp;
	}
	return a;
}

long long lcm(long long a,long long b){
	return a*b/gcd(a,b);
}

//ham linh tinh
//fflush(stdin); xoa bo dem 
//   c2= getchar();
int isVowel(int c){
	return (c=='a'||c=='A'||c=='E'||c=='e'||c=='i'||c=='I'||c=='o'||c=='O'||c=='u'||c=='U');
}

//while((c=getchar())!='\n'){
//		if(c>='0'&&c<='9' ) numOfDigits++;
//		else {
//			if((c>='a'&&c<='z')||(c>='A'&&c<='Z')) numOfAlpha++;
//			else numOfOther++;
//		}
//	}
//	printf("numOfDigits = %d\n",numOfDigits);
//	printf("numOfAlpha = %d\n",numOfAlpha);
//	printf("numOfOther = %d\n",numOfOther);

//printf("%-20s:%10d%15ld%5c%12.6lf\n","The inputed values are",n,lo,ch,d); can trai , phai






//===================================== string ==================================
//char s[11] = "hello";
//	gets(s);
//	puts(s);
//scanf("%[^\n]", str); nhap ca khoang trang
int countingWords(char *s){
	int l = strlen(s);
	int count = 0;
	int i=0;
	for(i=0;i<l;i++){
		if(s[i]!=' '&&(i==0||s[i-1]==' ')) count++;
	}
	return count;
}

int checkDigit(char c){
	return (c>='0'&&c<='9');
}

int countingDigits(char *s){
	int l = strlen(s);
	int count = 0;
	int i=0;
	for(i=0;i<l;i++){
		if(checkDigit(s[i])&&(i==0|| !checkDigit(s[i-1]))) count++;
	}
	return count;
}

void nhap(char names[][31],int n){
	int i;
	for(i=0;i<n;i++){
		printf("nhap ten thu %d/%d:",i+1,n);
		fflush(stdin);
		scanf("%[^\n]",names[i]);
		strupr(names[i]);
	}
}

void xuat(char names[][31],int n){
	int i;
	for(i=0;i<n;i++) puts(names[i]);
}

void sapxep(char names[][31],int n){
	int i,j;
	char t[31];
	for(i=0;i<n-1;i++){
		for(j=n-1;j>i;j--){
			if(strcmp(names[j],names[j-1])<0){
				strcpy(t,names[j]);
				strcpy(names[j],names[j-1]);
				strcpy(names[j-1],t);
			}
		}
	}
}

void xoaChuoi(char str[], const char sub[]) {
    int len = strlen(sub); // Ð? dài c?a chu?i con c?n xóa
    char *pos = strstr(str, sub); // Tìm v? trí xu?t hi?n d?u tiên c?a chu?i con

    // N?u chu?i con không t?n t?i trong chu?i l?n
    if (pos == NULL) {
        printf("Chuoi con khong ton tai trong chuoi lon.\n");
        return;
    }

    // Di chuy?n các ký t? sau chu?i con lên trên d? xóa chu?i con
    while (*pos) {
        *pos = *(pos + len);
        pos++;
    }
}

void xoaPhanChuoi(char str[], int x, int y) {
    int len = strlen(str);
    int i, j;

    // N?u v? trí x và y không h?p l?, ho?c v? trí x l?n hon v? trí y
    if (x < 0 || y >= len || x > y) {
        printf("Vi tri x hoac y khong hop le.\n");
        return;
    }

    // Di chuy?n các ký t? t? v? trí y+1 d?n cu?i chu?i lên trên d? ghi dè lên v? trí x
    for (i = y + 1, j = x; i <= len; ++i, ++j) {
        str[j] = str[i];
    }
}

int main(){
	char s1[21];
	char s2[21];
	printf("enter string s1:");
	gets(s1);
	printf("enter string s2: ");
	gets(s2);
	printf("lengths of s1: %d, s2: %d\n",strlen(s1),strlen(s2));
	printf("compare s1 with s2: %d\n",strcmp(s1,s2));
	strupr(s1); // ham in hoa
	printf("uppercase s1 :%s\n",s1);
	strcat(s1,s2);
	printf("after append s2 to s1:%s\n",s1);
	char s3[10];
	printf("enter sub-string of s1:");
	gets(s3);
	char* ptr = strstr(s1,s3);
	printf("Address of s1: %u\n",s1);
	printf("Address of s3: %u\n",s3);
	printf("Address of substring: %u\n",ptr);
	return 0;
}
