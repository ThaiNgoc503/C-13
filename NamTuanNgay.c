#include <stdio.h>
#include <time.h>

//Cho truoc N ngày, hay doi N thanh so nam, so tuan và sp ngày. Biet rang mot nam có 365 ngày.
int main() {
	clock_t begin = clock();
	int N;
	int nam, tuan, ngay;
	scanf("%d", &N);
	if(N > 0){
		nam = N / 365;
		tuan = (N % 365) / 7;
		ngay = (N % 365) % 7;
		printf("%d %d %d\n", nam, tuan, ngay);
	} ;
	clock_t end = clock();
	printf("%f", (float)(end-begin)/CLOCKS_PER_SEC); //moi tick trong 1 phut
	//nhanh nh?t
	
	return 0;
}
