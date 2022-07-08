#include<stdio.h>
#include <stdlib.h>
#define width 9
void display(char *scr);
void mov(char k,int,int);
void show_frame();
char arr[width][width] = {  '.','.','.','.','.','.','.','.','.',
                            '.','.','.','.','.','.','.','.','.',
                            '.','.','.','.','.','.','.','.','.',
                            '.','.','.','.','.','.','.','.','.',
                            '.','.','.','.','.','.','.','.','.',
                            '.','.','.','.','.','.','.','.','.',
                            '.','.','.','.','.','.','.','.','.',
                            '.','.','.','.','.','.','.','.','.',
                            '.','.','.','.','.','.','.','.','.'};
        int pos_x = 0,pos_y=0;
               
int main(){
    char key = 0;
    scanf("%d %d",&pos_x,&pos_y);
    arr[pos_x][pos_y]='8' ; 
    while(key!='q'){
    mov(key,pos_x,pos_y);
    system("clear");
    show_frame();
    printf("\nx:%d\ny:%d\n",pos_x,pos_y);
    key = getchar();

    }
    

}

void mov(char k,int x,int y){
    // if((pos_x<width-1 && pos_y<width-1) && (pos_x>=0 && pos_y>=0))

    {
     switch (k) {
        case 'a': arr[x][y-1] = arr[x][y];
        arr[x][y]='.';
        pos_y--;
        case 'd': arr[x][y+1] = arr[x][y];
        arr[x][y]='.';
        pos_y++;
        case 'w': arr[x-1][y] = arr[x][y];
        arr[x][y]='.';
        pos_x--;
        case 's': arr[x+1][y] = arr[x][y];
        arr[x][y]='.';
        pos_x++;
    }
    
    
    }
    }

void show_frame(){
    for (int i=0; i<width ; i++) {
        for (int j =0; j<width; j++) {
         printf("%c",arr[i][j]);
    
        }
        printf("\n");
    }
}