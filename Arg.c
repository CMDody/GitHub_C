#include <stdio.h>

int main(int narg, char *arg[]) {
    
    printf("%d arguments had been entered \n", narg);
    
    if(narg>0) {
        
        for(int i=0;i<narg;i++) {
            printf("%d ---> %s \n", i, arg[i]);
        }
        
    }
    
    return 0;
}