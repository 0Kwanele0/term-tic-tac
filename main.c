#include <stdio.h>

void displayBoard();
int checkWin();

int main(){
    int over = 0;
    int selection;

    char *one   = " ";
    char *two   = " ";
    char *three = " ";
    char *four  = " ";
    char *five  = " ";
    char *six   = " ";
    char *seven = " ";
    char *eight = " ";
    char *nine  = " ";

    while (over == 0){
        displayBoard(one, two,three, four, five,six, seven, eight, nine);

        printf("\nchoose empty location: ");
        scanf("%d", &selection);

        switch(selection){
            case 1:
                if (one != "O" && one != "X"){
                    one = "O";
                    break;
                }
                break;
            case 2:
               two = "X";
                break;
            case 3:
                if (three != "O" && three != "X"){
                    three = "O";
                    break;
                }
                break;
            case 4:
                if (four != "O" && four != "X"){
                    four = "O";
                    break;
                }
                break;
            case 5:
                if (five != "O" && five != "X"){
                    five = "O";
                    break;
                }
                break;
            case 6:
                if (six != "O" && six != "X"){
                    six = "O";
                    break;
                }
                break;
            case 7:
                if (seven != "O" && seven != "X"){
                    seven = "O";
                    break;
                }
                break;
            case 8:
                if (eight != "O" && eight != "X"){
                    eight = "O";
                    break;
                }
                break;
            case 9:
                if (nine != "O" && nine != "X"){
                    nine = "O";
                    break;
                }
                break;
            default:
                break;
        }
    }
    return 0;
}

void displayBoard(char one[],
       char two[],
       char three[],
       char four[],
       char five[],
       char six[],
       char seven[],
       char eight[],
       char nine[]){
    printf("\n -----------------");
    printf("\n|  %s  |  %s  |  %s  |", one, two, three);
    printf("\n|-----|-----|-----|");
    printf("\n|  %s  |  %s  |  %s  |", four, five, six);
    printf("\n|-----|-----|-----|");
    printf("\n|  %s  |  %s  |  %s  |", seven, eight, nine);
    printf("\n -----------------");
}

// display board
// selects a number ( square )
// populate the squire
// check win
//      if win: end game      
//
