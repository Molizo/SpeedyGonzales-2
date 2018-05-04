#include <iostream>
#include <time.h>
#include <windows.h>
#include <conio.h>
#include <stdlib.h>
#include <algorithm>

using namespace std;

int main()
{
    srand(time(NULL));
    int player,cif1,cif2,cif3,cif4,nr=0,points=0,start,end;
    for(int i=0;i<6;i++)
    {
        cif1=rand()%10;
        cif2=rand()%10;
        cif3=rand()%10;
        cif4=rand()%10;
        cout<<cif1<<" "<<cif2<<" "<<cif3<<" "<<cif4<<"\n";
        cout<<"Form the max number\n";
        start=clock();
        cin>>player;
        end=clock();
        if(end-start>4500)
        {
            cout<<"Time Limit\n Game Over\n";
            cout<<"Points: "<<points<<"\n";
            Beep(750,100);
            return 0;
        }
        int cifre[4];
        cifre[0]=cif1;
        cifre[1]=cif2;
        cifre[2]=cif3;
        cifre[3]=cif4;
        sort(cifre,cifre+4);
        nr=cifre[3]*1000+cifre[2]*100+cifre[1]*10+cifre[0];
        if(player==nr)
        {
            cout<<"Well played,you may continue...\n";
            points+=100;
        }
        else
        {
            cout<<"Sorry,please try again...\n";
            points-=100;
        }
    }
    cout<<"You have: "<<points<<"\n";
    return 0;
}
