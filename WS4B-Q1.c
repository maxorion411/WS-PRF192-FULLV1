#include<stdio.h>
#include<stdlib.h>
#include<math.h>


void input(int *num, int *den){

	printf("\nEnter numerator : ");scanf("%d",num);
	printf("\nEnter deniminator : ");scanf("%d",den);
	while( *den == 0){
		printf("\nEnter deniminator : ");scanf("%d",den);
	}

}

void display(int num, int den){
	
}

void simplify(int *num, int *den){
	int tu = *num;
	int mau = *den;
	if( tu < 0 ){
		tu = -1 * tu;
	}
	if ( mau < 0){
		mau = -1 *mau;
	}
int max;
while (tu*mau != 0){ 
        if (tu > mau){
            tu %= mau; 
        }else{
            mau %= tu;
        }
    }
    max = tu + mau;
printf("\n%d/%d = %d/%d",*num, *den, *num/max,*den/max);
}




int main(int argc, char** argv) {
	int  t, m;
	char check='y';
	
	while(check=='y'){
	printf("1. input fraction ");
	input(&t, &m);
printf("\n2.Simplifi fraction");
simplify(&t,&m);
	printf("\nEnter (y/n)? ");std::cin>>check;
	}
	return 0;
	
}
