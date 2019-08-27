#include <iostream>

using namespace std;

char tab[3][3];

int i, j, x, y;
int test=1, pl, vl=0;

void open(void);
void verif(int pl);
void play1(void);
void play2(void); 

int main()
{

      for(i=0;i<3;i++)
      {
         for(j=0;j<3;j++)
         {
            tab[i][j]=' ';
         }

      }
      
      while(test!=0)
      {     
         
         if(test!=0)
         {
                  
            play1();

            if(tab[x][y]==' ')
            {
               tab[x][y]='X';
               vl++;
               verif(pl);      
            }

            else
            {
               cout<<"\n Possisao já marcada!"<<endl;
               play1();
            }
         
         
         }
         if(test!=0)
         {
                     
            play2();

            if(tab[x][y]==' ')
            {
               vl++;
               tab[x][y]='O';
               verif(pl);   
            }

            else
            {
               
               cout<<"\n Possisao já marcada!"<<endl;
               play2();
            }
         
         
         }

        }

        return 0;

}

void open(void)
{
   cout<<endl;
   cout<<"   1   2   3   Y\n";
   cout<<" 1 "<<tab[0][0]<<" | "<<tab[0][1]<<" | "<<tab[0][2]<<endl;
   cout<<"  ---|---|--- \n ";
   cout<<"2 "<<tab[1][0]<<" | "<<tab[1][1]<<" | "<<tab[1][2]<<endl;
   cout<<"  ---|---|--- \n ";
   cout<<"3 "<<tab[2][0]<<" | "<<tab[2][1]<<" | "<<tab[2][2]<<endl;

   cout<<"\n X\n";

}

void play1(void)
{

   open();

   cout<<"\n'Jogador 1' Coordenada X: ";
   cin>>x;
   cout<<"'Jogador 1' Coordenada Y: ";
   cin>>y;
   pl=1;
   x--;
   y--;
      
}

void play2(void)
{
   open(); 

   cout<<"\n'Jogador 2' Coordenada X: ";
   cin>>x;
   cout<<"'Jogador 2' Coordenada Y: ";
   cin>>y;
   pl=2;
   x--;
   y--;

}

void verif(int pl)
{
         if(x==0)

         if((tab[0][0]==tab[0][1]) && (tab[0][1]==tab[0][2]))
         {
            open();
            cout<<"\n JOGADOR "<<pl<<" GANHOU!! \n";
            test=0;
         }
         
         if(x==1)

         if((tab[1][0]==tab[1][1]) && (tab[1][1]==tab[1][2]))
         {
            open();
            cout<<"\n JOGADOR "<<pl<<" GANHOU!! \n";
            test=0;
         }
         
         if(x==2)

         if((tab[2][0]==tab[2][1]) && (tab[2][1]==tab[2][2]))
         {
            open();
            cout<<"\n JOGADOR "<<pl<<" GANHOU!! \n";
            test=0;
         }

         if(y==0)

         if((tab[0][0]==tab[1][0]) && (tab[1][0]==tab[2][0]))
         {
            open();
            cout<<"\n JOGADOR "<<pl<<" GANHOU!! \n";
            test=0;
         }
         
         if(y==1)

         if((tab[0][1]==tab[1][1]) && (tab[1][1]==tab[2][1]))
         {
            open();
            cout<<"\n JOGADOR "<<pl<<" GANHOU!! \n";
            test=0;
         }

         if(y==2)

         if((tab[0][2]==tab[1][2]) && (tab[1][2]==tab[2][2]))
         {
            open();
            cout<<"\n JOGADOR "<<pl<<" GANHOU!! \n";
            test=0;
         }
         
         if(((x==0)&&(y==0))||((x==1)&&(y==1))||((x==2)&&(y==2)))
         {
            if((tab[0][0]==tab[1][1]) && (tab[0][0]==tab[2][2]))
            {
               open();
               cout<<"\n JOGADOR "<<pl<<" GANHOU!! \n";
               test=0;
            }
         }
         
         
         if(((x==0)&&(y==2))||((x==1)&&(y==1))||((x==2)&&(y==0)))
         {
            if((tab[0][2]==tab[1][1]) && (tab[0][2]==tab[2][0]))
            {
               open();
               cout<<"\n JOGADOR "<<pl<<" GANHOU!! \n";
               test=0;
            }
         }
         
}