#include <stdio.h>

int main(void) {
	// your code goes here
	int t ;
	scanf("%d", &t) ;
	for (int i=1 ; i<=t ; i++){
	    int a, b ;
	    scanf("%d %d", &a, &b) ;
	    if(a==b){
	        printf("=\n");
	    }
	    else if(a>b){
	        printf(">\n") ;
	    }
	    else  
	    printf("<\n") ;
	}
	return 0;
}

