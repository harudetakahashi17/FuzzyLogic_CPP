#include "header.h"

int main()
{
    List L;
    int emo;
    int pro;
    int arr[20][2] ={
        {97,74},
        {36,85},
        {63,43},
        {82,90},
        {71,25},
        {79,81},
        {55,62},
        {57,45},
        {40,65},
        {57,45},
        {77,70},
        {68,75},
        {60,70},
        {82,90},
        {40,85},
        {80,68},
        {60,72},
        {50,95},
        {100,18},
        {11,99}
    };

    createList(L);
    for(int i = 0; i < 20; i++){
    system("cls");
    cout<<"B"<<i+1<<endl;
    emo = arr[i][0];
    pro = arr[i][1];
    cout<<"Emotion : "<<emo<<endl;
    cout<<"Provoke : "<<pro<<endl;
    mfEmo(L,emo);
    mfPro(L,pro);
    showList(L);
    infMember(L);
    clearList(L);
    getch();
    }
    return 0;
}
