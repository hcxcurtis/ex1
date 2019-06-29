#include<stdio.h>
int main(int argc,char *argv[]){
    
    for(int i=1;i<argc;i++){
        if(argv[i][0]=='d')
            continue;
        printf("command line %d,value:%s\n",i,argv[i]);
        
    }
    
}