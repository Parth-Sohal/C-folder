#include <stdio.h>

int mazepath(int currentrow, int currentcolumn, int finalRow, int FinalCol){
    int DownWays = 0;
    int RightWays = 0;
    if(currentcolumn == FinalCol && currentrow == finalRow){
        return 1;
    }
    else if (currentcolumn == FinalCol)
    {
        DownWays += mazepath(currentrow+1,currentcolumn,finalRow,FinalCol);//1
    }
    else if (currentrow == finalRow)
    {
        RightWays +=  mazepath(currentrow,currentcolumn+1,finalRow,FinalCol);//1 
    }
    if(currentcolumn != FinalCol && currentrow != finalRow){
        DownWays += mazepath(currentrow+1,currentcolumn,finalRow,FinalCol);//1
        RightWays +=  mazepath(currentrow,currentcolumn+1,finalRow,FinalCol);//1
    }

    return RightWays+DownWays;
}


int main(int argc, char const *argv[])
{
    printf("%d",mazepath(1,1,4,10));
    return 0;
}
